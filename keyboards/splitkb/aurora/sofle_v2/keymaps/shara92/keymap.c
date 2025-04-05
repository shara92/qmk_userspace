#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#if __has_include("extras.c")
#    include "extras.c"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, _______, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(1), XXXXXXX, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, LT(1, KC_ENT), KC_SPC, KC_SPC, LT(2, KC_ENT), KC_RCTL, KC_RALT, KC_RGUI),
    [1] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, KC_GRV, KC_LABK, KC_RABK, KC_EQL, KC_PIPE, KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR, STDCC, KC_DEL, _______, KC_EXLM, KC_ASTR, KC_SLSH, KC_MINS , KC_AMPR, KC_HASH, KC_LPRN, KC_RPRN, KC_SCLN, KC_DQUO, _______, _______, KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC, _______, _______, KC_AT, KC_COLN, KC_COMM, KC_DOT, KC_QUOT, _______, _______, _______, _______, _______, _______, CURDIR, UPDIR, _______, _______, _______),
    [2] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, KC_PSCR, KC_APP, XXXXXXX, XXXXXXX, GITPULL, GITCHECKOUT, KC_UP, C(KC_RGHT), C(KC_BSPC), KC_BSPC, MO(3), KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS, GITSTASH, GITSTAT, GITDIFF, GITADDU, KC_DEL, KC_BSPC, _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX, _______, _______, GITSTASHPOP, GITCOMMIT, XXXXXXX, KC_END, XXXXXXX, _______, _______, _______, _______, MO(3), _______, _______, _______, _______, _______, _______),
    [3] = LAYOUT(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

 