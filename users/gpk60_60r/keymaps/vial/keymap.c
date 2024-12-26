/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    KC_ESC,    KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,     KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSLS, KC_GRV, \
    KC_TAB,    KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,     KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_DEL,  \
    KC_LCTL,   KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,     KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,      \
    KC_LSFT,   KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,  MO(1), \
               KC_LALT, KC_LGUI,                    KC_SPC,                            KC_RGUI, KC_RALT
  ),

 [1] = LAYOUT(
    KC_PWR,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL, \
    KC_CAPS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_PSCR, KC_SCRL, KC_PAUS, KC_UP,   KC_TRNS, KC_BSPC,   \
    KC_TRNS,  KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, KC_TRNS, KC_PAST, KC_PSLS,  KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_TRNS, \
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PPLS, KC_PMNS,  KC_END,  KC_PGDN, KC_DOWN, MO(3),   KC_TRNS, \
              KC_TRNS, KC_TRNS,                            KC_TRNS,                             KC_TRNS, KC_TRNS
  ),

 [2] = LAYOUT(
    _______,  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, \
    _______,  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,  \
    _______,  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, \
    _______,  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, \
              _______, _______,                            _______,                             _______, _______
  ),

 [3] = LAYOUT(
    RGB_VAI,  RGB_SAI, RGB_HUI, RGB_SPI, RGB_MOD, RGB_TOG, _______, _______,  _______, _______, _______, _______, _______, _______, _______, \
    RGB_VAD,  RGB_SAD, RGB_HUD, RGB_SPD, RGB_RMOD, _______, _______, _______,  _______, _______, _______, _______, _______, _______,  \
    _______,  _______,   _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, \
    _______,  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, \
              _______, _______,                            QK_BOOT,                               _______, _______
  )

};

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom(128, 255, rgblight_get_val());
  rgblight_mode_noeeprom(1);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
      case 1: //PURPLE
          rgblight_sethsv_noeeprom(191, 255, rgblight_get_val());
          break;
      case 2: //GREEN
          rgblight_sethsv_noeeprom(85, 255, rgblight_get_val());
          break;
      case 3: //YELLOW
          rgblight_sethsv_noeeprom(43, 255, rgblight_get_val());
          break;   
      default: //CYAN
          rgblight_sethsv_noeeprom(128, 255, rgblight_get_val());
        break;
    } 
  return state;
}
