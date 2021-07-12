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
enum custom_keycodes {
  SEND_A1 = SAFE_RANGE,
            SEND_B1,  SEND_C1,  SEND_D1,  SEND_E1,  SEND_F1,  SEND_G1,  SEND_H1,  SEND_I1,  SEND_J1, SEND_K1, 
  SEND_A2,  SEND_B2,  SEND_C2,  SEND_D2,  SEND_E2,  SEND_F2,  SEND_G2,  SEND_H2,  SEND_I2,  SEND_J2, SEND_K2,
  SEND_A3,  SEND_B3,  SEND_C3,  SEND_D3,  SEND_E3,  SEND_F3,  SEND_G3,  SEND_H3,  SEND_I3,  SEND_J3, SEND_K3,

  SEND_SA1, SEND_SB1, SEND_SC1, SEND_SD1, SEND_SE1, SEND_SF1, SEND_SG1, SEND_SH1, SEND_SI1, SEND_SJ1, SEND_SK1,
  SEND_SA2, SEND_SB2, SEND_SC2, SEND_SD2, SEND_SE2, SEND_SF2, SEND_SG2, SEND_SH2, SEND_SI2, SEND_SJ2, SEND_SK2,
  SEND_SA3, SEND_SB3, SEND_SC3, SEND_SD3, SEND_SE3, SEND_SF3, SEND_SG3, SEND_SH3, SEND_SI3, SEND_SJ3, SEND_SK3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT( /* Base */ 
    SEND_A1,  SEND_B1,  SEND_C1,  SEND_D1,  SEND_E1,  SEND_F1,  SEND_G1,  SEND_H1,  SEND_I1,  SEND_J1, SEND_K1, 
    SEND_A2,  SEND_B2,  SEND_C2,  SEND_D2,  SEND_E2,  SEND_F2,  SEND_G2,  SEND_H2,  SEND_I2,  SEND_J2, SEND_K2,
    SEND_A3,  SEND_B3,  SEND_C3,  SEND_D3,  SEND_E3,  SEND_F3,  SEND_G3,  SEND_H3,  SEND_I3,  SEND_J3, SEND_K3,

    SEND_SA1, SEND_SB1, SEND_SC1, SEND_SD1, SEND_SE1, SEND_SF1, SEND_SG1, SEND_SH1, SEND_SI1, SEND_SJ1, SEND_SK1,
    SEND_SA2, SEND_SB2, SEND_SC2, SEND_SD2, SEND_SE2, SEND_SF2, SEND_SG2, SEND_SH2, SEND_SI2, SEND_SJ2, SEND_SK2,
    SEND_SA3, SEND_SB3, SEND_SC3, SEND_SD3, SEND_SE3, SEND_SF3, SEND_SG3, SEND_SH3, SEND_SI3, SEND_SJ3, SEND_SK3
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SEND_A1: if (record->event.pressed) SEND_STRING("A1"); break;
    case SEND_B1: if (record->event.pressed) SEND_STRING("B1"); break;
    case SEND_C1: if (record->event.pressed) SEND_STRING("C1"); break;
    case SEND_D1: if (record->event.pressed) SEND_STRING("D1"); break;
    case SEND_E1: if (record->event.pressed) SEND_STRING("E1"); break;
    case SEND_F1: if (record->event.pressed) SEND_STRING("F1"); break;
    case SEND_G1: if (record->event.pressed) SEND_STRING("G1"); break;
    case SEND_H1: if (record->event.pressed) SEND_STRING("H1"); break;
    case SEND_I1: if (record->event.pressed) SEND_STRING("I1"); break;
    case SEND_J1: if (record->event.pressed) SEND_STRING("J1"); break;
	case SEND_K1: if (record->event.pressed) SEND_STRING("K1"); break;
	
    case SEND_A2: if (record->event.pressed) SEND_STRING("A2"); break;
    case SEND_B2: if (record->event.pressed) SEND_STRING("B2"); break;
    case SEND_C2: if (record->event.pressed) SEND_STRING("C2"); break;
    case SEND_D2: if (record->event.pressed) SEND_STRING("D2"); break;
    case SEND_E2: if (record->event.pressed) SEND_STRING("E2"); break;
    case SEND_F2: if (record->event.pressed) SEND_STRING("F2"); break;
    case SEND_G2: if (record->event.pressed) SEND_STRING("G2"); break;
    case SEND_H2: if (record->event.pressed) SEND_STRING("H2"); break;
    case SEND_I2: if (record->event.pressed) SEND_STRING("I2"); break;
    case SEND_J2: if (record->event.pressed) SEND_STRING("J2"); break;
	case SEND_K2: if (record->event.pressed) SEND_STRING("K2"); break;
	
    case SEND_A3: if (record->event.pressed) SEND_STRING("A3"); break;
    case SEND_B3: if (record->event.pressed) SEND_STRING("B3"); break;
    case SEND_C3: if (record->event.pressed) SEND_STRING("C3"); break;
    case SEND_D3: if (record->event.pressed) SEND_STRING("D3"); break;
    case SEND_E3: if (record->event.pressed) SEND_STRING("E3"); break;
    case SEND_F3: if (record->event.pressed) SEND_STRING("F3"); break;
    case SEND_G3: if (record->event.pressed) SEND_STRING("G3"); break;
    case SEND_H3: if (record->event.pressed) SEND_STRING("H3"); break;
    case SEND_I3: if (record->event.pressed) SEND_STRING("I3"); break;
    case SEND_J3: if (record->event.pressed) SEND_STRING("J3"); break;
	case SEND_K3: if (record->event.pressed) SEND_STRING("K3"); break;
	
    case SEND_SA1: if (record->event.pressed) SEND_STRING("SA1"); break;
    case SEND_SB1: if (record->event.pressed) SEND_STRING("SB1"); break;
    case SEND_SC1: if (record->event.pressed) SEND_STRING("SC1"); break;
    case SEND_SD1: if (record->event.pressed) SEND_STRING("SD1"); break;
    case SEND_SE1: if (record->event.pressed) SEND_STRING("SE1"); break;
    case SEND_SF1: if (record->event.pressed) SEND_STRING("SF1"); break;
    case SEND_SG1: if (record->event.pressed) SEND_STRING("SG1"); break;
    case SEND_SH1: if (record->event.pressed) SEND_STRING("SH1"); break;
    case SEND_SI1: if (record->event.pressed) SEND_STRING("SI1"); break;
    case SEND_SJ1: if (record->event.pressed) SEND_STRING("SJ1"); break;
	case SEND_SK1: if (record->event.pressed) SEND_STRING("SK1"); break;
	
    case SEND_SA2: if (record->event.pressed) SEND_STRING("SA2"); break;
    case SEND_SB2: if (record->event.pressed) SEND_STRING("SB2"); break;
    case SEND_SC2: if (record->event.pressed) SEND_STRING("SC2"); break;
    case SEND_SD2: if (record->event.pressed) SEND_STRING("SD2"); break;
    case SEND_SE2: if (record->event.pressed) SEND_STRING("SE2"); break;
    case SEND_SF2: if (record->event.pressed) SEND_STRING("SF2"); break;
    case SEND_SG2: if (record->event.pressed) SEND_STRING("SG2"); break;
    case SEND_SH2: if (record->event.pressed) SEND_STRING("SH2"); break;
    case SEND_SI2: if (record->event.pressed) SEND_STRING("SI2"); break;
    case SEND_SJ2: if (record->event.pressed) SEND_STRING("SJ2"); break;
	case SEND_SK2: if (record->event.pressed) SEND_STRING("SK2"); break;
	
    case SEND_SA3: if (record->event.pressed) SEND_STRING("SA3"); break;
    case SEND_SB3: if (record->event.pressed) SEND_STRING("SB3"); break;
    case SEND_SC3: if (record->event.pressed) SEND_STRING("SC3"); break;
    case SEND_SD3: if (record->event.pressed) SEND_STRING("SD3"); break;
    case SEND_SE3: if (record->event.pressed) SEND_STRING("SE3"); break;
    case SEND_SF3: if (record->event.pressed) SEND_STRING("SF3"); break;
    case SEND_SG3: if (record->event.pressed) SEND_STRING("SG3"); break;
    case SEND_SH3: if (record->event.pressed) SEND_STRING("SH3"); break;
    case SEND_SI3: if (record->event.pressed) SEND_STRING("SI3"); break;
    case SEND_SJ3: if (record->event.pressed) SEND_STRING("SJ3"); break;
	case SEND_SK3: if (record->event.pressed) SEND_STRING("SK3"); break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
