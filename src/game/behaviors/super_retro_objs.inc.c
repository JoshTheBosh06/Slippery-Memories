#include "src/game/hud.h"
#include "src/game/print.h"
#include "src/game/game_init.h"
#include "src/menu/file_select.h"
#include "src/game/mario.h"

void falling_platform_smb1_loop(void) {
    if (gMarioObject->platform == gCurrentObject) {
        o->oAction = 1;
    } else {
        o->oAction = 0;
    }
    switch (o->oAction) {
        case 0:
            o->oVelY = 0;
            break;
        case 1:
            o->oVelY = -5;
            break;
    }

    o->oPosY += o->oVelY;
}

void noteblock_loop(void) {
    o->oPosY = o->oHomeY + (sins(o->oTimer*4000) * o->oVelY);
    o->oVelY *= 0.95f;
    switch (o->oBehParams2ndByte) {
        case 0:
            cur_obj_set_model(MODEL_NOTEBLOCK);
            o->oAction = 0;
            break;
        case 1:
            cur_obj_set_model(MODEL_SPECIAL_NOTEBLOCK);
            o->oAction = 1;
            break;
        case 2:
            cur_obj_set_model(MODEL_BLUE_NOTEBLOCK);
            o->oAction = 0;
            break;
    }
    switch (o->oAction) {
        case 0:
            if (cur_obj_is_mario_on_platform()) {
                mario_stop_riding_and_holding(gMarioState);
                o->oTimer = 0;
                o->oVelY = 50.0f;
                cur_obj_play_sound_2(SOUND_GENERAL_RETRO_SPRING);
                set_mario_action(gMarioState, ACT_TRIPLE_JUMP, 0);
                gMarioStates[0].vel[1] = 66.0f;
            }
            break;
        case 1:
            if (cur_obj_is_mario_on_platform()) {
                mario_stop_riding_and_holding(gMarioState);
                o->oTimer = 0;
                o->oVelY = 50.0f;
                cur_obj_play_sound_2(SOUND_GENERAL_RETRO_SPRING);
                set_mario_action(gMarioState, ACT_TRIPLE_JUMP, 0);
                gMarioStates[0].vel[1] = 150.0f;
            }
            break;
    }
}

struct ObjectHitbox sRetroPipeSFXHitbox = {
    /* interactType:      */ INTERACT_COIN,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 64,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void play_pipe_sound_loop(void) {
    s16 timer = 32;
    obj_set_hitbox(o, &sRetroPipeSFXHitbox);
    
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        switch (o->oBehParams2ndByte) {
            case 0:
                o->oAction = 1;
                break;
            case 1:
                o->oAction = 2;
                break;
        }
    }
    switch (o->oAction) {
        case 0:
            break;
        case 1:
            if (o->oTimer == 1) { 
                cur_obj_play_sound_2(SOUND_GENERAL_RETRO_PIPE);
            }
            break;
        case 2:
            if (o->oTimer == 1) { 
                gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
                cur_obj_play_sound_2(SOUND_GENERAL_RETRO_PIPE);
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, timer, 0, 0, 0);
            }
            if (o->oTimer == 31) {
                initiate_warp(LEVEL_BOB, 0x02, 0x09, 0);
            }
            break;
    }
}

void pr_plant_loop(void) {
    switch (o->oBehParams2ndByte) {
        case 0:
            o->oAction = 0;
            break;
        case 1:
            o->oAction = 1;
            break;
    }
    
    switch (o->oAction) {
        case 0:
            // Wow thats fucked, I dont really have much time to make this better.
            if (o->oTimer == 1) {
                o->oVelY = 10;
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHOPEN_UG);
            }
            if (o->oTimer == 21) {
                o->oVelY = 0;
            }
            if (o->oTimer == 26) {
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHCLOSED_UG);
            }
            if (o->oTimer == 31) {
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHOPEN_UG);
            }
            if (o->oTimer == 36) {
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHCLOSED_UG);
            }
            if (o->oTimer == 41) {
                o->oVelY = -10;
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHOPEN_UG);
            }
            if (o->oTimer == 61) {
                o->oVelY = 0;
            }
            if (o->oTimer == 81) {
                o->oTimer = 0;
            }
            break;
        case 1:
            if (o->oTimer == 5) {
                o->oVelY = 10;
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHOPEN_UG);
            }
            if (o->oTimer == 25) {
                o->oVelY = 0;
            }
            if (o->oTimer == 30) {
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHCLOSED_UG);
            }
            if (o->oTimer == 35) {
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHOPEN_UG);
            }
            if (o->oTimer == 40) {
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHCLOSED_UG);
            }
            if (o->oTimer == 45) {
                o->oVelY = -10;
                cur_obj_set_model(MODEL_PR_PLANT_MOUTHOPEN_UG);
            }
            if (o->oTimer == 65) {
                o->oVelY = 0;
            }
            if (o->oTimer == 85) {
                o->oTimer = 0;
            }
            break;
    }

    o->oPosY += o->oVelY;
}

u8 springStep = 0;

// ok im not normally this hacky with my code but i dont have much time.

void spring_obj_top(void) {
    s16 timer = 32;
    if (cur_obj_is_mario_on_platform()) {
        //o->oVelY = 6 * coss(o->oTimer * 0x300);
        //springStep = 1;
        o->oAction = 1;
        cur_obj_play_sound_2(SOUND_GENERAL_RETRO_SPRING);
        set_mario_action(gMarioState, ACT_TRIPLE_JUMP, 0);
        gMarioState->vel[1] = 130.0f;
    }

    switch (o->oAction) {
        case 0:
            break;
        case 1:
            gLakituState.goalPos[0] = 100.0f;
            gLakituState.goalPos[1] = 100.0f;
            gLakituState.goalPos[2] = 100.0f;
            if (o->oTimer == 1) {
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, timer, 0, 0, 0);
            }
            if (o->oTimer == 31) {
                initiate_warp(LEVEL_BOB, 0x03, 0x05, 0);
            }
            break;
    }

    o->oPosY += o->oVelY;
}

void spring_obj_spring(void) {
    // only now relized that all of this math stuff is not really needed since you cant even see it when the camera pans.
    
    /*if (springStep == 1) {
        if (o->oTimer >= 0) {
            obj_scale_xyz(o, 1.0f,
                         1.0f + ((0.2f - (0.25f * ((f32)o->oTimer) / 400.0f)) * sins(o->oTimer * 0x100)),
                         1.0f);
        }        
    }*/

}

void spring_obj_bot(void) {
    // Empty
}

void spring_obj_loop(void) {
    if (o->oTimer == 1) {
        struct Object *bottom = spawn_object(o, MODEL_SPRING_BOTTOM, bhvSpringBottom);
        struct Object *spring = spawn_object(o, MODEL_SPRING_SPRING, bhvSpringSpring);
        struct Object *top    = spawn_object(o, MODEL_SPRING_TOP,    bhvSpringTop);
        spring->oPosY += 10.0f;
        top->oPosY += 140.0f;
    }

    o->oPosY += o->oVelY;
}

struct ObjectHitbox sCastleWarp = {
    /* interactType:      */ INTERACT_COIN,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 64,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void castle_warp(void) {
    s16 timer = 14;
    obj_set_hitbox(o, &sCastleWarp);
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        o->oAction = 1;
    }
    switch (o->oAction) {
        case 0:
            break;
        case 1:
            if (o->oTimer == 1) {
                cur_obj_play_sound_2(SOUND_GENERAL_RETRO_PIPE);
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, timer, 0, 0, 0);
            }
            if (o->oTimer == 13) {
                initiate_warp(LEVEL_BOB, 0x04, 0x04, 0);
            }
            break;
    }
}

void title_screen_warp_handler(void) {

}

void end_screen_scores(void) {
    print_text_fmt_int(100, 120, "%d", timerMinsr);
    print_text_fmt_int(100, 140, "%02d", timerSecsr);
}

void bg_title_mesh(void) {
    
}

void red_koopa_loop(void) {
    s16 yaw = 0x8000;
    s16 yaw1 = 0x0000;
    switch (o->oAction) {
        case 0:
            cur_obj_set_model(MODEL_KOOPA_RED_1);
            //print_text_fmt_int(100, 100, "OBJECT TIMER %d", o->oTimer);
            if (o->oTimer == 0) {
                o->oMoveAngleYaw = yaw;       
                o->oFaceAngleYaw = yaw;
                o->oVelX = 14;
            }
            if (o->oTimer == 50) {
                o->oMoveAngleYaw = yaw1;       
                o->oFaceAngleYaw = yaw1;
                o->oVelX = 0;
            }
            if (o->oTimer == 100) {
                o->oMoveAngleYaw = yaw1;       
                o->oFaceAngleYaw = yaw1;
                o->oVelX = -14;
            }
            if (o->oTimer == 150) {
                o->oMoveAngleYaw = yaw;       
                o->oFaceAngleYaw = yaw;
                o->oVelX = 0;
            }
            if (o->oTimer == 200) {
                o->oMoveAngleYaw = yaw;       
                o->oFaceAngleYaw = yaw;
                o->oVelX = 14;
            }
            if (o->oTimer == 250) {
                o->oMoveAngleYaw = yaw;       
                o->oFaceAngleYaw = yaw;
                o->oVelX = 0;
            }
            if (o->oTimer == 300) {
                o->oTimer = 0;
            }
            break;
    }

    o->oPosZ += o->oVelZ;
    o->oPosX += o->oVelX;
}