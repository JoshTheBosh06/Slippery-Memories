#include "src/game/envfx_snow.h"

const GeoLayout falling_platform_smb1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, falling_platform_smb1_falling_platform_smb1_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
