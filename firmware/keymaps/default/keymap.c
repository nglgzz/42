#include "42.h"

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  CUSTOM_KEYCODES = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT(
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,     KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    CTRL_ESC, KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K, KC_L, KC_SCLN, CTRL_ENTER,
    KC_LSFT, ALT_Z, KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_DOT, ALT_SLASH, SHIFT_DELETE,
                LBRC_L1, SPC_L3, GUI_QUOTE,   GUI_BSLS, SPC_L2, RBRC_L1
  ),
  LAYOUT(
    KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5,    KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQUAL,
    KC_INS, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),    LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), KC_MINUS,
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,    KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                               KC_CAPS, OUT_USB, OUT_BT,    KC_TRNS, KC_TRNS, KC_TRNS
  ),
  LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS,    KC_BRIU, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_HOME, KC_PGDOWN, KC_END, KC_TRNS,    KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_BRID, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
  ),
  LAYOUT(
    KC_TRNS, KC_TRNS, KC_WREF, KC_WH_U, KC_WSCH, KC_TRNS,    KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS,    KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // switch (keycode) {
  //   case QMKBEST:
  //     if (record->event.pressed) {
  //       // when keycode QMKBEST is pressed
  //       SEND_STRING("QMK is the best thing ever!");
  //     } else {
  //       // when keycode QMKBEST is released
  //     }
  //     break;
  // }
  return true;
}

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

void led_set_user(uint8_t usb_led) {}
