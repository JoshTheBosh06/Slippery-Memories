#include "src/game/print.h"
#include "src/game/hud.h"
#include "gfx_dimensions.h"
#include "src/game/mario.h"

void timer_1_start(void) {
    Texture *(*hudLUT)[58] = segmented_to_virtual(&main_hud_lut);
    switch (o->oAction) {
        case 0:
                print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(300), 209, "TIME");
                print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(230), 209, "|");
    print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(241), 209, "%0d", timerMinsr);
    if (timerMinsr < 10) {
        print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 209, "%02d", timerSecsr);
    } else if (timerMinsr >= 10) {
        print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(171), 209, "%02d", timerSecsr);
    }
    print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(300), 185, "RANK");
    timerFracSecsr++;
    if (timerFracSecsr == 30) {
        timerFracSecsr = 0;
        timerSecsr++;
    }
    if (timerSecsr == 60) {
        timerSecsr = 0;
        timerMinsr++;
    }
    if (timerMinsr == 0) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "S");
        ranksr = 0;
    }
    if (timerMinsr == 1) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "S");
        ranksr = 0;
    }
    if (timerMinsr == 2) {
        //finish = 1;
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "A");
        
        ranksr = 1;
    }
    if (timerMinsr == 3) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "B");
        ranksr = 2;
    }
    if (timerMinsr == 4) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "C");
        ranksr = 3;
    }
    if (timerMinsr == 5) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "D");
        ranksr = 4;
    }
    if (timerMinsr == 6) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "E");
        ranksr = 5;
    }
    if (timerMinsr >= 7) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "F");
        ranksr = 6;
    }
    if (final == 1) {
        if (perform_air_step(gMarioState, AIR_STEP_CHECK_LEDGE_GRAB) == AIR_STEP_LANDED) {
            o->oAction = 1;
        }
    }
            break;
        case 1:
            if (o->oTimer == 0) {
                play_sound(SOUND_GENERAL2_RIGHT_ANSWER, gMarioState->marioObj->header.gfx.cameraToObject);
                set_mario_action(gMarioState, ACT_TIMER_END_CUTSCENE, 0);
                set_mario_animation(gMarioState, MARIO_ANIM_STAR_DANCE);
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 71, 255, 255, 255);
            }
            if (o->oTimer == 70) {
                initiate_warp(LEVEL_WF, 0x01, 0x0A, 0);
            }
            break;
    }
}

void timer_obj_loop(void) {
    timer_1_start();
}

void timer_2_start() {
    Texture *(*hudLUT)[58] = segmented_to_virtual(&main_hud_lut);
    switch (o->oAction) {
        case 0:
                print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(300), 209, "TIME");
                print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(230), 209, "|");
    print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(241), 209, "%0d", timerMins64);
    if (timerMinsr < 10) {
        print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 209, "%02d", timerSecs64);
    } else if (timerMinsr >= 10) {
        print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(171), 209, "%02d", timerSecs64);
    }
    print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(300), 185, "RANK");
    timerFracSecs64++;
    if (timerFracSecs64 == 30) {
        timerFracSecs64 = 0;
        timerSecs64++;
    }
    if (timerSecs64 == 60) {
        timerSecs64 = 0;
        timerMins64++;
    }
    if (timerMins64 == 0) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "S");
        ranks64 = 0;
    }
    if (timerMins64 == 1) {
        //finish = 1;
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "A");
        
        ranks64 = 1;
    }
    if (timerMins64 == 2) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "B");
        ranks64 = 2;
    }
    if (timerMins64 == 3) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "C");
        ranks64 = 3;
    }
    if (timerMins64 == 4) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "D");
        ranks64 = 4;
    }
    if (timerMins64 == 5) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "E");
        ranks64 = 5;
    }
    if (timerMins64 >= 6) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "F");
        ranks64 = 6;
    }
    if (final1 == 1) {
        if (perform_air_step(gMarioState, AIR_STEP_CHECK_LEDGE_GRAB) == AIR_STEP_LANDED) {
            o->oAction = 1;
        }
    }
            break;
        case 1:
            if (o->oTimer == 0) {
                play_sound(SOUND_GENERAL2_RIGHT_ANSWER, gMarioState->marioObj->header.gfx.cameraToObject);
                set_mario_action(gMarioState, ACT_TIMER_END_CUTSCENE, 0);
                set_mario_animation(gMarioState, MARIO_ANIM_STAR_DANCE);
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 71, 255, 255, 255);
            }
            if (o->oTimer == 70) {
                initiate_warp(LEVEL_JRB, 0x01, 0x0A, 0);
            }
            break;
    }
}

void timer_obj_2_loop(void) {  
    timer_2_start();
}

void timer_3_start(void) {
    Texture *(*hudLUT)[58] = segmented_to_virtual(&main_hud_lut);
    switch (o->oAction) {
        case 0:
                print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(300), 209, "TIME");
                print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(230), 209, "|");
    print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(241), 209, "%0d", timerMinsRH);
    if (timerMinsr < 10) {
        print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 209, "%02d", timerSecsRH);
    } else if (timerMinsr >= 10) {
        print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(171), 209, "%02d", timerSecsRH);
    }
    print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(300), 185, "RANK");
    timerFracSecsRH++;
    if (timerFracSecsRH == 30) {
        timerFracSecsRH = 0;
        timerSecsRH++;
    }
    if (timerSecsRH == 60) {
        timerSecsRH = 0;
        timerMinsRH++;
    }
    if (timerMinsRH == 0) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "S");
        ranksRH = 0;
    }
    if (timerMinsRH == 1) {
        //finish = 1;
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "A");
        
        ranksRH = 1;
    }
    if (timerMinsRH == 2) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "B");
        ranksRH = 2;
    }
    if (timerMinsRH == 3) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "C");
        ranksRH = 3;
    }
    if (timerMinsRH == 4) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "D");
        ranksRH = 4;
    }
    if (timerMinsRH == 5) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "E");
        ranksRH = 5;
    }
    if (timerMinsRH >= 6) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(219), 185, "F");
        ranksRH = 6;
    }
    if (final2 == 1) {
        if (perform_air_step(gMarioState, AIR_STEP_CHECK_LEDGE_GRAB) == AIR_STEP_LANDED) {
            o->oAction = 1;
        }
    }
            break;
        case 1:
            if (o->oTimer == 0) {
                play_sound(SOUND_GENERAL2_RIGHT_ANSWER, gMarioState->marioObj->header.gfx.cameraToObject);
                set_mario_action(gMarioState, ACT_TIMER_END_CUTSCENE, 0);
                set_mario_animation(gMarioState, MARIO_ANIM_STAR_DANCE);
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 71, 255, 255, 255);
            }
            if (o->oTimer == 70) {
                initiate_warp(LEVEL_ENDING, 0x01, 0x0A, 0);
            }
            break;
    }
}

void timer_obj_3_loop(void) {
    timer_3_start();
}