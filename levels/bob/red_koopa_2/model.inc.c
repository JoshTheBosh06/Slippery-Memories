Gfx red_koopa_2_RedKoopa1_ci4_aligner[] = {gsSPEndDisplayList()};
u8 red_koopa_2_RedKoopa1_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x11, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x31, 0x12, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x31, 0x12, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x31, 0x12, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x11, 0x12, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x22, 0x21, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x23, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x22, 0x22, 0x22, 0x00, 0x33, 0x33, 0x30, 0x00, 
	0x22, 0x20, 0x22, 0x03, 0x23, 0x33, 0x23, 0x00, 
	0x22, 0x00, 0x22, 0x03, 0x32, 0x32, 0x33, 0x30, 
	0x22, 0x02, 0x21, 0x33, 0x33, 0x23, 0x11, 0x30, 
	0x02, 0x02, 0x21, 0x33, 0x32, 0x32, 0x31, 0x30, 
	0x00, 0x02, 0x21, 0x23, 0x23, 0x33, 0x23, 0x20, 
	0x00, 0x22, 0x11, 0x32, 0x33, 0x33, 0x32, 0x30, 
	0x00, 0x02, 0x13, 0x23, 0x23, 0x33, 0x23, 0x20, 
	0x00, 0x02, 0x12, 0x33, 0x32, 0x32, 0x33, 0x30, 
	0x00, 0x00, 0x13, 0x33, 0x33, 0x23, 0x33, 0x30, 
	0x00, 0x00, 0x11, 0x33, 0x32, 0x32, 0x31, 0x11, 
	0x00, 0x02, 0x21, 0x11, 0x23, 0x31, 0x11, 0x00, 
	0x00, 0x22, 0x22, 0x21, 0x11, 0x11, 0x22, 0x20, 
	0x02, 0x22, 0x22, 0x00, 0x00, 0x00, 0x22, 0x22, 
	
};

Gfx red_koopa_2_RedKoopa1_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 red_koopa_2_RedKoopa1_pal_rgba16[] = {
	0x00, 0x00, 0xff, 0xff, 0xe4, 0xc9, 0xb1, 0x89, 
	
};

Vtx red_koopa_2_Walk2_mesh_layer_4_vtx_cull[8] = {
	{{ {-96, 0, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-96, 240, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-96, 240, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-96, 0, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {96, 0, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {96, 240, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {96, 240, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {96, 0, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx red_koopa_2_Walk2_mesh_layer_4_vtx_0[4] = {
	{{ {-96, 0, 0}, 0, {0, 768}, {255, 255, 255, 255} }},
	{{ {96, 0, 0}, 0, {512, 768}, {255, 255, 255, 255} }},
	{{ {96, 240, 0}, 0, {512, 0}, {255, 255, 255, 255} }},
	{{ {-96, 240, 0}, 0, {0, 0}, {255, 255, 255, 255} }},
};

Gfx red_koopa_2_Walk2_mesh_layer_4_tri_0[] = {
	gsSPVertex(red_koopa_2_Walk2_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_red_koopa_2_KoopWalk2[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPGeometryMode(G_CULL_BACK | G_LIGHTING, 0),
	gsDPSetTextureFilter(G_TF_POINT),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, red_koopa_2_RedKoopa1_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 3),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, red_koopa_2_RedKoopa1_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 95, 2048),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 92),
	gsSPEndDisplayList(),
};

Gfx mat_revert_red_koopa_2_KoopWalk2[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK | G_LIGHTING),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx red_koopa_2_Walk2_mesh_layer_4[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(red_koopa_2_Walk2_mesh_layer_4_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_red_koopa_2_KoopWalk2),
	gsSPDisplayList(red_koopa_2_Walk2_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_red_koopa_2_KoopWalk2),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

