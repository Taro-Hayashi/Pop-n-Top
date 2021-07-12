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
  [0] = LAYOUT(
    KC_Q,          KC_TAB,        KC_ESC,        KC_W,          KC_E,          KC_R,          KC_T,          KC_Y,          KC_NO,         KC_NO,         KC_NO, 
    KC_A,          KC_LCTL,       KC_NO,         KC_S,          KC_D,          KC_F,          KC_G,          KC_SPC,        KC_NO,         KC_NO,         KC_NO,
    KC_Z,          MO(1),         KC_LALT,       KC_X,          KC_C,          KC_V,          KC_B,          KC_INT5,       KC_LCTL,       KC_NO,         KC_NO,

	KC_NO,         KC_MINS,       LSFT(KC_MINS), KC_U,          KC_I,          KC_O,          KC_P,          KC_RBRC,       KC_NUHS,       KC_BSPC,       KC_NO,
	KC_NO,         KC_SPC,        KC_H,          KC_J,          KC_K,          KC_L,          KC_SCLN,       LSFT(KC_7),    KC_NO,         KC_ENTER,      KC_NO,
	KC_RCTRL,      KC_INT4,       KC_N,          KC_M,          KC_COMM,       KC_DOT,        KC_SLSH,       KC_RO,         MO(1),         KC_RALT,       KC_F7
  ),
  [1] = LAYOUT(
	LSFT(KC_Q),    KC_TAB,        KC_ESC,        LSFT(KC_W),    LSFT(KC_E),    LSFT(KC_R),    LSFT(KC_T),    LSFT(KC_Y),    KC_NO,         KC_NO,         KC_NO, 
    LSFT(KC_A),    KC_LCTL,       KC_NO,         LSFT(KC_S),    LSFT(KC_D),    LSFT(KC_F),    LSFT(KC_G),    KC_SPC,        KC_NO,         KC_NO,         KC_NO,
    LSFT(KC_Z),    KC_LSFT,       KC_LALT,       LSFT(KC_X),    LSFT(KC_C),    LSFT(KC_V),    LSFT(KC_B),    KC_INT5,       KC_LCTL,       KC_NO,         KC_NO,

	KC_NO,         LSFT(KC_RO),   LSFT(KC_SCLN), LSFT(KC_U),    LSFT(KC_I),    LSFT(KC_O),    LSFT(KC_P),    LSFT(KC_RBRC), LSFT(KC_NUHS), KC_DELETE,       KC_NO,
	KC_NO,         KC_SPC,        LSFT(KC_H),    LSFT(KC_J),    LSFT(KC_K),    LSFT(KC_L),    KC_QUOT,       LSFT(KC_2),    KC_NO,         KC_ENT,        KC_NO,
	KC_RCTL,       KC_INT4,       LSFT(KC_N),    LSFT(KC_M),    LSFT(KC_COMM), LSFT(KC_DOT),  LSFT(KC_SLSH), LSFT(KC_INT3), KC_NO,         KC_RALT,       KC_F7
  ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
