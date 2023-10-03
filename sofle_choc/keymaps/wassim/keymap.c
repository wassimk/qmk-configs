/* Copyright 2023 Brian Low
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

#define _LAYER0 0
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | LGUI | LCMD | LALT | /Enter  /       \Space \  | RALT | RCMD | RGUI | RCTL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

    // [_BASE] = LAYOUT(
    //     KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_GRV,
    //     KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_BSPC,
    //     KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //     KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,   KC_MPLY,KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //                       KC_LCTL, KC_LGUI, KC_LCMD, KC_LALT, KC_ENT,    KC_SPC, KC_RALT,  KC_RCMD,  KC_RGUI, KC_RCTL
    // )

     [_LAYER0] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
                        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL,
                        MT(MOD_LCTL,KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MPLY, KC_MUTE, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                        KC_LCTL, KC_LALT, KC_LGUI, MO(2), KC_ENT, KC_SPC, MO(3), MT(MOD_LCTL | MOD_LSFT | MOD_LALT | MOD_LGUI,KC_RGUI), MT(MOD_LCTL | MOD_LSFT | MOD_LALT,KC_RALT), KC_NO),

    [_LAYER2] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
                       KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_F12,
                       KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
                       KC_TRNS, KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_TRNS, RGB_TOG, KC_LBRC, KC_RBRC, KC_COLN, KC_UNDS, KC_BSLS, KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS, KC_TRNS, KC_TRNS),

    [_LAYER3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                       KC_TRNS, KC_INS, KC_PSCR, KC_APP, KC_NO, KC_PGUP, KC_NO, LALT(KC_B), KC_NO, LALT(KC_F), G(KC_D), KC_BSPC,
                       KC_TRNS, KC_LALT, KC_LCTL, KC_LSFT, KC_CAPS, KC_PGDN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_DEL, KC_NO,
                       KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, RGB_MOD, KC_TRNS, KC_NO, C(KC_A), KC_NO, C(KC_E), KC_NO, KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_LAYER4] = LAYOUT(RGB_TOG, RGB_MOD, RGB_RMOD, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_TW, KC_NO, KC_NO, KC_NO, KC_NO,
                       RGB_VAD, QK_BOOT, DF(0), DF(1), CG_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                       RGB_VAI, KC_NO, CG_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, KC_NO,
                       RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_LAYER0] =   { ENCODER_CCW_CW(KC_MPRV, KC_MNXT),   ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_LAYER2] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),   ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [_LAYER3] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),   ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [_LAYER4] =   { ENCODER_CCW_CW(KC_NO, KC_NO),  ENCODER_CCW_CW(KC_NO, KC_NO) },
};
#endif
