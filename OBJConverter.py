

fileName = "Example Files\Charmander.obj"
outputCPPName = "Output\Charmander.h"
name = "Charmander"

class Vector3D:
    X = 0.0
    Y = 0.0
    Z = 0.0

class Triangle:
    A = 0
    B = 1
    C = 2

def GetHeader():
    return "#pragma once\n\n#include \"Vector3D.h\"\n"

def GetHeader():
    return "#pragma once\n\n#include \"..\Render\Object3D.h\"\n#include \"..\Materials\SimpleMaterial.h\"\n\nclass " + name + "{\nprivate:\n"

def GetVertices(vertices):
    basisVertices = "\tVector3D basisVertices[" + str(int(len(vertices))) + "] = {"

    for i, vertex in enumerate(vertices):
        if i in {len(vertices) - 1}:
            basisVertices += "Vector3D(" + f'{vertex.X:.4f}' + "f," + f'{vertex.Y:.4f}' + "f," + f'{vertex.Z:.4f}' + "f)};\n" #last entry
        else:
            basisVertices += "Vector3D(" + f'{vertex.X:.4f}' + "f," + f'{vertex.Y:.4f}' + "f," + f'{vertex.Z:.4f}' + "f),"

    return basisVertices

def GetIndexes(triangles):
    basisIndexes = "\tIndexGroup basisIndexes[" + str(len(triangles)) + "] = {"

    for i, index in enumerate(triangles):
        if i in {len(triangles) - 1}:
            basisIndexes += "IndexGroup(" + str(index.A) + "," + str(index.B) + "," + str(index.C) + ")};\n"
        else:
            basisIndexes += "IndexGroup(" + str(index.A) + "," + str(index.B) + "," + str(index.C) + "),"

    return basisIndexes

def GetObject(vertices, triangles):
    lines =  "\tTriangleGroup triangleGroup = TriangleGroup(&basisVertices[0], &basisIndexes[0], " + str(int(len(vertices))) + ", " + str(len(triangles)) + ");\n"
    lines += "\tSimpleMaterial simpleMaterial = SimpleMaterial(RGBColor(128, 128, 128));\n"
    return lines + "\tObject3D basisObj = Object3D(&triangleGroup, &simpleMaterial);\n\n"

def GetFooter():
    publicFunctions = "public:\n"
    publicFunctions += "\t" + name + "(){}\n\n"
    publicFunctions += "\tObject3D* GetObject(){\n\t\treturn &basisObj;\n\t}\n};\n"

    return publicFunctions

def ReadVertices(data):
    lines = data.splitlines()
    vectors = []

    for line in lines:
        if line.find("v ") >= 0:
            spaces = line.split(" ")

            print(spaces)

            v = Vector3D()

            v.X = float(spaces[1])
            v.Y = float(spaces[2])
            v.Z = float(spaces[3])

            vectors.append(v)
    
    return vectors


def ReadIndexes(data):
    lines = data.splitlines()
    indexes = []

    for line in lines:
        if line.find("f ") >= 0:
            spaces = line.split(" ")

            print(spaces)

            t = Triangle()

            t.A = int(spaces[1]) - 1
            t.B = int(spaces[2]) - 1
            t.C = int(spaces[3]) - 1

            indexes.append(t)
    
    return indexes

with open(fileName, 'r') as file:
    data = file.read()

    vertices = ReadVertices(data)
    indexes = ReadIndexes(data)

    output = GetHeader() + GetVertices(vertices) + GetIndexes(indexes) + GetObject(vertices, indexes) + GetFooter()

    print(output)
    f = open(outputCPPName, "w")
    f.write(output)
    f.close()
    