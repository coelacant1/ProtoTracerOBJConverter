#pragma once

#include "..\Render\Object3D.h"
#include "..\Materials\SimpleMaterial.h"

class Charmander{
private:
	Vector3D basisVertices[185] = {Vector3D(11.2809f,8.9741f,-24.9269f),Vector3D(7.8730f,15.6448f,-26.4365f),Vector3D(9.2603f,23.3768f,9.3455f),Vector3D(13.7687f,22.6594f,8.9474f),Vector3D(13.3470f,17.3381f,9.0810f),Vector3D(7.8730f,28.4530f,-30.2197f),Vector3D(7.8730f,25.2210f,-27.0858f),Vector3D(-3.3024f,-0.0000f,9.3471f),Vector3D(9.5353f,25.2127f,-27.0998f),Vector3D(15.6653f,31.2658f,0.2850f),Vector3D(-1.3646f,-0.0000f,7.3252f),Vector3D(13.6481f,40.2612f,8.3733f),Vector3D(11.7999f,40.6592f,9.5425f),Vector3D(-0.0243f,-0.0000f,8.6638f),Vector3D(13.2140f,40.6651f,6.4139f),Vector3D(11.8351f,44.8156f,8.4209f),Vector3D(12.0919f,40.7717f,6.7707f),Vector3D(14.1831f,45.2229f,6.6945f),Vector3D(-1.7692f,-0.0000f,-4.7126f),Vector3D(12.2863f,43.4886f,7.0394f),Vector3D(-0.9934f,-0.0000f,2.5323f),Vector3D(12.0879f,31.7695f,11.6103f),Vector3D(17.8460f,36.1592f,5.9316f),Vector3D(17.0923f,39.4790f,6.2052f),Vector3D(10.4572f,26.6014f,6.4928f),Vector3D(7.8730f,27.0646f,7.4681f),Vector3D(12.4544f,23.2366f,7.7964f),Vector3D(14.4181f,8.1486f,4.7547f),Vector3D(12.5895f,-0.0000f,-0.6485f),Vector3D(-1.7698f,3.0748f,-5.5263f),Vector3D(12.7085f,4.9954f,-5.5676f),Vector3D(9.5155f,19.8342f,9.1902f),Vector3D(7.8730f,18.4886f,9.6850f),Vector3D(9.8277f,16.6511f,9.0235f),Vector3D(-6.2196f,-0.0000f,1.2727f),Vector3D(7.8730f,16.5287f,9.6400f),Vector3D(8.8234f,28.4530f,-30.2197f),Vector3D(17.0835f,17.4977f,0.6098f),Vector3D(-5.8259f,-0.0000f,7.2439f),Vector3D(13.6219f,16.2061f,7.7818f),Vector3D(18.1381f,14.5256f,1.6624f),Vector3D(14.1755f,3.2282f,-5.4405f),Vector3D(10.4124f,-0.0000f,-8.3278f),Vector3D(7.8730f,-0.0000f,1.1076f),Vector3D(14.9142f,4.7812f,3.4748f),Vector3D(14.6934f,48.6657f,-0.8051f),Vector3D(1.9341f,-0.0000f,4.1223f),Vector3D(0.8318f,4.7812f,3.4748f),Vector3D(18.6273f,36.8192f,-1.7198f),Vector3D(13.2940f,32.7875f,-5.8678f),Vector3D(2.2732f,-0.0000f,-4.5201f),Vector3D(14.5674f,47.1266f,5.9295f),Vector3D(10.7604f,20.9921f,8.8063f),Vector3D(10.9629f,18.4895f,8.6893f),Vector3D(13.0324f,18.9670f,9.6343f),Vector3D(11.8385f,21.2505f,10.0408f),Vector3D(11.4470f,19.9047f,9.8468f),Vector3D(-4.1536f,-0.0000f,6.7223f),Vector3D(7.8730f,18.7148f,-24.2528f),Vector3D(-4.2227f,2.9316f,6.9835f),Vector3D(10.4859f,22.9777f,-29.6985f),Vector3D(7.8730f,15.9022f,-29.9420f),Vector3D(11.1150f,18.6182f,-29.7185f),Vector3D(9.3122f,15.9022f,-29.4419f),Vector3D(9.5525f,15.7255f,-27.8940f),Vector3D(10.4268f,18.2836f,-26.6849f),Vector3D(15.3132f,26.9840f,3.4063f),Vector3D(19.3092f,27.0561f,1.3603f),Vector3D(-1.3142f,2.8733f,7.2290f),Vector3D(16.0137f,18.9800f,7.4263f),Vector3D(20.6539f,22.2852f,1.1908f),Vector3D(7.8730f,31.8440f,12.7649f),Vector3D(-3.7936f,4.5995f,2.6213f),Vector3D(10.8980f,29.4424f,9.3360f),Vector3D(12.5222f,34.4295f,13.8040f),Vector3D(-6.0130f,12.9539f,-4.6559f),Vector3D(-6.4225f,10.1982f,4.3401f),Vector3D(11.8048f,38.6674f,13.8145f),Vector3D(13.5404f,43.5789f,5.6947f),Vector3D(7.8730f,43.0387f,-7.9609f),Vector3D(7.8730f,52.4782f,-0.9064f),Vector3D(15.6257f,40.7348f,-6.3291f),Vector3D(13.0415f,6.0934f,-14.6682f),Vector3D(9.1256f,7.3428f,-28.3075f),Vector3D(7.8730f,7.9558f,-18.8203f),Vector3D(9.3449f,-0.0000f,-22.6308f),Vector3D(7.8730f,-0.0000f,-19.6858f),Vector3D(7.8730f,-0.0000f,-22.4799f),Vector3D(11.9795f,4.7097f,-20.8071f),Vector3D(9.8494f,-0.0000f,-15.1169f),Vector3D(7.8730f,12.9052f,-13.9403f),Vector3D(13.5514f,16.6937f,-11.0260f),Vector3D(14.2869f,7.7556f,-9.5564f),Vector3D(14.2634f,25.8362f,-7.7868f),Vector3D(21.7590f,12.9539f,-4.6559f),Vector3D(17.6420f,17.1509f,-6.5496f),Vector3D(22.1685f,10.1982f,4.3401f),Vector3D(19.5396f,4.5995f,2.6213f),Vector3D(17.0602f,2.8733f,7.2290f),Vector3D(15.7703f,-0.0000f,8.6638f),Vector3D(19.0484f,-0.0000f,9.3471f),Vector3D(19.8996f,-0.0000f,6.7223f),Vector3D(17.5158f,3.0748f,-5.5263f),Vector3D(13.4728f,-0.0000f,-4.5201f),Vector3D(-1.8960f,17.1509f,-6.5496f),Vector3D(19.9687f,2.9316f,6.9835f),Vector3D(2.1946f,16.6937f,-11.0260f),Vector3D(21.5719f,-0.0000f,7.2439f),Vector3D(17.5152f,-0.0000f,-4.7126f),Vector3D(13.8119f,-0.0000f,4.1223f),Vector3D(21.9656f,-0.0000f,1.2727f),Vector3D(17.1106f,-0.0000f,7.3252f),Vector3D(16.7394f,-0.0000f,2.5323f),Vector3D(6.1935f,15.7255f,-27.8940f),Vector3D(2.3990f,17.3381f,9.0810f),Vector3D(6.2107f,25.2127f,-27.0998f),Vector3D(0.0807f,31.2658f,0.2850f),Vector3D(-2.1000f,36.1592f,5.9316f),Vector3D(2.0979f,40.2612f,8.3733f),Vector3D(2.2056f,43.5789f,5.6947f),Vector3D(3.4597f,43.4886f,7.0394f),Vector3D(3.9109f,44.8156f,8.4209f),Vector3D(3.6581f,31.7695f,11.6103f),Vector3D(3.2238f,34.4295f,13.8040f),Vector3D(3.9412f,38.6674f,13.8145f),Vector3D(7.8730f,41.5227f,12.0431f),Vector3D(3.7665f,4.7097f,-20.8071f),Vector3D(2.7045f,6.0934f,-14.6682f),Vector3D(7.8730f,40.1804f,14.7726f),Vector3D(-2.8813f,36.8192f,-1.7198f),Vector3D(3.9461f,40.6592f,9.5425f),Vector3D(1.5629f,45.2229f,6.6945f),Vector3D(-1.3463f,39.4790f,6.2052f),Vector3D(5.8966f,-0.0000f,-15.1169f),Vector3D(1.1786f,47.1266f,5.9295f),Vector3D(5.2888f,26.6014f,6.4928f),Vector3D(0.4328f,26.9840f,3.4063f),Vector3D(1.3279f,8.1486f,4.7547f),Vector3D(3.1565f,-0.0000f,-0.6485f),Vector3D(1.5705f,3.2282f,-5.4405f),Vector3D(3.0375f,4.9954f,-5.5676f),Vector3D(4.7831f,18.4895f,8.6893f),Vector3D(7.8730f,10.7871f,-22.9225f),Vector3D(7.8730f,19.8337f,9.7097f),Vector3D(7.8730f,20.9912f,9.7310f),Vector3D(7.8730f,23.4772f,9.7725f),Vector3D(5.9183f,16.6511f,9.0235f),Vector3D(5.2601f,22.9777f,-29.6985f),Vector3D(-2.3921f,14.5256f,1.6624f),Vector3D(7.8730f,-0.0000f,-7.8763f),Vector3D(1.0526f,48.6657f,-0.8051f),Vector3D(6.4011f,-0.0000f,-22.6308f),Vector3D(-1.3375f,17.4977f,0.6098f),Vector3D(-4.9079f,22.2852f,1.1908f),Vector3D(7.8730f,7.2380f,-28.4710f),Vector3D(6.6204f,7.3428f,-28.3075f),Vector3D(4.9856f,20.9921f,8.8063f),Vector3D(6.4857f,23.3768f,9.3455f),Vector3D(3.9075f,21.2505f,10.0408f),Vector3D(6.2305f,19.8342f,9.1902f),Vector3D(2.7136f,18.9670f,9.6343f),Vector3D(4.4651f,8.9741f,-24.9269f),Vector3D(-0.2677f,18.9800f,7.4263f),Vector3D(4.2990f,19.9047f,9.8468f),Vector3D(6.9226f,28.4530f,-30.2197f),Vector3D(4.6310f,18.6182f,-29.7185f),Vector3D(5.3192f,18.2836f,-26.6849f),Vector3D(7.8730f,20.7291f,-32.2099f),Vector3D(6.4338f,15.9022f,-29.4419f),Vector3D(1.4591f,7.7556f,-9.5564f),Vector3D(5.3336f,-0.0000f,-8.3278f),Vector3D(7.8730f,6.6711f,6.2319f),Vector3D(2.1241f,16.2061f,7.7818f),Vector3D(3.2916f,23.2366f,7.7964f),Vector3D(-3.5632f,27.0561f,1.3603f),Vector3D(1.9773f,22.6594f,8.9474f),Vector3D(2.4520f,32.7875f,-5.8678f),Vector3D(1.4826f,25.8362f,-7.7868f),Vector3D(7.8730f,34.0816f,-6.9432f),Vector3D(4.8480f,29.4424f,9.3360f),Vector3D(7.8730f,34.4629f,15.1076f),Vector3D(3.6541f,40.7717f,6.7707f),Vector3D(2.5320f,40.6651f,6.4139f),Vector3D(0.1203f,40.7348f,-6.3291f),Vector3D(7.8730f,49.8490f,9.7619f)};
	IndexGroup basisIndexes[366] = {IndexGroup(57,20,38),IndexGroup(34,38,20),IndexGroup(7,20,57),IndexGroup(10,20,7),IndexGroup(13,46,10),IndexGroup(20,10,46),IndexGroup(34,20,18),IndexGroup(46,50,20),IndexGroup(50,18,20),IndexGroup(18,29,34),IndexGroup(72,34,29),IndexGroup(34,72,38),IndexGroup(59,38,72),IndexGroup(13,68,46),IndexGroup(47,46,68),IndexGroup(46,47,50),IndexGroup(139,50,47),IndexGroup(50,139,18),IndexGroup(29,18,139),IndexGroup(38,59,57),IndexGroup(57,59,7),IndexGroup(7,68,10),IndexGroup(10,68,13),IndexGroup(59,68,7),IndexGroup(29,75,72),IndexGroup(76,72,75),IndexGroup(76,137,72),IndexGroup(47,72,137),IndexGroup(75,104,76),IndexGroup(148,76,104),IndexGroup(169,104,75),IndexGroup(29,139,75),IndexGroup(169,75,139),IndexGroup(169,106,104),IndexGroup(177,104,106),IndexGroup(106,90,177),IndexGroup(178,177,90),IndexGroup(76,148,137),IndexGroup(106,169,90),IndexGroup(127,90,169),IndexGroup(127,126,90),IndexGroup(84,90,126),IndexGroup(127,133,126),IndexGroup(151,126,133),IndexGroup(133,86,151),IndexGroup(87,151,86),IndexGroup(126,161,84),IndexGroup(142,84,161),IndexGroup(126,151,161),IndexGroup(155,161,151),IndexGroup(151,87,155),IndexGroup(154,155,87),IndexGroup(155,168,161),IndexGroup(113,161,168),IndexGroup(155,154,168),IndexGroup(61,168,154),IndexGroup(169,170,127),IndexGroup(133,127,170),IndexGroup(178,176,177),IndexGroup(178,79,176),IndexGroup(183,176,79),IndexGroup(79,80,183),IndexGroup(150,183,80),IndexGroup(80,184,150),IndexGroup(134,150,184),IndexGroup(182,119,181),IndexGroup(120,181,119),IndexGroup(128,180,124),IndexGroup(123,124,180),IndexGroup(180,71,123),IndexGroup(122,123,71),IndexGroup(25,179,71),IndexGroup(122,71,179),IndexGroup(170,149,133),IndexGroup(86,133,149),IndexGroup(176,174,177),IndexGroup(153,177,174),IndexGroup(174,175,153),IndexGroup(162,153,175),IndexGroup(176,116,174),IndexGroup(136,174,116),IndexGroup(174,136,175),IndexGroup(173,175,136),IndexGroup(148,172,137),IndexGroup(172,35,137),IndexGroup(171,137,35),IndexGroup(162,172,153),IndexGroup(152,153,172),IndexGroup(168,165,113),IndexGroup(166,113,165),IndexGroup(113,166,1),IndexGroup(58,1,166),IndexGroup(61,167,168),IndexGroup(165,168,167),IndexGroup(165,147,166),IndexGroup(115,166,147),IndexGroup(166,115,58),IndexGroup(165,167,147),IndexGroup(164,147,167),IndexGroup(175,158,162),IndexGroup(163,160,158),IndexGroup(158,160,162),IndexGroup(160,163,141),IndexGroup(159,141,163),IndexGroup(175,157,158),IndexGroup(156,159,158),IndexGroup(163,158,159),IndexGroup(153,152,177),IndexGroup(177,152,104),IndexGroup(148,104,152),IndexGroup(132,129,134),IndexGroup(150,134,129),IndexGroup(183,129,176),IndexGroup(116,176,129),IndexGroup(150,129,183),IndexGroup(68,59,47),IndexGroup(72,47,59),IndexGroup(170,138,149),IndexGroup(43,149,138),IndexGroup(169,140,170),IndexGroup(139,140,169),IndexGroup(152,172,148),IndexGroup(164,115,147),IndexGroup(146,35,172),IndexGroup(141,32,146),IndexGroup(35,146,32),IndexGroup(157,145,156),IndexGroup(144,156,145),IndexGroup(156,144,159),IndexGroup(143,159,144),IndexGroup(159,143,141),IndexGroup(32,141,143),IndexGroup(156,158,157),IndexGroup(47,137,139),IndexGroup(140,139,137),IndexGroup(140,137,170),IndexGroup(138,170,137),IndexGroup(171,43,137),IndexGroup(138,137,43),IndexGroup(136,116,173),IndexGroup(135,173,116),IndexGroup(173,135,157),IndexGroup(25,157,135),IndexGroup(157,25,145),IndexGroup(184,121,134),IndexGroup(131,134,121),IndexGroup(132,134,118),IndexGroup(131,118,134),IndexGroup(184,125,121),IndexGroup(130,121,125),IndexGroup(117,129,132),IndexGroup(123,117,124),IndexGroup(132,124,117),IndexGroup(129,117,116),IndexGroup(179,135,116),IndexGroup(128,124,125),IndexGroup(130,125,124),IndexGroup(130,124,118),IndexGroup(132,118,124),IndexGroup(122,117,123),IndexGroup(121,120,131),IndexGroup(119,131,120),IndexGroup(130,181,121),IndexGroup(120,121,181),IndexGroup(118,182,130),IndexGroup(181,130,182),IndexGroup(131,119,118),IndexGroup(182,118,119),IndexGroup(135,179,25),IndexGroup(117,122,116),IndexGroup(179,116,122),IndexGroup(164,5,115),IndexGroup(6,115,5),IndexGroup(6,58,115),IndexGroup(167,5,164),IndexGroup(162,114,172),IndexGroup(114,146,172),IndexGroup(160,141,146),IndexGroup(146,114,160),IndexGroup(162,160,114),IndexGroup(157,175,173),IndexGroup(142,161,1),IndexGroup(113,1,161),IndexGroup(110,112,107),IndexGroup(101,107,112),IndexGroup(112,100,101),IndexGroup(112,111,100),IndexGroup(112,109,111),IndexGroup(99,111,109),IndexGroup(112,110,108),IndexGroup(103,109,112),IndexGroup(108,103,112),IndexGroup(97,102,110),IndexGroup(108,110,102),IndexGroup(105,97,107),IndexGroup(110,107,97),IndexGroup(44,98,109),IndexGroup(99,109,98),IndexGroup(41,44,103),IndexGroup(109,103,44),IndexGroup(102,41,108),IndexGroup(103,108,41),IndexGroup(105,107,101),IndexGroup(105,101,100),IndexGroup(98,100,111),IndexGroup(98,111,99),IndexGroup(98,105,100),IndexGroup(96,94,97),IndexGroup(102,97,94),IndexGroup(44,27,97),IndexGroup(96,97,27),IndexGroup(40,95,96),IndexGroup(94,96,95),IndexGroup(95,92,94),IndexGroup(92,41,94),IndexGroup(102,94,41),IndexGroup(93,91,95),IndexGroup(92,95,91),IndexGroup(178,90,93),IndexGroup(91,93,90),IndexGroup(40,96,27),IndexGroup(82,92,90),IndexGroup(91,90,92),IndexGroup(84,88,90),IndexGroup(82,90,88),IndexGroup(85,89,88),IndexGroup(82,88,89),IndexGroup(87,86,85),IndexGroup(89,85,86),IndexGroup(142,0,84),IndexGroup(88,84,0),IndexGroup(83,85,0),IndexGroup(88,0,85),IndexGroup(154,87,83),IndexGroup(85,83,87),IndexGroup(64,63,0),IndexGroup(83,0,63),IndexGroup(61,154,63),IndexGroup(83,63,154),IndexGroup(89,42,82),IndexGroup(92,82,42),IndexGroup(49,178,93),IndexGroup(81,79,49),IndexGroup(178,49,79),IndexGroup(45,80,81),IndexGroup(79,81,80),IndexGroup(51,184,45),IndexGroup(80,45,184),IndexGroup(19,78,16),IndexGroup(14,16,78),IndexGroup(74,180,77),IndexGroup(128,77,180),IndexGroup(21,71,74),IndexGroup(180,74,71),IndexGroup(21,73,71),IndexGroup(25,71,73),IndexGroup(86,149,89),IndexGroup(42,89,149),IndexGroup(70,67,93),IndexGroup(49,93,67),IndexGroup(69,3,70),IndexGroup(67,70,3),IndexGroup(66,9,67),IndexGroup(49,67,9),IndexGroup(26,66,3),IndexGroup(67,3,66),IndexGroup(39,40,27),IndexGroup(171,35,27),IndexGroup(39,27,35),IndexGroup(37,39,70),IndexGroup(69,70,39),IndexGroup(65,62,64),IndexGroup(63,64,62),IndexGroup(58,65,1),IndexGroup(64,1,65),IndexGroup(62,167,63),IndexGroup(61,63,167),IndexGroup(8,60,65),IndexGroup(62,65,60),IndexGroup(8,65,58),IndexGroup(36,167,60),IndexGroup(62,60,167),IndexGroup(56,55,54),IndexGroup(54,55,69),IndexGroup(55,3,69),IndexGroup(31,56,53),IndexGroup(54,53,56),IndexGroup(2,3,55),IndexGroup(56,31,55),IndexGroup(52,55,31),IndexGroup(37,70,93),IndexGroup(40,37,95),IndexGroup(93,95,37),IndexGroup(45,48,51),IndexGroup(23,51,48),IndexGroup(9,48,49),IndexGroup(81,49,48),IndexGroup(48,45,81),IndexGroup(97,105,44),IndexGroup(98,44,105),IndexGroup(43,28,149),IndexGroup(42,149,28),IndexGroup(30,92,42),IndexGroup(30,41,92),IndexGroup(39,37,40),IndexGroup(8,36,60),IndexGroup(35,33,39),IndexGroup(35,32,33),IndexGroup(53,33,32),IndexGroup(144,145,52),IndexGroup(2,52,145),IndexGroup(143,144,31),IndexGroup(52,31,144),IndexGroup(32,143,53),IndexGroup(31,53,143),IndexGroup(55,52,2),IndexGroup(30,27,41),IndexGroup(44,41,27),IndexGroup(28,27,42),IndexGroup(30,42,27),IndexGroup(28,43,27),IndexGroup(171,27,43),IndexGroup(24,9,26),IndexGroup(66,26,9),IndexGroup(25,24,2),IndexGroup(26,2,24),IndexGroup(25,2,145),IndexGroup(17,15,51),IndexGroup(184,51,15),IndexGroup(17,51,11),IndexGroup(23,11,51),IndexGroup(12,125,15),IndexGroup(184,15,125),IndexGroup(48,22,23),IndexGroup(23,22,77),IndexGroup(74,77,22),IndexGroup(22,48,9),IndexGroup(24,73,9),IndexGroup(12,77,125),IndexGroup(128,125,77),IndexGroup(23,77,11),IndexGroup(12,11,77),IndexGroup(22,21,74),IndexGroup(78,19,17),IndexGroup(15,17,19),IndexGroup(19,16,15),IndexGroup(12,15,16),IndexGroup(16,14,12),IndexGroup(11,12,14),IndexGroup(14,78,11),IndexGroup(17,11,78),IndexGroup(73,24,25),IndexGroup(73,21,9),IndexGroup(22,9,21),IndexGroup(6,5,8),IndexGroup(36,8,5),IndexGroup(58,6,8),IndexGroup(5,167,36),IndexGroup(4,69,39),IndexGroup(33,4,39),IndexGroup(53,54,33),IndexGroup(69,4,54),IndexGroup(33,54,4),IndexGroup(3,2,26),IndexGroup(64,0,1),IndexGroup(142,1,0)};
	TriangleGroup triangleGroup = TriangleGroup(&basisVertices[0], &basisIndexes[0], 185, 366);
	SimpleMaterial simpleMaterial = SimpleMaterial(RGBColor(128, 128, 128));
	Object3D basisObj = Object3D(&triangleGroup, &simpleMaterial);

public:
	Charmander(){}

	Object3D* GetObject(){
		return &basisObj;
	}
};