#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
  K00, K01, K02, K03, K04, K05,     K06, K07, K08, K09, K0A, K0B, \
  K10, K11, K12, K13, K14, K15,     K16, K17, K18, K19, K1A, K1B, \
  K20, K21, K22, K23, K24, K25,     K26, K27, K28, K29, K2A, K2B, \
                  K33, K34, K35,     K36, K37, K38 \
) { \
  { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B }, \
  { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B }, \
  { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B }, \
  { KC_NO, KC_NO, KC_NO, K33, K34, K35, K36, K37, K38, KC_NO, KC_NO, KC_NO } \
}

// Left side custom keys
#define CTRL_ESC MT(MOD_LCTL, KC_ESCAPE)
#define ALT_Z MT(MOD_LALT, KC_Z)
#define GUI_QUOTE MT(MOD_LGUI, KC_QUOTE)
#define SPC_L2 LT(2, KC_SPC)
#define LBRC_L1 LT(1, KC_LBRC)

// Right side custom keys
#define CTRL_ENTER MT(MOD_LCTL, KC_ENTER)
#define ALT_SLASH MT(MOD_LALT, KC_SLASH)
#define SHIFT_DELETE MT(MOD_LSFT, KC_DELETE)
#define GUI_BSLS MT(MOD_LGUI, KC_BSLS)
#define SPC_L3 LT(3, KC_SPC)
#define RBRC_L1 LT(1, KC_RBRC)

#define TAPPING_TERM 100
