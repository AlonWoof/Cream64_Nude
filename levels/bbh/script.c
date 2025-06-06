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

#include "actors/common0.h"
#include "actors/common1.h"
#include "actors/group9.h"

#include "make_const_nonconst.h"
#include "levels/bbh/header.h"


static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  2089,  1331, -1125, /*angle*/ 0, 270, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  1331,  1075, -1330, /*angle*/ 0, 90, 0,  /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  2089,  1331,  -511, /*angle*/ 0, 270, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  -511,   358, -1330, /*angle*/ 0, 90, 0,  /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  1126,   358,  2212, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/   205,   358,  2212, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_BBH_TILTING_FLOOR_PLATFORM, /*pos*/  2866,   820,  1897, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvBBHTiltingTrapPlatform),
    OBJECT(/*model*/ MODEL_BBH_TUMBLING_PLATFORM,      /*pos*/  2961,     0,  -768, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvBBHTumblingBridge),
    OBJECT(/*model*/ MODEL_BBH_MOVING_BOOKSHELF,       /*pos*/ -1994,   819,   213, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvHauntedBookshelf),
    OBJECT(/*model*/ MODEL_BBH_MESH_ELEVATOR,          /*pos*/ -2985,  -205,  5400, /*angle*/ 0, -45, 0, /*bhvParam*/ 0, /*bhv*/ bhvMeshElevator),
    OBJECT(/*model*/ MODEL_BBH_MERRY_GO_ROUND,         /*pos*/  -205, -2560,   205, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvMerryGoRound),
    OBJECT(/*model*/ MODEL_NONE,                       /*pos*/  2200,   819,  -800, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvCoffinSpawner),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_KINGBOO,                        /*pos*/  1000,    50,  1000, /*angle*/ 0, 0, 0,   /*bhvParam*/ BPARAM1(STAR_INDEX_ACT_1) | BPARAM2(BIG_BOO_BP_GHOST_HUNT), /*bhv*/ bhvGhostHuntBigBoo,       /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/    20,   100,  -908, /*angle*/ 0, 0, 0,   /*bhvParam*/ BPARAM2(BOO_BP_GHOST_HUNT), /*bhv*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  3150,   100,   398, /*angle*/ 0, 0, 0,   /*bhvParam*/ BPARAM2(BOO_BP_GHOST_HUNT), /*bhv*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/ -2000,   150,  -800, /*angle*/ 0, 0, 0,   /*bhvParam*/ BPARAM2(BOO_BP_GHOST_HUNT), /*bhv*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  2851,   100,  2289, /*angle*/ 0, 0, 0,   /*bhvParam*/ BPARAM2(BOO_BP_GHOST_HUNT), /*bhv*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/ -1551,   100, -1018, /*angle*/ 0, 0, 0,   /*bhvParam*/ BPARAM2(BOO_BP_GHOST_HUNT), /*bhv*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BBH_STAIRCASE_STEP,         /*pos*/   973,     0,   517, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvHiddenStaircaseStep, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BBH_STAIRCASE_STEP,         /*pos*/   973,  -206,   717, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvHiddenStaircaseStep, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BBH_STAIRCASE_STEP,         /*pos*/   973,  -412,   917, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvHiddenStaircaseStep, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/    20,   100,  -908, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  3150,   100,   398, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/ -2000,   150,  -800, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  2851,   100,  2289, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/ -1551,   100, -1018, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                       /*pos*/   990, -2146,  -908, /*angle*/ 0, -45, 0, /*bhvParam*/ BPARAM2(0x03), /*bhv*/ bhvFlamethrower,          /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                       /*pos*/ -1100, -2372,  1100, /*angle*/ 0, 135, 0, /*bhvParam*/ BPARAM1(STAR_INDEX_ACT_2), /*bhv*/ bhvMerryGoRoundBooManager,         /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KINGBOO,                        /*pos*/  1030,  1922,  2546, /*angle*/ 0, -90, 0, /*bhvParam*/ BPARAM1(STAR_INDEX_ACT_5), /*bhv*/ bhvBalconyBigBoo,        /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/   581,  1850,  -206, /*angle*/ 0, -90, 0, /*bhvParam*/ 0, /*bhv*/ bhvBoo,                 /*acts*/ ALL_ACTS),
    OBJECT          (/*model*/ MODEL_MAD_PIANO,                  /*pos*/ -1300,     0,  2310, /*angle*/ 0, 243, 0, /*bhvParam*/ 0, /*bhv*/ bhvMadPiano),
    OBJECT          (/*model*/ MODEL_HAUNTED_CHAIR,              /*pos*/ -1530,     0,  2200, /*angle*/ 0, 66, 0,  /*bhvParam*/ 0, /*bhv*/ bhvHauntedChair),
    OBJECT          (/*model*/ MODEL_NONE,                       /*pos*/ -1330,   890,   200, /*angle*/ 0, 90, 0,  /*bhvParam*/ 0, /*bhv*/ bhvBookendSpawn),
    OBJECT          (/*model*/ MODEL_NONE,                       /*pos*/  -818,   890,  -200, /*angle*/ 0, 270, 0, /*bhvParam*/ 0, /*bhv*/ bhvBookendSpawn),
    OBJECT          (/*model*/ MODEL_NONE,                       /*pos*/ -1330,   890,  -622, /*angle*/ 0, 90, 0,  /*bhvParam*/ 0, /*bhv*/ bhvBookendSpawn),
    OBJECT          (/*model*/ MODEL_NONE,                       /*pos*/  -818,   890,  -686, /*angle*/ 0, 270, 0, /*bhvParam*/ 0, /*bhv*/ bhvBookendSpawn),
    OBJECT          (/*model*/ MODEL_NONE,                       /*pos*/ -1950,   880,     8, /*angle*/ 0, 180, 0, /*bhvParam*/ 0, /*bhv*/ bhvHauntedBookshelfManager),
    OBJECT          (/*model*/ MODEL_BOOKEND,                    /*pos*/  2680,  1045,   876, /*angle*/ 0, 166, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlyingBookend),
    OBJECT          (/*model*/ MODEL_BOOKEND,                    /*pos*/  3075,  1045,   995, /*angle*/ 0, 166, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlyingBookend),
    OBJECT          (/*model*/ MODEL_BOOKEND,                    /*pos*/ -1411,   218,   922, /*angle*/ 0, 180, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlyingBookend),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2030, 1350,  1940, /*angle*/ 0, 0, 0,  /*bhvParam*/ BPARAM1(STAR_INDEX_ACT_3), /*bhv*/ bhvStar,                    /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  -204, 1100,  1576, /*angle*/ 0, 0, 0,  /*bhvParam*/ BPARAM1(STAR_INDEX_ACT_4), /*bhv*/ bhvHiddenRedCoinStar,    /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/   923, 1741,  -332, /*angle*/ 0, 18, 0, /*bhvParam*/ BPARAM1(STAR_INDEX_ACT_6) | BPARAM2(0x01), /*bhv*/ bhvMrI,                    /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_bbh_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0        (/*seg*/ 0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x0A, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _spooky_mio0SegmentRomStart, _spooky_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0C, _group9_geoSegmentRomStart,  _group9_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_10),
    JUMP_LINK(script_func_global_18),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),

    LOAD_MODEL_FROM_GEO(MODEL_KINGBOO,            kingboo_geo),
    LOAD_MODEL_FROM_GEO(MODEL_AMY,                    amy_geo),
    LOAD_MODEL_FROM_GEO(MODEL_AMY_NUDE,                    amy_nude_geo),

    AREA(/*index*/ 1, geo_bbh_000F00),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_3),
        JUMP_LINK(script_func_local_4),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 666, 796, 5350, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvSpinAirborneWarp),
        WARP_NODE(/*id*/ WARP_NODE_0A,      /*destLevel*/ LEVEL_BBH,              /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_SUCCESS, /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_DEATH,   /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0B, /*flags*/ WARP_NO_CHECKPOINT),
        OBJECT(/*model*/ MODEL_CHEESE_FOLLOW, /*pos*/ 866, 796, 5350, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCheeseFollow),
        OBJECT_WITH_ACTS(/*model*/ MODEL_AMY, /*pos*/  1289, 80,  1005,  /*angle*/ 0, 0, 0, /*behParam*/ AMY_02 << 24, /*beh*/ bhvToadMessageAmy2,   /*acts*/ ACT_2 | ACT_3),
        OBJECT_WITH_ACTS(/*model*/ MODEL_AMY_NUDE, /*pos*/  1289, 80,  1005,  /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvAmyBoo,   /*acts*/ ACT_4),
        OBJECT_WITH_ACTS(/*model*/ MODEL_AMY_NUDE, /*pos*/  1289, 80,  1005,  /*angle*/ 0, 0, 0, /*behParam*/ AMY_03 << 24, /*beh*/ bhvToadMessageAmy7,   /*acts*/ ACT_5 | ACT_6),
        OBJECT(/*model*/ MODEL_WISP1, /*pos*/  912,   -204,  3063, /*angle*/ 0, 179, 0, /*behParam*/ MWISP_BBH << 16, /*beh*/ bhvWisp1),
        OBJECT_WITH_ACTS(/*model*/ MODEL_GOOMBA_CREM, /*pos*/  1146,  -203, -2280, /*angle*/ 0, 0, 0, /*behParam*/ 0x000C0000, /*beh*/ bhvGoombaCrem, ACT_1),
        OBJECT_WITH_ACTS(/*model*/ MODEL_SCUTTLEBUG, /*pos*/  1146,  -203, -2280, /*angle*/ 0, 0, 0, /*behParam*/ 0x000C0000, /*beh*/ bhvScuttlebug, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
        TERRAIN(/*terrainData*/ bbh_seg7_collision_level),
        MACRO_OBJECTS(/*objList*/ bbh_seg7_macro_objs),
        ROOMS(/*surfaceRooms*/ bbh_seg7_rooms),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_098),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0006, /*seq*/ SEQ_LEVEL_SPOOKY),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SPOOKY),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ 666, -204, 5350),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
