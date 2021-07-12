/* Copyright 2019 e3w2q
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

// Defines the keycodes used by our macros in process_record_user

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT( /* Base */
    KC_Q,          KC_TAB,        KC_ESC,        KC_W,          KC_E,          KC_R,          KC_T,          KC_Y,       KC_NO,         KC_NO,         KC_NO,
    KC_A,          KC_LGUI,       KC_NO,         KC_S,          KC_D,          KC_F,          KC_G,          KC_SPC,        KC_NO,         KC_NO,         KC_NO,
    KC_Z,          KC_LSFT,         KC_LCTL,       KC_X,          KC_C,          KC_V,          KC_B,          KC_LANG2,       KC_LGUI,       KC_NO,         KC_NO,

	KC_NO,         KC_MINS,       KC_EQL,          KC_U,          KC_I,          KC_O,          KC_P,          KC_LBRC,       KC_RBRC,       KC_BSPC,       KC_NO,
	KC_NO,         KC_SPC,        KC_H,          KC_J,          KC_K,          KC_L,          KC_SCLN,       KC_QUOTE,    KC_NO,         KC_ENTER,      KC_NO,
	KC_RGUI,      KC_LANG1,       KC_N,          KC_M,          KC_COMM,       KC_DOT,        KC_SLSH,       KC_BSLASH,      KC_RSFT   ,       KC_RALT, KC_F7
  ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
