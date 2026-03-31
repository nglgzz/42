/* Copyright 2026 nglgzz
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// MOD_KC
#define CTL_ESC MT(MOD_LCTL, KC_ESCAPE)
#define CTL_ENT MT(MOD_LCTL, KC_ENTER)
#define ALT_Z   MT(MOD_LALT, KC_Z)
#define ALT_SLS MT(MOD_LALT, KC_SLASH)
#define SU_QUOT MT(MOD_LGUI, KC_QUOTE)
#define SU_BSLS MT(MOD_LGUI, KC_BSLS)
#define SFT_DEL MT(MOD_LSFT, KC_DELETE)

// LAYER_KC
#define L5_J    LT(5, KC_J)
#define L4_F    LT(4, KC_F)
#define L3_SPC  LT(3, KC_SPC)
#define L2_SPC  LT(2, KC_SPC)
#define L1_LBRC LT(1, KC_LBRC)
#define L1_RBRC LT(1, KC_RBRC)

// One Shot Keys
#define OS_RALT OSM(MOD_RALT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Default Layer
  LAYOUT(
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,       KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    CTL_ESC, KC_A   , KC_S   , KC_D   , L4_F   , KC_G   ,       KC_H   , L5_J   , KC_K   , KC_L   , KC_SCLN, CTL_ENT,
    KC_LSFT, ALT_Z  , KC_X   , KC_C   , KC_V   , KC_B   ,       KC_N   , KC_M   , KC_COMM, KC_DOT , ALT_SLS, SFT_DEL,
                               L1_LBRC, L3_SPC , SU_QUOT,       SU_BSLS, L2_SPC , L1_RBRC
  ),

  // Symbols Layer
  LAYOUT(
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,       KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL ,
    KC_INS , S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),       S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_MINS,
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,       KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
                               KC_CAPS, OS_RALT, _______,       _______, _______, _______
  ),

  // Navigation Layer
  LAYOUT(
    _______, _______, _______, KC_PGUP, _______, _______,       KC_BRIU, _______, KC_UP  , _______, _______, _______,
    _______, _______, KC_HOME, KC_PGDN, KC_END , _______,       _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
    _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,       KC_BRID, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______,
                               _______, _______, _______,       _______, _______, _______
  ),

  // Mouse Layer
  LAYOUT(
    QK_BOOT, _______, _______, MS_WHLU, _______, _______,       _______, MS_BTN1, MS_UP  , MS_BTN2, _______, _______,
    _______, _______, _______, MS_WHLD, _______, KC_PSCR,       _______, MS_LEFT, MS_DOWN, MS_RGHT, _______, _______,
    _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,       _______, _______, _______, _______, _______, _______,
                               _______, _______, _______,       _______, _______, _______
  ),

  // F Layer
  LAYOUT(
    _______, _______, _______, _______, _______, _______,       _______, _______   , _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,       KC_BSPC, C(KC_BSPC), C(KC_DEL), KC_DEL, _______, _______,
    _______, _______, _______, _______, _______, _______,       KC_ENTER, _______   , _______, _______, _______, _______,
                               _______, _______, _______,       _______, _______   , _______
  ),

  // J Layer
  LAYOUT(
    _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_DEL,       _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_ENTER,      _______, _______, _______, _______, _______, _______,
                               _______, _______, _______,       _______, _______, _______
  ),
};