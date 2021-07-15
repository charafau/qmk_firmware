#include QMK_KEYBOARD_H


#define _BASE 0
#define _RAISE 1
#define _LOWER 2
#define _ADJUST 3

// Fillers to make layering more clear

#define ____ KC_TRNS

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define ADJUST MO(_ADJUST)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base (qwerty)
 * +-----------------------------------------+                             +-----------------------------------------+
 * | ESC  |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |      |
 * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
 * | TAB  |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |      |
 * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
 * | SHFT |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  |      |
 * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
 *               |  [   |   ]  |                                                         |      |      |
 *               +-------------+-------------+                             +-------------+-------------+
 *                             |      |      |                             |      |      |
 *                             |------+------|                             |------+------|
 *                             |      |      |                             |      |      |
 *                             +-------------+                             +-------------+
 *                                           +-------------+ +-------------+
 *                                           |      |      | |      |      |
 *                                           |------+------| |------+------|
 *                                           |      |      | |      |      |
 *                                           +-------------+ +-------------+
 */


[_BASE] = LAYOUT(
   KC_ESC, KC_Q, KC_W,  KC_E, KC_R, KC_T,                KC_Y, KC_U,KC_I, KC_O, KC_P, KC_BSPC,
   KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
   KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,                KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
                  KC_LGUI, RAISE, KC_SPC,                KC_ENT, LOWER, KC_LALT),

[_LOWER] = LAYOUT(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                   KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
    KC_LSFT, KC_NO, KC_NO, KC_SCLN, KC_LPRN, KC_RPRN,       KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
    KC_LCTL, KC_NO, KC_NO, KC_QUOT, KC_LBRC, KC_RBRC,       KC_LT, KC_GT, KC_NO, KC_NO, KC_NO, KC_PSCR,
                             KC_LGUI, ADJUST, KC_SPC,       KC_ENT, KC_TRNS, KC_LALT
),

[_RAISE] = LAYOUT(
    KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    KC_LSFT, KC_INS, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR,    KC_MINS, KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV,
    KC_LCTL, KC_DEL, KC_LT, KC_GT, KC_LBRC, KC_RBRC,     KC_UNDS, KC_PLUS, KC_LT, KC_GT, KC_BSLS, KC_TILD,
                                KC_LGUI, KC_TRNS, KC_SPC,     KC_ENT, ADJUST,KC_LALT
),

[_ADJUST] = LAYOUT(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,               KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    KC_VOLD, KC_VOLU, KC_INS, KC_HOME, KC_PGUP, KC_NO,           KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_MUTE, KC_MPLY,
    KC_BRID, KC_BRIU, KC_DEL, KC_END, KC_PGDOWN, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                        KC_LGUI, KC_TRNS, KC_SPC,           KC_ENT, KC_TRNS, KC_LALT
)
};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
