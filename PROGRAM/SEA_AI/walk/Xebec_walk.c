int Xebec_walk_count;
float Xebec_walk_verts[72];
int Xebec_walk_types[24];
int Xebec_walk_graph[50];

void Xebec_walk_init()
{
	Xebec_walk_count = 24;

	Xebec_walk_verts[0 ] = -2.476301;
	Xebec_walk_verts[1 ] = 1.741229;
	Xebec_walk_verts[2 ] = -6.020534;
	Xebec_walk_verts[3 ] = 0.506837;
	Xebec_walk_verts[4 ] = 1.733578;
	Xebec_walk_verts[5 ] = -4.661572;
	Xebec_walk_verts[6 ] = 1.587154;
	Xebec_walk_verts[7 ] = 1.469372;
	Xebec_walk_verts[8 ] = 1.060965;
	Xebec_walk_verts[9 ] = 2.569438;
	Xebec_walk_verts[10] = 1.469372;
	Xebec_walk_verts[11] = 1.060965;
	Xebec_walk_verts[12] = 1.117441;
	Xebec_walk_verts[13] = 1.427531;
	Xebec_walk_verts[14] = 4.932908;
	Xebec_walk_verts[15] = -2.341259;
	Xebec_walk_verts[16] = 3.242332;
	Xebec_walk_verts[17] = -7.667893;
	Xebec_walk_verts[18] = 0.479638;
	Xebec_walk_verts[19] = 1.552665;
	Xebec_walk_verts[20] = 9.076429;
	Xebec_walk_verts[21] = -0.626960;
	Xebec_walk_verts[22] = 1.552665;
	Xebec_walk_verts[23] = 9.314243;
	Xebec_walk_verts[24] = -1.213002;
	Xebec_walk_verts[25] = 1.430617;
	Xebec_walk_verts[26] = 5.263597;
	Xebec_walk_verts[27] = -1.262427;
	Xebec_walk_verts[28] = 1.500718;
	Xebec_walk_verts[29] = -0.204647;
	Xebec_walk_verts[30] = -2.464652;
	Xebec_walk_verts[31] = 1.500718;
	Xebec_walk_verts[32] = 0.976002;
	Xebec_walk_verts[33] = -1.147633;
	Xebec_walk_verts[34] = 1.743556;
	Xebec_walk_verts[35] = -5.021188;
	Xebec_walk_verts[36] = -1.970922;
	Xebec_walk_verts[37] = 3.277797;
	Xebec_walk_verts[38] = -8.889812;
	Xebec_walk_verts[39] = 1.678335;
	Xebec_walk_verts[40] = 3.300537;
	Xebec_walk_verts[41] = -9.795836;
	Xebec_walk_verts[42] = 1.678335;
	Xebec_walk_verts[43] = 3.300537;
	Xebec_walk_verts[44] = -6.495187;
	Xebec_walk_verts[45] = -0.419974;
	Xebec_walk_verts[46] = 1.725254;
	Xebec_walk_verts[47] = -5.370546;
	Xebec_walk_verts[48] = 1.507408;
	Xebec_walk_verts[49] = 1.595132;
	Xebec_walk_verts[50] = -3.019456;
	Xebec_walk_verts[51] = 1.507408;
	Xebec_walk_verts[52] = 1.531028;
	Xebec_walk_verts[53] = -1.452976;
	Xebec_walk_verts[54] = 1.453629;
	Xebec_walk_verts[55] = 1.470273;
	Xebec_walk_verts[56] = 3.347712;
	Xebec_walk_verts[57] = 1.375661;
	Xebec_walk_verts[58] = 1.446337;
	Xebec_walk_verts[59] = 6.421756;
	Xebec_walk_verts[60] = -1.335063;
	Xebec_walk_verts[61] = 1.456777;
	Xebec_walk_verts[62] = 6.215945;
	Xebec_walk_verts[63] = -1.568791;
	Xebec_walk_verts[64] = 1.440604;
	Xebec_walk_verts[65] = 3.341241;
	Xebec_walk_verts[66] = -1.411636;
	Xebec_walk_verts[67] = 1.612309;
	Xebec_walk_verts[68] = -3.062330;
	Xebec_walk_verts[69] = -0.419974;
	Xebec_walk_verts[70] = 1.766187;
	Xebec_walk_verts[71] = -7.075140;

	Xebec_walk_types[0 ] = 0;
	Xebec_walk_types[1 ] = 0;
	Xebec_walk_types[2 ] = 0;
	Xebec_walk_types[3 ] = 0;
	Xebec_walk_types[4 ] = 0;
	Xebec_walk_types[5 ] = 0;
	Xebec_walk_types[6 ] = 0;
	Xebec_walk_types[7 ] = 0;
	Xebec_walk_types[8 ] = 0;
	Xebec_walk_types[9 ] = 0;
	Xebec_walk_types[10] = 0;
	Xebec_walk_types[11] = 0;
	Xebec_walk_types[12] = 0;
	Xebec_walk_types[13] = 0;
	Xebec_walk_types[14] = 0;
	Xebec_walk_types[15] = 2;
	Xebec_walk_types[16] = 1;
	Xebec_walk_types[17] = 1;
	Xebec_walk_types[18] = 1;
	Xebec_walk_types[19] = 1;
	Xebec_walk_types[20] = 1;
	Xebec_walk_types[21] = 1;
	Xebec_walk_types[22] = 1;
	Xebec_walk_types[23] = 3;

	Xebec_walk_graph[0 ] = (24)*256 + (16);
	Xebec_walk_graph[1 ] = (16)*256 + (11);
	Xebec_walk_graph[2 ] = (16)*256 + (0);
	Xebec_walk_graph[3 ] = (16)*256 + (1);
	Xebec_walk_graph[4 ] = (11)*256 + (0);
	Xebec_walk_graph[5 ] = (0)*256 + (5);
	Xebec_walk_graph[6 ] = (5)*256 + (12);
	Xebec_walk_graph[7 ] = (-1)*256 + (-1);
	Xebec_walk_graph[8 ] = ( 3)*256 + (17);
	Xebec_walk_graph[9 ] = (1)*256 + (11);
	Xebec_walk_graph[10] = (23)*256 + (18);
	Xebec_walk_graph[11] = (13)*256 + (14);
	Xebec_walk_graph[12] = (11)*256 + (23);
	Xebec_walk_graph[13] = (1)*256 + (23);
	Xebec_walk_graph[14] = (9)*256 + (23);
	Xebec_walk_graph[15] = (1)*256 + (9);
	Xebec_walk_graph[16] = (23)*256 + (17);
	Xebec_walk_graph[17] = (17)*256 + (1);
	Xebec_walk_graph[18] = (9)*256 + (1);
	Xebec_walk_graph[19] = (9)*256 + (10);
	Xebec_walk_graph[20] = (10)*256 + (22);
	Xebec_walk_graph[21] = (22)*256 + (9);
	Xebec_walk_graph[22] = (22)*256 + (8);
	Xebec_walk_graph[23] = (18)*256 + (23);
	Xebec_walk_graph[24] = (18)*256 + (17);
	Xebec_walk_graph[25] = (18)*256 + (11);
	Xebec_walk_graph[26] = (8)*256 + (21);
	Xebec_walk_graph[27] = (21)*256 + (7);
	Xebec_walk_graph[28] = (7)*256 + (6);
	Xebec_walk_graph[29] = (6)*256 + (20);
	Xebec_walk_graph[30] = (20)*256 + (4);
	Xebec_walk_graph[31] = (4)*256 + (19);
	Xebec_walk_graph[32] = (19)*256 + (3);
	Xebec_walk_graph[33] = (19)*256 + (2);
	Xebec_walk_graph[34] = (2)*256 + (3);
	Xebec_walk_graph[35] = (3)*256 + (18);
	Xebec_walk_graph[36] = (2)*256 + (18);
	Xebec_walk_graph[37] = (8)*256 + (4);
	Xebec_walk_graph[38] = (6)*256 + (19);
	Xebec_walk_graph[39] = (-1)*256 + (-1);
	Xebec_walk_graph[40] = (-1)*256 + (-1);
	Xebec_walk_graph[41] = (9)*256 + (17);
	Xebec_walk_graph[42] = (10)*256 + (19);
	Xebec_walk_graph[43] = (22)*256 + (2);
	Xebec_walk_graph[44] = (10)*256 + (21);
	Xebec_walk_graph[45] = (5)*256 + (14);
	Xebec_walk_graph[46] = (12)*256 + (14);
	Xebec_walk_graph[47] = (11)*256 + (22);
	Xebec_walk_graph[48] = (-1)*256 + (-1);
	Xebec_walk_graph[49] = (-1)*256 + (-1);
}
