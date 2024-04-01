#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	LOAD_MODEL_FROM_GEO(MODEL_FALLING_PLATFORM_SMB1, falling_platform_smb1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_NOTEBLOCK, noteblock_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SPECIAL_NOTEBLOCK, s_noteblock_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BLUE_NOTEBLOCK, b_noteblock), 
	LOAD_MODEL_FROM_GEO(MODEL_PR_PLANT_MOUTHCLOSED_UG, prplant_mouthclosed_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PR_PLANT_MOUTHOPEN_UG, prplant_mouthopen_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SPRING_BOTTOM, spring_bottom_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SPRING_SPRING, spring_spring_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SPRING_TOP, spring_spring_top_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_RED_1, red_koopa_1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_RED_2, red_koopa_2_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_BOB, 0x02, 0x09, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5400, -220, -2638, 0, 0, 0, 0x00000000, bhvRedKoopa),
		OBJECT(MODEL_NONE, 4537, -220, -2638, 0, 0, 0, 0x00000000, bhvRedKoopa),
		OBJECT(MODEL_FALLING_PLATFORM_SMB1, -5725, 1858, 3542, 0, 0, 0, 0x00000000, bhvFallingPlatformSMB1),
		OBJECT(MODEL_FALLING_PLATFORM_SMB1, -9173, 2195, 920, 0, 0, 0, 0x00000000, bhvFallingPlatformSMB1),
		MARIO_POS(0x01, 0, -11223, 2871, 357),
		OBJECT(MODEL_NONE, -4462, -596, -6215, 0, 0, 0, (1 << 16), bhvRetroPipeSFX),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, 0, 0, (0 << 16), bhvTimerObj),
		OBJECT(MODEL_NONE, -11223, 2871, 357, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x02, 0x09, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x02, 0x09, WARP_NO_CHECKPOINT),
		WARP_NODE(0x09, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 2220, 0, -3300, 0, 0, 0, (2 << 16), bhvNoteblock),
		OBJECT(MODEL_NONE, 2220, 200, -2400, 0, 0, 0, (2 << 16), bhvNoteblock),
		OBJECT(MODEL_NONE, 2120, 400, 700, 0, 0, 0, (2 << 16), bhvNoteblock),
		OBJECT(MODEL_NONE, 320, 600, 3400, 0, 0, 0, (2 << 16), bhvNoteblock),
		OBJECT(MODEL_NONE, -4189, 1500, -7907, 0, 0, 0, (0 << 16), bhvRetroPipeSFX),
		OBJECT(MODEL_NONE, -968, 455, -5829, 0, 0, 0, (0 << 16), bhvPrPlant),
		OBJECT(MODEL_NONE, -2969, 455, -9827, 0, 0, 0, (1 << 16), bhvPrPlant),
		OBJECT(MODEL_NONE, 3471, 455, -8307, 0, 95, 0, (1 << 16), bhvPrPlant),
		OBJECT(MODEL_NONE, 4342, 455, 358, 0, 70, 0, (0 << 16), bhvPrPlant),
		OBJECT(MODEL_NONE, -413, 455, 1665, 0, 0, 0, (0 << 16), bhvPrPlant),
		OBJECT(MODEL_NONE, -4713, 455, 6002, 0, 0, 0, (1 << 16), bhvPrPlant),
		OBJECT(MODEL_NONE, -6470, 354, 3820, 0, 90, 0, 0x00000000, bhvSpringUG),
		OBJECT(MODEL_NONE, 70000, 0, 0, 0, 0, 0, 0x00000000, bhvTimerObj),
		OBJECT(MODEL_NONE, -4189, 1537, -7907, 0, 90, 0, (0x09 << 16), bhvInstantActiveWarp),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, bob_area_3),
		WARP_NODE(0xF0, LEVEL_BOB, 0x03, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x03, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5653, -1248, -3169, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1248, -3512, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1248, -2843, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -820, -3169, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -820, -3512, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -820, -2843, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1248, -3371, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1248, -2995, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -822, -3371, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -822, -2995, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1003, -3169, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1003, -2984, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1003, -2811, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1003, -3367, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, 5653, -1003, -3549, 0, 0, 0, 0x00000000, bhvCastleWarp),
		OBJECT(MODEL_NONE, -6411, -142, -2833, 0, 0, 0, (0 << 16), bhvNoteblock),
		OBJECT(MODEL_NONE, -6411, -142, -4833, 0, 0, 0, (0 << 16), bhvNoteblock),
		OBJECT(MODEL_NONE, -6411, -142, -3833, 0, 0, 0, (0 << 16), bhvNoteblock),
		OBJECT(MODEL_NONE, -9911, -24, -758, 0, 90, 0, (0x05 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -2211, 158, -3158, 0, 0, 0, 0x00000000, bhvTimerObj),
		TERRAIN(bob_area_3_collision),
		MACRO_OBJECTS(bob_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, bob_area_4),
		WARP_NODE(0xF0, LEVEL_BOB, 0x04, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x04, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 2745, -200, 1400, 0, 0, 0, (0 << 16), bhvNoteblock),
		OBJECT(MODEL_NONE, -5100, 536, 5460, 0, 90, 0, (0x04 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -774, 0, 0, 0, 0, 0, 0x00000000, bhvTimerObj),
		TERRAIN(bob_area_4_collision),
		MACRO_OBJECTS(bob_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -11223, 2871, 357),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
