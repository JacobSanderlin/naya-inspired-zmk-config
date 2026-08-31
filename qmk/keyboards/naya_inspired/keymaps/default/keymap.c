#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _SYS,
    _NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0: ported 1:1 from custom_split.keymap's default_layer.
    [_BASE] = LAYOUT(
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_ENT,       KC_EQL,  KC_MINS, KC_0,    KC_9,    KC_8,    KC_7,    KC_6,    KC_BSPC,
        KC_NO,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                  KC_RBRC, KC_LBRC, KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,
        KC_NO,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                  KC_BSLS, KC_QUOT, KC_SCLN, KC_L,    KC_K,    KC_J,    KC_H,
        KC_NO,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                  KC_D,    KC_RSFT, KC_SLSH, KC_DOT,  KC_COMM, KC_M,    KC_N,
        MO(1),   KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_NO,   KC_BSPC, MO(2),        MO(1),   KC_RCTL, KC_RGUI, KC_RALT, KC_SPC,  KC_NO,   KC_ENT,  MO(2)
    ),

    // Layer 1: hardware management. BT_SEL/BT_CLR from ZMK have no QMK equivalent (wired only) -> KC_NO.
    [_SYS] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, UG_TOGG, UG_NEXT, UG_VALU, UG_VALD, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // Layer 2: ported 1:1 from custom_split.keymap's num_layer.
    [_NUM] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,               KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
};
