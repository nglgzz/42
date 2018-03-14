#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(\
      TAB, Q, W, E, R, T,                Y, U, I, O, P, BSPC,\
      FN0, A, S, D, F, G,                H, J, K, L, SCLN, FN1, \
      LSFT, FN3, X, C, V, B,              N, M, COMM, DOT, FN4, FN5, \
                      FN6, FN7,          FN7, FN8, \
                               FN9,  FN10),
    KEYMAP(\
      GRAVE, 1, 2, 3, 4, 5,                          6, 7, 8, 9, 0, EQUAL,\
      INS, FN11, FN12, FN13, FN14, FN15,           FN16, FN17, FN18, FN19, FN20, MINUS, \
      F1, F2, F3, F4, F5, F6,                       F7, F8, F9, F10, F11, F12, \
                              TRNS, TRNS,           TRNS, TRNS, \
                                         TRNS, TRNS),
    KEYMAP(\
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,\
      TRNS, TRNS, HOME, PGUP, PGDOWN, END,          LEFT, DOWN, UP, RIGHT, TRNS, TRNS, \
      TRNS, TRNS, MSTP, MPLY, MPRV, MNXT,           _VOLDOWN, _VOLUP, _MUTE, TRNS, TRNS, TRNS, \
                              TRNS, TRNS,           TRNS, TRNS, \
                                         TRNS, TRNS),
    KEYMAP(\
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,\
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
                              TRNS, TRNS,           TRNS, TRNS, \
                                         TRNS, TRNS),
};
const action_t PROGMEM fn_actions[] = {
  [0] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
  [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ENTER),
  [3] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_Z),
  [4] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_SLSH),
  [5] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_DELETE),

  [6] = ACTION_LAYER_TAP_KEY(1, KC_QUOTE),
  [7] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_SPACE),
  [8] = ACTION_LAYER_TAP_KEY(1, KC_BSLASH),
  [9] = ACTION_LAYER_TAP_KEY(2, KC_LBRACKET),
  [10] = ACTION_LAYER_TAP_KEY(2, KC_RBRACKET),

  [11] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
  [12] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
  [13] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
  [14] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
  [15] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
  [16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
  [17] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
  [18] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
  [19] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
  [20] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
};

/*

Layer 1 - numbers, symbols, and f keys
Layer 2 - arrows and media keys
Layer 3 - ctrl+alt+shift layer

*/
