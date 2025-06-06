#include "src/game/envfx_snow.h"

const GeoLayout thwomp_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(11, 180, 300),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, thwomp_000_displaylist_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, thwomp_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
