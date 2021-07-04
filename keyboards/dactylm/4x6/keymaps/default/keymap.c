#include QMK_KEYBOARD_H


// #define _BASE 0
// #define _RAISE 1
// #define _LOWER 2
// #define _ADJUST 3

// // Fillers to make layering more clear

// #define ____ KC_TRNS

// #define SFT_ESC  SFT_T(KC_ESC)
// #define CTL_BSPC CTL_T(KC_BSPC)
// #define ALT_SPC  ALT_T(KC_SPC)
// #define SFT_ENT  SFT_T(KC_ENT)

// #define KC_ML KC_MS_LEFT
// #define KC_MR KC_MS_RIGHT
// #define KC_MU KC_MS_UP
// #define KC_MD KC_MS_DOWN
// #define KC_MB1 KC_MS_BTN1
// #define KC_MB2 KC_MS_BTN1

// #define RAISE MO(_RAISE)
// #define LOWER MO(_LOWER)
// #define ADJUST MO(_ADJUST)

#define KC_NP KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

#define KC_RST RESET
#define KC_TOG RGB_TOG
#define KC_MOD RGB_MOD
#define KC_HUI RGB_HUI
#define KC_SAI RGB_SAI
#define KC_VAI RGB_VAI


enum layers { BASE, MBO, MEDR, NAVR, MOUR, NSSL, NSL, FUNL };


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

  [BASE] = LAYOUT(
     KC_NP, KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,                             KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,   KC_NP,
     KC_NP, LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,                             KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   KC_NP,
     KC_NP, KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,                             KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,   KC_NP,
                                           LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),                 LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL)
  ),

  [NAVR] = LAYOUT(
  KC_NP,  KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,                      KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,KC_NP,  
  KC_NP,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,                      KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,KC_NP, 
  KC_NP,  KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,                      KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,KC_NP, 
                           KC_NA,   KC_NA,   KC_NA,                       KC_ENT,  KC_BSPC, KC_DEL  
  ),

  [MOUR] = LAYOUT(
   KC_NP, KC_RST,  KC_NA,   KC_NA,   KC_NA, KC_NA,          KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,KC_NP, 
   KC_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,        KC_NU,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,KC_NP, 
   KC_NP, KC_NA,   KC_ALGR, KC_NA,   KC_NA, KC_NA,          KC_NU,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,KC_NP, 
                    KC_NA,   KC_NA,   KC_NA,          KC_BTN1, KC_BTN3, KC_BTN2
  ),
  [MBO] = LAYOUT(
   KC_NP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_NP, 
   KC_NP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_NP, 
   KC_NP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_NP, 
                      KC_TRNS, KC_TRNS, KC_TRNS,            KC_BTN1, KC_BTN3, KC_BTN2
  ),
  [MEDR] = LAYOUT(
   KC_NP, KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,              KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,KC_NP, 
   KC_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,              KC_NU,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,KC_NP, 
   KC_NP, KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,              KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,KC_NP, 
                      KC_NA,   KC_NA,   KC_NA,              KC_MSTP, KC_MPLY, KC_MUTE
  ),
  [FUNL] = LAYOUT(
   KC_NP, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,            KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,KC_NP, 
   KC_NP, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK,            KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,KC_NP, 
   KC_NP, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,            KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,KC_NP, 
                        KC_APP,  KC_SPC,  KC_TAB,           KC_NA,   KC_NA,   KC_NA
  ),
  [NSL] = LAYOUT(
   KC_NP, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,            KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,KC_NP, 
   KC_NP, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,             KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,KC_NP, 
   KC_NP, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,            KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,KC_NP, 
                      KC_DOT,  KC_0,    KC_MINS,            KC_NA,   KC_NA,   KC_NA
  ),
  [NSSL] = LAYOUT(
   KC_NP, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,            KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,KC_NP, 
   KC_NP, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,            KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,KC_NP, 
   KC_NP, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,            KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,KC_NP, 
                      KC_GT,   KC_RPRN, KC_UNDS,            KC_NA,   KC_NA,   KC_NA
  )




};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
