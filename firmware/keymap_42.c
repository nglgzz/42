#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(\
      TAB, Q, W, E, R, T,                Y, U, I, O, P, BSPC,\
      FN0, A, S, D, F, G,                H, J, K, L, SCLN, FN1, \
      LSFT, FN3, X, C, V, B,              N, M, COMM, DOT, FN4, FN5, \
                      FN6, FN7,          FN8, FN9, \
                               FN10,  FN11),
    KEYMAP(\
      GRAVE, 1, 2, 3, 4, 5,                          6, 7, 8, 9, 0, EQUAL,\
      INS, FN21, FN22, FN23, FN24, FN25,           FN26, FN27, FN28, FN29, FN30, MINUS, \
      F1, F2, F3, F4, F5, F6,                       F7, F8, F9, F10, F11, F12, \
                              TRNS, TRNS,           TRNS, TRNS, \
                                         TRNS, TRNS),
    KEYMAP(\
      TRNS, TRNS, TRNS, PGUP, TRNS, TRNS,           TRNS, TRNS, UP, TRNS, TRNS, TRNS,\
      TRNS, TRNS, HOME, PGDOWN, END, TRNS,          FN12, LEFT, DOWN, RIGHT, TRNS, TRNS, \
      TRNS, TRNS, MSTP, MPLY, MPRV, MNXT,           _VOLDOWN, _VOLUP, _MUTE, TRNS, TRNS, TRNS, \
                              TRNS, TRNS,           TRNS, TRNS, \
                                         TRNS, TRNS),
    KEYMAP(\
      TRNS, TRNS, WH_U, TRNS, TRNS, TRNS,           TRNS, BTN1, MS_U, BTN2, TRNS, TRNS,\
      TRNS, WH_L, WH_D, WH_R, TRNS, TRNS,           TRNS, MS_L, MS_D, MS_R, TRNS, TRNS, \
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
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

  [6] = ACTION_LAYER_TAP_KEY(1, KC_LBRACKET),
  [7] = ACTION_LAYER_TAP_KEY(3, KC_SPACE),
  [8] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),
  [9] = ACTION_LAYER_TAP_KEY(1, KC_RBRACKET),
  [10] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_QUOTE),
  [11] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_BSLASH),

  // Mod + A (help)
  [12] = ACTION_MODS_KEY(MOD_LGUI, KC_A),
  // Ctrl + Backspace (hello Satan)
  [13] = ACTION_MODS_KEY(MOD_LCTL, KC_BSPACE),

  [21] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
  [22] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
  [23] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
  [24] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
  [25] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
  [26] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
  [27] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
  [28] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
  [29] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
  [30] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
};

/*

Layer 1 - numbers, symbols, and f keys
Layer 2 - arrows and media keys
Layer 3 - ctrl+alt+shift layer

*/
