Gfx spring_bottom_RockBlockW_ci4_aligner[] = {gsSPEndDisplayList()};
u8 spring_bottom_RockBlockW_ci4[] = {
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x01, 0x22, 0x22, 0x22, 0x22, 0x22, 0x33, 0x10, 
	0x01, 0x22, 0x22, 0x22, 0x23, 0x33, 0x33, 0x31, 
	0x12, 0x22, 0x33, 0x22, 0x23, 0x33, 0x33, 0x41, 
	0x12, 0x22, 0x33, 0x22, 0x23, 0x33, 0x33, 0x41, 
	0x12, 0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 0x41, 
	0x12, 0x23, 0x33, 0x22, 0x33, 0x33, 0x44, 0x41, 
	0x12, 0x23, 0x33, 0x22, 0x33, 0x44, 0x34, 0x41, 
	0x13, 0x33, 0x33, 0x22, 0x33, 0x44, 0x34, 0x41, 
	0x13, 0x34, 0x33, 0x33, 0x33, 0x44, 0x44, 0x41, 
	0x13, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x41, 
	0x13, 0x34, 0x22, 0x44, 0x44, 0x43, 0x34, 0x41, 
	0x14, 0x44, 0x22, 0x44, 0x44, 0x43, 0x34, 0x41, 
	0x14, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x11, 
	0x11, 0x44, 0x44, 0x44, 0x44, 0x44, 0x41, 0x11, 
	0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	
};

Gfx spring_bottom_RockBlockW_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 spring_bottom_RockBlockW_pal_rgba16[] = {
	0x00, 0x00, 0x00, 0x01, 0xe7, 0x7d, 0xbd, 0xef, 
	0x73, 0x9d, 
};

Vtx spring_bottom_Bottom_mesh_layer_1_vtx_cull[8] = {
	{{ {-72, -22, 72}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-72, 22, 72}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-72, 22, -72}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-72, -22, -72}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {72, -22, 72}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {72, 22, 72}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {72, 22, -72}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {72, -22, -72}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx spring_bottom_Bottom_mesh_layer_1_vtx_0[16] = {
	{{ {72, 22, -72}, 0, {512, 0}, {0, 79, 97, 255} }},
	{{ {-72, 22, 72}, 0, {0, 512}, {0, 79, 97, 255} }},
	{{ {72, 22, 72}, 0, {512, 512}, {0, 79, 97, 255} }},
	{{ {-72, 22, -72}, 0, {0, 0}, {0, 79, 97, 255} }},
	{{ {-72, -22, -72}, 0, {0, 512}, {0, 79, 97, 255} }},
	{{ {72, -22, -72}, 0, {512, 512}, {0, 79, 97, 255} }},
	{{ {72, 22, 72}, 0, {0, 0}, {0, 79, 97, 255} }},
	{{ {72, -22, 72}, 0, {0, 512}, {0, 79, 97, 255} }},
	{{ {72, -22, 72}, 0, {512, 512}, {0, 79, 97, 255} }},
	{{ {72, 22, 72}, 0, {512, 0}, {0, 79, 97, 255} }},
	{{ {-72, 22, 72}, 0, {0, 0}, {0, 79, 97, 255} }},
	{{ {-72, -22, 72}, 0, {0, 512}, {0, 79, 97, 255} }},
	{{ {-72, 22, -72}, 0, {512, 0}, {0, 79, 97, 255} }},
	{{ {-72, -22, -72}, 0, {512, 512}, {0, 79, 97, 255} }},
	{{ {-72, -22, -72}, 0, {0, 0}, {0, 79, 97, 255} }},
	{{ {72, -22, -72}, 0, {512, 0}, {0, 79, 97, 255} }},
};

Gfx spring_bottom_Bottom_mesh_layer_1_tri_0[] = {
	gsSPVertex(spring_bottom_Bottom_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(14, 8, 11, 0, 14, 15, 8, 0),
	gsSPEndDisplayList(),
};


Gfx mat_spring_bottom_f3dlite_material_019[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTextureFilter(G_TF_POINT),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, spring_bottom_RockBlockW_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 4),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, spring_bottom_RockBlockW_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 63, 2048),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_spring_bottom_f3dlite_material_019[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_LIGHTING),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx spring_bottom_Bottom_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(spring_bottom_Bottom_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_spring_bottom_f3dlite_material_019),
	gsSPDisplayList(spring_bottom_Bottom_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_spring_bottom_f3dlite_material_019),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

