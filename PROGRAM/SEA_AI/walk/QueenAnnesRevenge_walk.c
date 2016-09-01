int QueenAnnesRevenge_walk_count;
float QueenAnnesRevenge_walk_verts[192];
int QueenAnnesRevenge_walk_types[64];
int QueenAnnesRevenge_walk_graph[72];

void QueenAnnesRevenge_walk_init()
{
        QueenAnnesRevenge_walk_count = 64;

        QueenAnnesRevenge_walk_verts[0] = -1.551474;
        QueenAnnesRevenge_walk_verts[1] = 3.775025;
        QueenAnnesRevenge_walk_verts[2] = 5.219386;
        QueenAnnesRevenge_walk_verts[3] = -3.299797;
        QueenAnnesRevenge_walk_verts[4] = 3.887498;
        QueenAnnesRevenge_walk_verts[5] = 6.319237;
        QueenAnnesRevenge_walk_verts[6] = -3.203481;
        QueenAnnesRevenge_walk_verts[7] = 5.160034;
        QueenAnnesRevenge_walk_verts[8] = 7.797556;
        QueenAnnesRevenge_walk_verts[9] = -1.930125;
        QueenAnnesRevenge_walk_verts[10] = 5.490009;
        QueenAnnesRevenge_walk_verts[11] = 11.100967;
        QueenAnnesRevenge_walk_verts[12] = 0.054246;
        QueenAnnesRevenge_walk_verts[13] = 5.679995;
        QueenAnnesRevenge_walk_verts[14] = 11.330795;
        QueenAnnesRevenge_walk_verts[15] = 2.017354;
        QueenAnnesRevenge_walk_verts[16] = 5.487505;
        QueenAnnesRevenge_walk_verts[17] = 10.893993;
        QueenAnnesRevenge_walk_verts[18] = 1.643529;
        QueenAnnesRevenge_walk_verts[19] = 5.075;
        QueenAnnesRevenge_walk_verts[20] = 8.547585;
        QueenAnnesRevenge_walk_verts[21] = 3.157439;
        QueenAnnesRevenge_walk_verts[22] = 5.252534;
        QueenAnnesRevenge_walk_verts[23] = 7.861287;
        QueenAnnesRevenge_walk_verts[24] = 3.255921;
        QueenAnnesRevenge_walk_verts[25] = 4.04501;
        QueenAnnesRevenge_walk_verts[26] = 6.321331;
        QueenAnnesRevenge_walk_verts[27] = 1.681984;
        QueenAnnesRevenge_walk_verts[28] = 3.832512;
        QueenAnnesRevenge_walk_verts[29] = 5.187927;
        QueenAnnesRevenge_walk_verts[30] = 1.668582;
        QueenAnnesRevenge_walk_verts[31] = 3.622522;
        QueenAnnesRevenge_walk_verts[32] = 2.030215;
        QueenAnnesRevenge_walk_verts[33] = 1.596932;
        QueenAnnesRevenge_walk_verts[34] = 3.575009;
        QueenAnnesRevenge_walk_verts[35] = -1.645516;
        QueenAnnesRevenge_walk_verts[36] = 1.814477;
        QueenAnnesRevenge_walk_verts[37] = 3.652502;
        QueenAnnesRevenge_walk_verts[38] = -5.044587;
        QueenAnnesRevenge_walk_verts[39] = 1.444389;
        QueenAnnesRevenge_walk_verts[40] = 3.892486;
        QueenAnnesRevenge_walk_verts[41] = -8.264278;
        QueenAnnesRevenge_walk_verts[42] = 2.319094;
        QueenAnnesRevenge_walk_verts[43] = 4.037418;
        QueenAnnesRevenge_walk_verts[44] = -9.17709;
        QueenAnnesRevenge_walk_verts[45] = 3.035675;
        QueenAnnesRevenge_walk_verts[46] = 4.989937;
        QueenAnnesRevenge_walk_verts[47] = -10.351745;
        QueenAnnesRevenge_walk_verts[48] = 3.089422;
        QueenAnnesRevenge_walk_verts[49] = 6.662536;
        QueenAnnesRevenge_walk_verts[50] = -11.985051;
        QueenAnnesRevenge_walk_verts[51] = 3.036743;
        QueenAnnesRevenge_walk_verts[52] = 6.682551;
        QueenAnnesRevenge_walk_verts[53] = -13.984588;
        QueenAnnesRevenge_walk_verts[54] = -0.035564;
        QueenAnnesRevenge_walk_verts[55] = 6.625029;
        QueenAnnesRevenge_walk_verts[56] = -11.920088;
        QueenAnnesRevenge_walk_verts[57] = -2.887152;
        QueenAnnesRevenge_walk_verts[58] = 6.692472;
        QueenAnnesRevenge_walk_verts[59] = -14.085472;
        QueenAnnesRevenge_walk_verts[60] = -2.966198;
        QueenAnnesRevenge_walk_verts[61] = 6.654984;
        QueenAnnesRevenge_walk_verts[62] = -12.11049;
        QueenAnnesRevenge_walk_verts[63] = -2.976647;
        QueenAnnesRevenge_walk_verts[64] = 5.04245;
        QueenAnnesRevenge_walk_verts[65] = -10.52651;
        QueenAnnesRevenge_walk_verts[66] = -1.927297;
        QueenAnnesRevenge_walk_verts[67] = 3.622502;
        QueenAnnesRevenge_walk_verts[68] = -5.11578;
        QueenAnnesRevenge_walk_verts[69] = -1.713502;
        QueenAnnesRevenge_walk_verts[70] = 3.530006;
        QueenAnnesRevenge_walk_verts[71] = -1.605103;
        QueenAnnesRevenge_walk_verts[72] = -1.48327;
        QueenAnnesRevenge_walk_verts[73] = 3.570002;
        QueenAnnesRevenge_walk_verts[74] = 1.981811;
        QueenAnnesRevenge_walk_verts[75] = -2.194964;
        QueenAnnesRevenge_walk_verts[76] = 3.704997;
        QueenAnnesRevenge_walk_verts[77] = 5.203468;
        QueenAnnesRevenge_walk_verts[78] = -1.768013;
        QueenAnnesRevenge_walk_verts[79] = 3.947494;
        QueenAnnesRevenge_walk_verts[80] = 7.171945;
        QueenAnnesRevenge_walk_verts[81] = 2.165312;
        QueenAnnesRevenge_walk_verts[82] = 3.800001;
        QueenAnnesRevenge_walk_verts[83] = 5.180083;
        QueenAnnesRevenge_walk_verts[84] = 1.760583;
        QueenAnnesRevenge_walk_verts[85] = 4.147498;
        QueenAnnesRevenge_walk_verts[86] = 7.109217;
        QueenAnnesRevenge_walk_verts[87] = -2.195447;
        QueenAnnesRevenge_walk_verts[88] = 3.624953;
        QueenAnnesRevenge_walk_verts[89] = 1.908594;
        QueenAnnesRevenge_walk_verts[90] = 2.198586;
        QueenAnnesRevenge_walk_verts[91] = 3.647452;
        QueenAnnesRevenge_walk_verts[92] = 1.910921;
        QueenAnnesRevenge_walk_verts[93] = 2.717196;
        QueenAnnesRevenge_walk_verts[94] = 3.797482;
        QueenAnnesRevenge_walk_verts[95] = -6.633766;
        QueenAnnesRevenge_walk_verts[96] = -1.508272;
        QueenAnnesRevenge_walk_verts[97] = 3.799981;
        QueenAnnesRevenge_walk_verts[98] = -8.354122;
        QueenAnnesRevenge_walk_verts[99] = -2.453021;
        QueenAnnesRevenge_walk_verts[100] = 4.027475;
        QueenAnnesRevenge_walk_verts[101] = -9.248329;
        QueenAnnesRevenge_walk_verts[102] = -0.109088;
        QueenAnnesRevenge_walk_verts[103] = 4.232478;
        QueenAnnesRevenge_walk_verts[104] = -11.869555;
        QueenAnnesRevenge_walk_verts[105] = -4.733239;
        QueenAnnesRevenge_walk_verts[106] = 3.847456;
        QueenAnnesRevenge_walk_verts[107] = -6.674595;
        QueenAnnesRevenge_walk_verts[108] = 4.782493;
        QueenAnnesRevenge_walk_verts[109] = 3.809963;
        QueenAnnesRevenge_walk_verts[110] = -6.628011;
        QueenAnnesRevenge_walk_verts[111] = -0.768377;
        QueenAnnesRevenge_walk_verts[112] = 16.040251;
        QueenAnnesRevenge_walk_verts[113] = -6.2203;
        QueenAnnesRevenge_walk_verts[114] = 1.021884;
        QueenAnnesRevenge_walk_verts[115] = 16.030249;
        QueenAnnesRevenge_walk_verts[116] = -6.114355;
        QueenAnnesRevenge_walk_verts[117] = -4.650818;
        QueenAnnesRevenge_walk_verts[118] = 4.154987;
        QueenAnnesRevenge_walk_verts[119] = 6.826925;
        QueenAnnesRevenge_walk_verts[120] = 4.544836;
        QueenAnnesRevenge_walk_verts[121] = 4.042489;
        QueenAnnesRevenge_walk_verts[122] = 6.895869;
        QueenAnnesRevenge_walk_verts[123] = -1.010999;
        QueenAnnesRevenge_walk_verts[124] = 14.950148;
        QueenAnnesRevenge_walk_verts[125] = 8.893497;
        QueenAnnesRevenge_walk_verts[126] = 1.003356;
        QueenAnnesRevenge_walk_verts[127] = 15.020222;
        QueenAnnesRevenge_walk_verts[128] = 8.950657;
        QueenAnnesRevenge_walk_verts[129] = 2.799951;
        QueenAnnesRevenge_walk_verts[130] = 9.104956;
        QueenAnnesRevenge_walk_verts[131] = -15.733374;
        QueenAnnesRevenge_walk_verts[132] = 2.180106;
        QueenAnnesRevenge_walk_verts[133] = 9.439943;
        QueenAnnesRevenge_walk_verts[134] = -20.255972;
        QueenAnnesRevenge_walk_verts[135] = 1.929321;
        QueenAnnesRevenge_walk_verts[136] = 11.417391;
        QueenAnnesRevenge_walk_verts[137] = -21.785864;
        QueenAnnesRevenge_walk_verts[138] = 0.2478;
        QueenAnnesRevenge_walk_verts[139] = 11.597399;
        QueenAnnesRevenge_walk_verts[140] = -23.147705;
        QueenAnnesRevenge_walk_verts[141] = -1.863249;
        QueenAnnesRevenge_walk_verts[142] = 11.334915;
        QueenAnnesRevenge_walk_verts[143] = -21.734819;
        QueenAnnesRevenge_walk_verts[144] = -2.17748;
        QueenAnnesRevenge_walk_verts[145] = 9.452458;
        QueenAnnesRevenge_walk_verts[146] = -20.281631;
        QueenAnnesRevenge_walk_verts[147] = -2.819885;
        QueenAnnesRevenge_walk_verts[148] = 8.992476;
        QueenAnnesRevenge_walk_verts[149] = -15.707624;
        QueenAnnesRevenge_walk_verts[150] = -0.037281;
        QueenAnnesRevenge_walk_verts[151] = 9.289978;
        QueenAnnesRevenge_walk_verts[152] = -19.039656;
        QueenAnnesRevenge_walk_verts[153] = -0.769667;
        QueenAnnesRevenge_walk_verts[154] = 9.510001;
        QueenAnnesRevenge_walk_verts[155] = -21.275562;
        QueenAnnesRevenge_walk_verts[156] = 2.292107;
        QueenAnnesRevenge_walk_verts[157] = 3.559909;
        QueenAnnesRevenge_walk_verts[158] = -1.61717;
        QueenAnnesRevenge_walk_verts[159] = 2.307688;
        QueenAnnesRevenge_walk_verts[160] = 3.687409;
        QueenAnnesRevenge_walk_verts[161] = -5.051725;
        QueenAnnesRevenge_walk_verts[162] = 2.136109;
        QueenAnnesRevenge_walk_verts[163] = 3.919909;
        QueenAnnesRevenge_walk_verts[164] = -8.321192;
        QueenAnnesRevenge_walk_verts[165] = 1.653374;
        QueenAnnesRevenge_walk_verts[166] = 4.229914;
        QueenAnnesRevenge_walk_verts[167] = -11.721738;
        QueenAnnesRevenge_walk_verts[168] = -1.827262;
        QueenAnnesRevenge_walk_verts[169] = 4.247415;
        QueenAnnesRevenge_walk_verts[170] = -11.732761;
        QueenAnnesRevenge_walk_verts[171] = -2.064271;
        QueenAnnesRevenge_walk_verts[172] = 3.859909;
        QueenAnnesRevenge_walk_verts[173] = -8.397058;
        QueenAnnesRevenge_walk_verts[174] = -2.285998;
        QueenAnnesRevenge_walk_verts[175] = 3.662412;
        QueenAnnesRevenge_walk_verts[176] = -5.004846;
        QueenAnnesRevenge_walk_verts[177] = -2.302698;
        QueenAnnesRevenge_walk_verts[178] = 3.539909;
        QueenAnnesRevenge_walk_verts[179] = -1.578398;
        QueenAnnesRevenge_walk_verts[180] = 4.066339;
        QueenAnnesRevenge_walk_verts[181] = 9.250029;
        QueenAnnesRevenge_walk_verts[182] = -15.665043;
        QueenAnnesRevenge_walk_verts[183] = 0.859411;
        QueenAnnesRevenge_walk_verts[184] = 16.615194;
        QueenAnnesRevenge_walk_verts[185] = -15.722915;
        QueenAnnesRevenge_walk_verts[186] = -3.986817;
        QueenAnnesRevenge_walk_verts[187] = 9.29003;
        QueenAnnesRevenge_walk_verts[188] = -15.688233;
        QueenAnnesRevenge_walk_verts[189] = -0.741294;
        QueenAnnesRevenge_walk_verts[190] = 16.562695;
        QueenAnnesRevenge_walk_verts[191] = -15.632666;

        QueenAnnesRevenge_walk_types[0] = 0;
        QueenAnnesRevenge_walk_types[1] = 0;
        QueenAnnesRevenge_walk_types[2] = 0;
        QueenAnnesRevenge_walk_types[3] = 0;
        QueenAnnesRevenge_walk_types[4] = 0;
        QueenAnnesRevenge_walk_types[5] = 0;
        QueenAnnesRevenge_walk_types[6] = 0;
        QueenAnnesRevenge_walk_types[7] = 0;
        QueenAnnesRevenge_walk_types[8] = 0;
        QueenAnnesRevenge_walk_types[9] = 0;
        QueenAnnesRevenge_walk_types[10] = 0;
        QueenAnnesRevenge_walk_types[11] = 0;
        QueenAnnesRevenge_walk_types[12] = 0;
        QueenAnnesRevenge_walk_types[13] = 0;
        QueenAnnesRevenge_walk_types[14] = 0;
        QueenAnnesRevenge_walk_types[15] = 0;
        QueenAnnesRevenge_walk_types[16] = 0;
        QueenAnnesRevenge_walk_types[17] = 0;
        QueenAnnesRevenge_walk_types[18] = 0;
        QueenAnnesRevenge_walk_types[19] = 0;
        QueenAnnesRevenge_walk_types[20] = 0;
        QueenAnnesRevenge_walk_types[21] = 0;
        QueenAnnesRevenge_walk_types[22] = 0;
        QueenAnnesRevenge_walk_types[23] = 0;
        QueenAnnesRevenge_walk_types[24] = 0;
        QueenAnnesRevenge_walk_types[25] = 1;
        QueenAnnesRevenge_walk_types[26] = 0;
        QueenAnnesRevenge_walk_types[27] = 2;
        QueenAnnesRevenge_walk_types[28] = 2;
        QueenAnnesRevenge_walk_types[29] = 1;
        QueenAnnesRevenge_walk_types[30] = 2;
        QueenAnnesRevenge_walk_types[31] = 0;
        QueenAnnesRevenge_walk_types[32] = 0;
        QueenAnnesRevenge_walk_types[33] = 0;
        QueenAnnesRevenge_walk_types[34] = 0;
        QueenAnnesRevenge_walk_types[35] = 5;
        QueenAnnesRevenge_walk_types[36] = 5;
        QueenAnnesRevenge_walk_types[37] = 4;
        QueenAnnesRevenge_walk_types[38] = 4;
        QueenAnnesRevenge_walk_types[39] = 5;
        QueenAnnesRevenge_walk_types[40] = 5;
        QueenAnnesRevenge_walk_types[41] = 6;
        QueenAnnesRevenge_walk_types[42] = 6;
        QueenAnnesRevenge_walk_types[43] = 0;
        QueenAnnesRevenge_walk_types[44] = 0;
        QueenAnnesRevenge_walk_types[45] = 0;
        QueenAnnesRevenge_walk_types[46] = 0;
        QueenAnnesRevenge_walk_types[47] = 0;
        QueenAnnesRevenge_walk_types[48] = 0;
        QueenAnnesRevenge_walk_types[49] = 0;
        QueenAnnesRevenge_walk_types[50] = 0;
        QueenAnnesRevenge_walk_types[51] = 0;
        QueenAnnesRevenge_walk_types[52] = 2;
        QueenAnnesRevenge_walk_types[53] = 2;
        QueenAnnesRevenge_walk_types[54] = 2;
        QueenAnnesRevenge_walk_types[55] = 2;
        QueenAnnesRevenge_walk_types[56] = 1;
        QueenAnnesRevenge_walk_types[57] = 1;
        QueenAnnesRevenge_walk_types[58] = 1;
        QueenAnnesRevenge_walk_types[59] = 1;
        QueenAnnesRevenge_walk_types[60] = 5;
        QueenAnnesRevenge_walk_types[61] = 4;
        QueenAnnesRevenge_walk_types[62] = 5;
        QueenAnnesRevenge_walk_types[63] = 4;

        QueenAnnesRevenge_walk_graph[0] = (0)*256 + (1);
        QueenAnnesRevenge_walk_graph[1] = (1)*256 + (2);
        QueenAnnesRevenge_walk_graph[2] = (2)*256 + (3);
        QueenAnnesRevenge_walk_graph[3] = (3)*256 + (4);
        QueenAnnesRevenge_walk_graph[4] = (4)*256 + (5);
        QueenAnnesRevenge_walk_graph[5] = (5)*256 + (6);
        QueenAnnesRevenge_walk_graph[6] = (6)*256 + (7);
        QueenAnnesRevenge_walk_graph[7] = (7)*256 + (8);
        QueenAnnesRevenge_walk_graph[8] = (8)*256 + (9);
        QueenAnnesRevenge_walk_graph[9] = (9)*256 + (10);
        QueenAnnesRevenge_walk_graph[10] = (10)*256 + (11);
        QueenAnnesRevenge_walk_graph[11] = (11)*256 + (12);
        QueenAnnesRevenge_walk_graph[12] = (12)*256 + (31);
        QueenAnnesRevenge_walk_graph[13] = (13)*256 + (31);
        QueenAnnesRevenge_walk_graph[14] = (14)*256 + (15);
        QueenAnnesRevenge_walk_graph[15] = (15)*256 + (16);
        QueenAnnesRevenge_walk_graph[16] = (16)*256 + (17);
        QueenAnnesRevenge_walk_graph[17] = (17)*256 + (18);
        QueenAnnesRevenge_walk_graph[18] = (18)*256 + (19);
        QueenAnnesRevenge_walk_graph[19] = (19)*256 + (20);
        QueenAnnesRevenge_walk_graph[20] = (20)*256 + (21);
        QueenAnnesRevenge_walk_graph[21] = (21)*256 + (33);
        QueenAnnesRevenge_walk_graph[22] = (22)*256 + (23);
        QueenAnnesRevenge_walk_graph[23] = (23)*256 + (24);
        QueenAnnesRevenge_walk_graph[24] = (24)*256 + (0);
        QueenAnnesRevenge_walk_graph[25] = (25)*256 + (0);
        QueenAnnesRevenge_walk_graph[26] = (26)*256 + (0);
        QueenAnnesRevenge_walk_graph[27] = (29)*256 + (24);
        QueenAnnesRevenge_walk_graph[28] = (30)*256 + (10);
        QueenAnnesRevenge_walk_graph[29] = (28)*256 + (9);
        QueenAnnesRevenge_walk_graph[30] = (27)*256 + (9);
        QueenAnnesRevenge_walk_graph[31] = (34)*256 + (32);
        QueenAnnesRevenge_walk_graph[32] = (34)*256 + (13);
        QueenAnnesRevenge_walk_graph[33] = (32)*256 + (33);
        QueenAnnesRevenge_walk_graph[34] = (32)*256 + (22);
        QueenAnnesRevenge_walk_graph[35] = (12)*256 + (22);
        QueenAnnesRevenge_walk_graph[36] = (13)*256 + (32);
        QueenAnnesRevenge_walk_graph[37] = (39)*256 + (2);
        QueenAnnesRevenge_walk_graph[38] = (39)*256 + (41);
        QueenAnnesRevenge_walk_graph[39] = (40)*256 + (42);
        QueenAnnesRevenge_walk_graph[40] = (40)*256 + (7);
        QueenAnnesRevenge_walk_graph[41] = (36)*256 + (31);
        QueenAnnesRevenge_walk_graph[42] = (36)*256 + (38);
        QueenAnnesRevenge_walk_graph[43] = (35)*256 + (37);
        QueenAnnesRevenge_walk_graph[44] = (35)*256 + (22);
        QueenAnnesRevenge_walk_graph[45] = (33)*256 + (13);
        QueenAnnesRevenge_walk_graph[46] = (13)*256 + (14);
        QueenAnnesRevenge_walk_graph[47] = (13)*256 + (54);
        QueenAnnesRevenge_walk_graph[48] = (17)*256 + (43);
        QueenAnnesRevenge_walk_graph[49] = (44)*256 + (43);
        QueenAnnesRevenge_walk_graph[50] = (50)*256 + (43);
        QueenAnnesRevenge_walk_graph[51] = (50)*256 + (44);
        QueenAnnesRevenge_walk_graph[52] = (50)*256 + (48);
        QueenAnnesRevenge_walk_graph[53] = (50)*256 + (49);
        QueenAnnesRevenge_walk_graph[54] = (45)*256 + (44);
        QueenAnnesRevenge_walk_graph[55] = (45)*256 + (46);
        QueenAnnesRevenge_walk_graph[56] = (47)*256 + (46);
        QueenAnnesRevenge_walk_graph[57] = (47)*256 + (48);
        QueenAnnesRevenge_walk_graph[58] = (49)*256 + (48);
        QueenAnnesRevenge_walk_graph[59] = (50)*256 + (51);
        QueenAnnesRevenge_walk_graph[60] = (49)*256 + (19);
        QueenAnnesRevenge_walk_graph[61] = (60)*256 + (43);
        QueenAnnesRevenge_walk_graph[62] = (60)*256 + (61);
        QueenAnnesRevenge_walk_graph[63] = (63)*256 + (62);
        QueenAnnesRevenge_walk_graph[64] = (49)*256 + (62);
        QueenAnnesRevenge_walk_graph[65] = (52)*256 + (11);
        QueenAnnesRevenge_walk_graph[66] = (53)*256 + (12);
        QueenAnnesRevenge_walk_graph[67] = (55)*256 + (34);
        QueenAnnesRevenge_walk_graph[68] = (56)*256 + (34);
        QueenAnnesRevenge_walk_graph[69] = (58)*256 + (22);
        QueenAnnesRevenge_walk_graph[70] = (59)*256 + (23);
        QueenAnnesRevenge_walk_graph[71] = (32)*256 + (57);
}