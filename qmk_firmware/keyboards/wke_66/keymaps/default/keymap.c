// Based on https://github.com/numToStr/qmk_firmware/blob/picopad/keyboards/picopad/keymaps/default/keymap.c
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum Layers {
    BaseLyr,
    FnLyr
};

// https://docs.qmk.fm/keycodes_basic
// https://docs.qmk.fm/features/grave_esc
// https://docs.qmk.fm/quantum_keycodes
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // NOTE: 0x029D is AC_KLS, or MacOS "Globe"/"fn" key, bit it doesn't appear to work yet
    [BaseLyr] = LAYOUT(
        QK_GRAVE_ESCAPE, KC_1,    KC_2,    KC_3, KC_4,     KC_5,     KC_6,     KC_7,    KC_8,     KC_9,    KC_0,     KC_MINUS, KC_EQUAL, KC_BACKSPACE,
        KC_TAB,          KC_Q,    KC_W,    KC_E, KC_R,     KC_T,     KC_Y,     KC_U,    KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BACKSLASH,
        KC_CAPS_LOCK,    KC_A,    KC_S,    KC_D, KC_F,     KC_G,     KC_H,     KC_J,    KC_K,     KC_L,    KC_SCLN,  KC_QUOTE, KC_ENTER,
        KC_LEFT_SHIFT,   KC_Z,    KC_X,    KC_C, KC_V,     KC_B,     KC_N,     KC_M,    KC_COMMA, KC_DOT,  KC_SLASH, KC_RSFT,  KC_UP,    LT(FnLyr, KC_GRV),
        KC_LEFT_CTRL,    KC_LGUI, KC_LALT,       KC_SPACE, KC_SPACE, KC_SPACE,                    KC_RALT, KC_MENU,  KC_LEFT,  KC_DOWN,  KC_RIGHT
        // LT(FnLyr, KC_A),   KC_B/* RGB_MOD */,        KC_CAPS, /**/ _______,    KC_A,  KC_B,
        // LSFT_T(KC_1),       RSFT_T(KC_2),   KC_MPLY, /**/ KC_MUTE,    KC_UP, KC_DOWN
    ),
    [FnLyr] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DELETE,
        _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______, KC_NUM,  KC_SCROLL_LOCK,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
        _______, _______, _______,          _______, _______, _______,                   _______, QK_BOOT, KC_HOME, KC_PGDN, KC_END
        // _______,    KC_MUTE,    _______,    _______,    KC_1,   KC_2,
        // KC_VOLD,    KC_VOLU,    _______,    _______,    KC_3,   KC_4
    )
};

// // ======================= Overrides =======================

// const key_override_t up_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_UP, KC_PGUP);
// const key_override_t down_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOWN, KC_PGDN);

// // This globally defines all key overrides to be used
// const key_override_t **key_overrides = (const key_override_t *[]){
//     &up_key_override,
//     &down_key_override,
//     NULL // Null terminate the array of overrides!
// };

// // ======================= Combos =======================

// enum combos {
//     CAPS_COMBO,
//     COMBO_LENGTH
// };
// uint16_t COMBO_LEN = COMBO_LENGTH;

// const uint16_t PROGMEM caps_combo[] = {LSFT_T(KC_3), RSFT_T(KC_4), COMBO_END};

// combo_t key_combos[] = {
//     [CAPS_COMBO] = COMBO(caps_combo, KC_CAPS),
// };
