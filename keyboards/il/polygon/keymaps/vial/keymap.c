// Copyright 2023 PiKeeb (@PiKeeb)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
       QK_GESC,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_GRV, KC_BSPC,   BL_TOGG,
         KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,     KC_BSLS,    BL_STEP,
          KC_CAPS,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,   KC_SCLN, KC_QUOT,       KC_ENT,          KC_MUTE,
       KC_LSFT, KC_BSLS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT, KC_SLSH,    KC_RSFT,       KC_UP,   KC_MNXT,
        KC_LCTL,   KC_LGUI,   KC_LALT,      KC_SPC,     KC_TRNS,       KC_SPC,     KC_RALT,  KC_RGUI,      KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [1] = LAYOUT(
       QK_GESC,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_GRV, KC_BSPC,   BL_TOGG,
         KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,     KC_BSLS,    BL_STEP,
          KC_CAPS,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,   KC_SCLN, KC_QUOT,       KC_ENT,          KC_MUTE,
       KC_LSFT, KC_BSLS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT, KC_SLSH,    KC_RSFT,       KC_UP,   KC_MNXT,
        KC_LCTL,   KC_LGUI,   KC_LALT,      KC_SPC,     KC_TRNS,       KC_SPC,     KC_RALT,  KC_RGUI,      KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [2] = LAYOUT(
       QK_GESC,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_GRV, KC_BSPC,   BL_TOGG,
         KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,     KC_BSLS,    BL_STEP,
          KC_CAPS,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,   KC_SCLN, KC_QUOT,       KC_ENT,          KC_MUTE,
       KC_LSFT, KC_BSLS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT, KC_SLSH,    KC_RSFT,       KC_UP,   KC_MNXT,
        KC_LCTL,   KC_LGUI,   KC_LALT,      KC_SPC,     KC_TRNS,       KC_SPC,     KC_RALT,  KC_RGUI,      KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [3] = LAYOUT(
       QK_GESC,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_GRV, KC_BSPC,   BL_TOGG,
         KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,     KC_BSLS,    BL_STEP,
          KC_CAPS,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,   KC_SCLN, KC_QUOT,       KC_ENT,          KC_MUTE,
       KC_LSFT, KC_BSLS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT, KC_SLSH,    KC_RSFT,       KC_UP,   KC_MNXT,
        KC_LCTL,   KC_LGUI,   KC_LALT,      KC_SPC,     KC_TRNS,       KC_SPC,     KC_RALT,  KC_RGUI,      KC_LEFT, KC_DOWN, KC_RIGHT
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [1] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [2] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [3] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) }
};
#endif