int BlackPearl_walk_count;
float BlackPearl_walk_verts[189];
int BlackPearl_walk_types[63];
int BlackPearl_walk_graph[71];

void BlackPearl_walk_init()
{
        BlackPearl_walk_count = 63;

        BlackPearl_walk_verts[0] = -1.551474;
        BlackPearl_walk_verts[1] = 3.340026;
        BlackPearl_walk_verts[2] = 5.219386;
        BlackPearl_walk_verts[3] = -3.299797;
        BlackPearl_walk_verts[4] = 3.499998;
        BlackPearl_walk_verts[5] = 6.319237;
        BlackPearl_walk_verts[6] = -3.203481;
        BlackPearl_walk_verts[7] = 4.845033;
        BlackPearl_walk_verts[8] = 7.797556;
        BlackPearl_walk_verts[9] = -1.930125;
        BlackPearl_walk_verts[10] = 5.192507;
        BlackPearl_walk_verts[11] = 11.100967;
        BlackPearl_walk_verts[12] = 0.054246;
        BlackPearl_walk_verts[13] = 5.259991;
        BlackPearl_walk_verts[14] = 11.330795;
        BlackPearl_walk_verts[15] = 2.017354;
        BlackPearl_walk_verts[16] = 5.170005;
        BlackPearl_walk_verts[17] = 10.893993;
        BlackPearl_walk_verts[18] = 1.643529;
        BlackPearl_walk_verts[19] = 4.944997;
        BlackPearl_walk_verts[20] = 8.547585;
        BlackPearl_walk_verts[21] = 3.157439;
        BlackPearl_walk_verts[22] = 4.850027;
        BlackPearl_walk_verts[23] = 7.861287;
        BlackPearl_walk_verts[24] = 3.255921;
        BlackPearl_walk_verts[25] = 3.525011;
        BlackPearl_walk_verts[26] = 6.321331;
        BlackPearl_walk_verts[27] = 1.681984;
        BlackPearl_walk_verts[28] = 3.375013;
        BlackPearl_walk_verts[29] = 5.187927;
        BlackPearl_walk_verts[30] = 1.668582;
        BlackPearl_walk_verts[31] = 3.377523;
        BlackPearl_walk_verts[32] = 2.030215;
        BlackPearl_walk_verts[33] = 1.596932;
        BlackPearl_walk_verts[34] = 3.29751;
        BlackPearl_walk_verts[35] = -1.645516;
        BlackPearl_walk_verts[36] = 1.814477;
        BlackPearl_walk_verts[37] = 3.325003;
        BlackPearl_walk_verts[38] = -5.044587;
        BlackPearl_walk_verts[39] = 1.444389;
        BlackPearl_walk_verts[40] = 3.339988;
        BlackPearl_walk_verts[41] = -8.264278;
        BlackPearl_walk_verts[42] = 2.319094;
        BlackPearl_walk_verts[43] = 3.612418;
        BlackPearl_walk_verts[44] = -9.17709;
        BlackPearl_walk_verts[45] = 3.035675;
        BlackPearl_walk_verts[46] = 4.887435;
        BlackPearl_walk_verts[47] = -10.351745;
        BlackPearl_walk_verts[48] = 3.089422;
        BlackPearl_walk_verts[49] = 6.180025;
        BlackPearl_walk_verts[50] = -11.985051;
        BlackPearl_walk_verts[51] = 3.036743;
        BlackPearl_walk_verts[52] = 6.377544;
        BlackPearl_walk_verts[53] = -13.984588;
        BlackPearl_walk_verts[54] = -0.041413;
        BlackPearl_walk_verts[55] = 6.297523;
        BlackPearl_walk_verts[56] = -11.822765;
        BlackPearl_walk_verts[57] = -2.887152;
        BlackPearl_walk_verts[58] = 6.352468;
        BlackPearl_walk_verts[59] = -14.085472;
        BlackPearl_walk_verts[60] = -2.966198;
        BlackPearl_walk_verts[61] = 6.229978;
        BlackPearl_walk_verts[62] = -12.11049;
        BlackPearl_walk_verts[63] = -2.976647;
        BlackPearl_walk_verts[64] = 4.934948;
        BlackPearl_walk_verts[65] = -10.52651;
        BlackPearl_walk_verts[66] = -1.927297;
        BlackPearl_walk_verts[67] = 3.287502;
        BlackPearl_walk_verts[68] = -5.11578;
        BlackPearl_walk_verts[69] = -1.713502;
        BlackPearl_walk_verts[70] = 3.277506;
        BlackPearl_walk_verts[71] = -1.605103;
        BlackPearl_walk_verts[72] = -1.48327;
        BlackPearl_walk_verts[73] = 3.305002;
        BlackPearl_walk_verts[74] = 1.981811;
        BlackPearl_walk_verts[75] = -2.194964;
        BlackPearl_walk_verts[76] = 3.342498;
        BlackPearl_walk_verts[77] = 5.203468;
        BlackPearl_walk_verts[78] = -1.768013;
        BlackPearl_walk_verts[79] = 3.419995;
        BlackPearl_walk_verts[80] = 7.171945;
        BlackPearl_walk_verts[81] = 2.165312;
        BlackPearl_walk_verts[82] = 3.347501;
        BlackPearl_walk_verts[83] = 5.180083;
        BlackPearl_walk_verts[84] = 1.760583;
        BlackPearl_walk_verts[85] = 3.457496;
        BlackPearl_walk_verts[86] = 7.109217;
        BlackPearl_walk_verts[87] = -2.195447;
        BlackPearl_walk_verts[88] = 3.344954;
        BlackPearl_walk_verts[89] = 1.908594;
        BlackPearl_walk_verts[90] = 2.198586;
        BlackPearl_walk_verts[91] = 3.434953;
        BlackPearl_walk_verts[92] = 1.910921;
        BlackPearl_walk_verts[93] = 2.717196;
        BlackPearl_walk_verts[94] = 3.442482;
        BlackPearl_walk_verts[95] = -6.633766;
        BlackPearl_walk_verts[96] = -1.508272;
        BlackPearl_walk_verts[97] = 3.374981;
        BlackPearl_walk_verts[98] = -8.354122;
        BlackPearl_walk_verts[99] = -2.453021;
        BlackPearl_walk_verts[100] = 3.437476;
        BlackPearl_walk_verts[101] = -9.248329;
        BlackPearl_walk_verts[102] = -0.109088;
        BlackPearl_walk_verts[103] = 3.809973;
        BlackPearl_walk_verts[104] = -11.869555;
        BlackPearl_walk_verts[105] = -4.65663;
        BlackPearl_walk_verts[106] = 3.422457;
        BlackPearl_walk_verts[107] = -7.244478;
        BlackPearl_walk_verts[108] = 4.715797;
        BlackPearl_walk_verts[109] = 3.527463;
        BlackPearl_walk_verts[110] = -7.329835;
        BlackPearl_walk_verts[111] = -0.768377;
        BlackPearl_walk_verts[112] = 16.040251;
        BlackPearl_walk_verts[113] = -6.2203;
        BlackPearl_walk_verts[114] = 1.021884;
        BlackPearl_walk_verts[115] = 16.030249;
        BlackPearl_walk_verts[116] = -6.114355;
        BlackPearl_walk_verts[117] = -4.751126;
        BlackPearl_walk_verts[118] = 3.619984;
        BlackPearl_walk_verts[119] = 6.554825;
        BlackPearl_walk_verts[120] = 4.594252;
        BlackPearl_walk_verts[121] = 3.487489;
        BlackPearl_walk_verts[122] = 6.592365;
        BlackPearl_walk_verts[123] = -1.010999;
        BlackPearl_walk_verts[124] = 14.950148;
        BlackPearl_walk_verts[125] = 8.893497;
        BlackPearl_walk_verts[126] = 1.003356;
        BlackPearl_walk_verts[127] = 15.020222;
        BlackPearl_walk_verts[128] = 8.950657;
        BlackPearl_walk_verts[129] = 2.518798;
        BlackPearl_walk_verts[130] = 6.632448;
        BlackPearl_walk_verts[131] = -15.715462;
        BlackPearl_walk_verts[132] = 1.945431;
        BlackPearl_walk_verts[133] = 7.28996;
        BlackPearl_walk_verts[134] = -20.267502;
        BlackPearl_walk_verts[135] = 1.420423;
        BlackPearl_walk_verts[136] = 7.657462;
        BlackPearl_walk_verts[137] = -22.03072;
        BlackPearl_walk_verts[138] = -0.012121;
        BlackPearl_walk_verts[139] = 8.067459;
        BlackPearl_walk_verts[140] = -22.265503;
        BlackPearl_walk_verts[141] = -1.445745;
        BlackPearl_walk_verts[142] = 7.692459;
        BlackPearl_walk_verts[143] = -22.035677;
        BlackPearl_walk_verts[144] = -1.785984;
        BlackPearl_walk_verts[145] = 7.300001;
        BlackPearl_walk_verts[146] = -20.230564;
        BlackPearl_walk_verts[147] = -2.379991;
        BlackPearl_walk_verts[148] = 6.512452;
        BlackPearl_walk_verts[149] = -15.698196;
        BlackPearl_walk_verts[150] = 0.018159;
        BlackPearl_walk_verts[151] = 6.369972;
        BlackPearl_walk_verts[152] = -14.848014;
        BlackPearl_walk_verts[153] = 2.292107;
        BlackPearl_walk_verts[154] = 3.344909;
        BlackPearl_walk_verts[155] = -1.61717;
        BlackPearl_walk_verts[156] = 2.307688;
        BlackPearl_walk_verts[157] = 3.377409;
        BlackPearl_walk_verts[158] = -5.051725;
        BlackPearl_walk_verts[159] = 2.136109;
        BlackPearl_walk_verts[160] = 3.404909;
        BlackPearl_walk_verts[161] = -8.321192;
        BlackPearl_walk_verts[162] = 1.653374;
        BlackPearl_walk_verts[163] = 3.764911;
        BlackPearl_walk_verts[164] = -11.721738;
        BlackPearl_walk_verts[165] = -1.827262;
        BlackPearl_walk_verts[166] = 3.76491;
        BlackPearl_walk_verts[167] = -11.732761;
        BlackPearl_walk_verts[168] = -2.064271;
        BlackPearl_walk_verts[169] = 3.449909;
        BlackPearl_walk_verts[170] = -8.397058;
        BlackPearl_walk_verts[171] = -2.285998;
        BlackPearl_walk_verts[172] = 3.374912;
        BlackPearl_walk_verts[173] = -5.004846;
        BlackPearl_walk_verts[174] = -2.302698;
        BlackPearl_walk_verts[175] = 3.309909;
        BlackPearl_walk_verts[176] = -1.578398;
        BlackPearl_walk_verts[177] = 3.625727;
        BlackPearl_walk_verts[178] = 6.480027;
        BlackPearl_walk_verts[179] = -16.799078;
        BlackPearl_walk_verts[180] = 0.46946;
        BlackPearl_walk_verts[181] = 14.722703;
        BlackPearl_walk_verts[182] = -15.598586;
        BlackPearl_walk_verts[183] = -3.658798;
        BlackPearl_walk_verts[184] = 6.342515;
        BlackPearl_walk_verts[185] = -16.632944;
        BlackPearl_walk_verts[186] = -0.502329;
        BlackPearl_walk_verts[187] = 14.770215;
        BlackPearl_walk_verts[188] = -15.607583;

        BlackPearl_walk_types[0] = 0;
        BlackPearl_walk_types[1] = 0;
        BlackPearl_walk_types[2] = 0;
        BlackPearl_walk_types[3] = 0;
        BlackPearl_walk_types[4] = 0;
        BlackPearl_walk_types[5] = 0;
        BlackPearl_walk_types[6] = 0;
        BlackPearl_walk_types[7] = 0;
        BlackPearl_walk_types[8] = 0;
        BlackPearl_walk_types[9] = 0;
        BlackPearl_walk_types[10] = 0;
        BlackPearl_walk_types[11] = 0;
        BlackPearl_walk_types[12] = 0;
        BlackPearl_walk_types[13] = 0;
        BlackPearl_walk_types[14] = 0;
        BlackPearl_walk_types[15] = 0;
        BlackPearl_walk_types[16] = 0;
        BlackPearl_walk_types[17] = 0;
        BlackPearl_walk_types[18] = 0;
        BlackPearl_walk_types[19] = 0;
        BlackPearl_walk_types[20] = 0;
        BlackPearl_walk_types[21] = 0;
        BlackPearl_walk_types[22] = 0;
        BlackPearl_walk_types[23] = 0;
        BlackPearl_walk_types[24] = 0;
        BlackPearl_walk_types[25] = 1;
        BlackPearl_walk_types[26] = 0;
        BlackPearl_walk_types[27] = 2;
        BlackPearl_walk_types[28] = 2;
        BlackPearl_walk_types[29] = 1;
        BlackPearl_walk_types[30] = 2;
        BlackPearl_walk_types[31] = 0;
        BlackPearl_walk_types[32] = 0;
        BlackPearl_walk_types[33] = 0;
        BlackPearl_walk_types[34] = 0;
        BlackPearl_walk_types[35] = 5;
        BlackPearl_walk_types[36] = 5;
        BlackPearl_walk_types[37] = 4;
        BlackPearl_walk_types[38] = 4;
        BlackPearl_walk_types[39] = 5;
        BlackPearl_walk_types[40] = 5;
        BlackPearl_walk_types[41] = 6;
        BlackPearl_walk_types[42] = 6;
        BlackPearl_walk_types[43] = 0;
        BlackPearl_walk_types[44] = 0;
        BlackPearl_walk_types[45] = 0;
        BlackPearl_walk_types[46] = 0;
        BlackPearl_walk_types[47] = 0;
        BlackPearl_walk_types[48] = 0;
        BlackPearl_walk_types[49] = 0;
        BlackPearl_walk_types[50] = 0;
        BlackPearl_walk_types[51] = 2;
        BlackPearl_walk_types[52] = 2;
        BlackPearl_walk_types[53] = 2;
        BlackPearl_walk_types[54] = 2;
        BlackPearl_walk_types[55] = 1;
        BlackPearl_walk_types[56] = 1;
        BlackPearl_walk_types[57] = 1;
        BlackPearl_walk_types[58] = 1;
        BlackPearl_walk_types[59] = 5;
        BlackPearl_walk_types[60] = 4;
        BlackPearl_walk_types[61] = 5;
        BlackPearl_walk_types[62] = 4;

        BlackPearl_walk_graph[0] = (0)*256 + (1);
        BlackPearl_walk_graph[1] = (1)*256 + (2);
        BlackPearl_walk_graph[2] = (2)*256 + (3);
        BlackPearl_walk_graph[3] = (3)*256 + (4);
        BlackPearl_walk_graph[4] = (4)*256 + (5);
        BlackPearl_walk_graph[5] = (5)*256 + (6);
        BlackPearl_walk_graph[6] = (6)*256 + (7);
        BlackPearl_walk_graph[7] = (7)*256 + (8);
        BlackPearl_walk_graph[8] = (8)*256 + (9);
        BlackPearl_walk_graph[9] = (9)*256 + (10);
        BlackPearl_walk_graph[10] = (10)*256 + (11);
        BlackPearl_walk_graph[11] = (11)*256 + (12);
        BlackPearl_walk_graph[12] = (12)*256 + (31);
        BlackPearl_walk_graph[13] = (13)*256 + (31);
        BlackPearl_walk_graph[14] = (14)*256 + (15);
        BlackPearl_walk_graph[15] = (15)*256 + (16);
        BlackPearl_walk_graph[16] = (16)*256 + (17);
        BlackPearl_walk_graph[17] = (17)*256 + (18);
        BlackPearl_walk_graph[18] = (18)*256 + (19);
        BlackPearl_walk_graph[19] = (19)*256 + (20);
        BlackPearl_walk_graph[20] = (20)*256 + (21);
        BlackPearl_walk_graph[21] = (21)*256 + (33);
        BlackPearl_walk_graph[22] = (22)*256 + (23);
        BlackPearl_walk_graph[23] = (23)*256 + (24);
        BlackPearl_walk_graph[24] = (24)*256 + (0);
        BlackPearl_walk_graph[25] = (25)*256 + (0);
        BlackPearl_walk_graph[26] = (26)*256 + (0);
        BlackPearl_walk_graph[27] = (29)*256 + (24);
        BlackPearl_walk_graph[28] = (30)*256 + (10);
        BlackPearl_walk_graph[29] = (28)*256 + (9);
        BlackPearl_walk_graph[30] = (27)*256 + (9);
        BlackPearl_walk_graph[31] = (34)*256 + (32);
        BlackPearl_walk_graph[32] = (34)*256 + (13);
        BlackPearl_walk_graph[33] = (32)*256 + (33);
        BlackPearl_walk_graph[34] = (32)*256 + (22);
        BlackPearl_walk_graph[35] = (12)*256 + (22);
        BlackPearl_walk_graph[36] = (13)*256 + (32);
        BlackPearl_walk_graph[37] = (39)*256 + (2);
        BlackPearl_walk_graph[38] = (39)*256 + (41);
        BlackPearl_walk_graph[39] = (40)*256 + (42);
        BlackPearl_walk_graph[40] = (40)*256 + (7);
        BlackPearl_walk_graph[41] = (36)*256 + (31);
        BlackPearl_walk_graph[42] = (36)*256 + (38);
        BlackPearl_walk_graph[43] = (35)*256 + (37);
        BlackPearl_walk_graph[44] = (35)*256 + (22);
        BlackPearl_walk_graph[45] = (33)*256 + (13);
        BlackPearl_walk_graph[46] = (13)*256 + (14);
        BlackPearl_walk_graph[47] = (13)*256 + (53);
        BlackPearl_walk_graph[48] = (17)*256 + (43);
        BlackPearl_walk_graph[49] = (44)*256 + (43);
        BlackPearl_walk_graph[50] = (50)*256 + (43);
        BlackPearl_walk_graph[51] = (49)*256 + (48);
        BlackPearl_walk_graph[52] = (50)*256 + (49);
        BlackPearl_walk_graph[53] = (45)*256 + (44);
        BlackPearl_walk_graph[54] = (45)*256 + (46);
        BlackPearl_walk_graph[55] = (47)*256 + (46);
        BlackPearl_walk_graph[56] = (47)*256 + (48);
        BlackPearl_walk_graph[57] = (49)*256 + (19);
        BlackPearl_walk_graph[58] = (59)*256 + (43);
        BlackPearl_walk_graph[59] = (59)*256 + (60);
        BlackPearl_walk_graph[60] = (62)*256 + (61);
        BlackPearl_walk_graph[61] = (49)*256 + (61);
        BlackPearl_walk_graph[62] = (51)*256 + (11);
        BlackPearl_walk_graph[63] = (52)*256 + (12);
        BlackPearl_walk_graph[64] = (54)*256 + (34);
        BlackPearl_walk_graph[65] = (55)*256 + (34);
        BlackPearl_walk_graph[66] = (57)*256 + (22);
        BlackPearl_walk_graph[67] = (58)*256 + (23);
        BlackPearl_walk_graph[68] = (32)*256 + (56);
        BlackPearl_walk_graph[69] = (23)*256 + (11);
        BlackPearl_walk_graph[70] = (0)*256 + (27);
}