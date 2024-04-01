Vtx spring_top_Top_mesh_layer_1_vtx_cull[8] = {
	{{ {-66, -20, 66}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-66, 20, 66}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-66, 20, -66}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-66, -20, -66}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {66, -20, 66}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {66, 20, 66}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {66, 20, -66}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {66, -20, -66}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx spring_top_Top_mesh_layer_1_vtx_0[14] = {
	{{ {66, 20, -66}, 0, {624, 496}, {0, 155, 171, 255} }},
	{{ {-66, 20, -66}, 0, {880, 496}, {0, 155, 171, 255} }},
	{{ {-66, 20, 66}, 0, {880, 240}, {0, 155, 171, 255} }},
	{{ {66, 20, 66}, 0, {624, 240}, {0, 155, 171, 255} }},
	{{ {66, -20, -66}, 0, {368, 496}, {0, 114, 126, 255} }},
	{{ {66, -20, 66}, 0, {368, 240}, {0, 96, 106, 255} }},
	{{ {-66, 20, 66}, 0, {624, -16}, {0, 155, 171, 255} }},
	{{ {-66, -20, 66}, 0, {368, -16}, {0, 102, 113, 255} }},
	{{ {-66, -20, -66}, 0, {112, 496}, {0, 112, 124, 255} }},
	{{ {-66, -20, 66}, 0, {112, 240}, {0, 102, 113, 255} }},
	{{ {-66, -20, 66}, 0, {368, 1008}, {0, 102, 113, 255} }},
	{{ {-66, 20, 66}, 0, {624, 1008}, {0, 155, 171, 255} }},
	{{ {-66, 20, -66}, 0, {624, 752}, {0, 155, 171, 255} }},
	{{ {-66, -20, -66}, 0, {368, 752}, {0, 112, 124, 255} }},
};

Gfx spring_top_Top_mesh_layer_1_tri_0[] = {
	gsSPVertex(spring_top_Top_mesh_layer_1_vtx_0 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(5, 3, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(8, 4, 5, 0, 8, 5, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(13, 12, 0, 0, 13, 0, 4, 0),
	gsSPEndDisplayList(),
};


Gfx mat_spring_top_f3dlite_material_018[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, SHADE, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_spring_top_f3dlite_material_018[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx spring_top_Top_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(spring_top_Top_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_spring_top_f3dlite_material_018),
	gsSPDisplayList(spring_top_Top_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_spring_top_f3dlite_material_018),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

