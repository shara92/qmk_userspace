#include QMK_KEYBOARD_H

#if __has_include("extras.h")
#    include "extras.h"
#endif

// Turn off Liatris LED
#include "gpio.h"


void keyboard_pre_init_user(void) {
    gpio_set_pin_output(24);
    gpio_write_pin_high(24);
}

enum custom_keycodes {
    UPDIR = SAFE_RANGE,
    CURDIR,
    STDCC,
    GITPULL,
    GITSTASH,
    GITSTASHPOP,
    GITDIFF,
    GITSTAT,
    GITADDU,
    GITCOMMIT,
    GITCHECKOUT,
};

#if defined(TAP_DANCE_ENABLE)
// tap dance enum
enum {
    TD_ESC_CAPS,
    TD_BKSPC_DEL,
    TD_DASH_UND,
    TD_ENT_SHIFT
};

// tap dance actions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
    [TD_BKSPC_DEL] = ACTION_TAP_DANCE_DOUBLE(KC_BSPC, KC_DEL),
    [TD_DASH_UND] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, S(KC_MINS)),
    [TD_ENT_SHIFT] = ACTION_TAP_DANCE_DOUBLE(KC_ENT, S(KC_ENT)),
};

#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(KC_UP, KC_DOWN),  ENCODER_CCW_CW(UG_SATD, UG_SATU)  },
    [2] = { ENCODER_CCW_CW(KC_UP, KC_DOWN),  ENCODER_CCW_CW(UG_SPDD, UG_SPDU)  },
    [3] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT),  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif

#if defined(SEND_STRING_ENABLE)
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case UPDIR:
                SEND_STRING_DELAY("../", TAP_CODE_DELAY);
                return false;
            case CURDIR:
                SEND_STRING_DELAY("./", TAP_CODE_DELAY);
                return false;
            case STDCC:
                SEND_STRING_DELAY("::", TAP_CODE_DELAY);
                return false;
            case GITPULL:
                SEND_STRING_DELAY("pull", TAP_CODE_DELAY);
                return false;
            case GITSTASH:
                SEND_STRING_DELAY("stash", TAP_CODE_DELAY);
                return false;
            case GITSTASHPOP:
                SEND_STRING_DELAY("stash pop", TAP_CODE_DELAY);
                return false;
            case GITDIFF:
                SEND_STRING_DELAY("diff -a", TAP_CODE_DELAY);
                return false;
            case GITSTAT:
                SEND_STRING_DELAY("status", TAP_CODE_DELAY);
                return false;
            case GITADDU:
                SEND_STRING_DELAY("add -u", TAP_CODE_DELAY);
                return false;
            case GITCOMMIT:
                SEND_STRING_DELAY("commit -m \"", TAP_CODE_DELAY);
                return false;
            case GITCHECKOUT:
                SEND_STRING_DELAY("checkout -b", TAP_CODE_DELAY);
                return false;
            
        }
    }
    return true;
}
#endif