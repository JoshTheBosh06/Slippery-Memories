#include "src/game/envfx_snow.h"

const GeoLayout red_koopa_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, red_koopa_1_Walk1_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
