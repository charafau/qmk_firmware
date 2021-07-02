#include "helix.h"
#include "keymap_xrows.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_EDVORAKJP_BASE] = LAYOUT_wrapper(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV,            __EDVORAKJP_BASE_L1__           ,                                __EDVORAKJP_BASE_R1__            , KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_EQL,            __EDVORAKJP_BASE_L2__           ,                                __EDVORAKJP_BASE_R2__            , KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC,            __EDVORAKJP_BASE_L3__           ,                                __EDVORAKJP_BASE_R3__            , KC_SLSH,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
             __EDVORAKJP_PAGE__         ,  LA_TAB,  LS_SPC,LOWER_TD,   RAISE_TD, RC_BSPC,  RG_ENT,        __EDVORAKJP_CURSOR__
  //`--------------------------------------------------------------'  `--------------------------------------------------------------'
  ),

  [L_EDVORAKJP_LOWER] = LAYOUT_wrapper(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, __EDVORAKJP_BRACKET_L__  , XXXXXXX,                      XXXXXXX,  __EDVORAKJP_BRACKET_R__ , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                       __EDVORAKJP_FUNCTION_L__           ,                                __EDVORAKJP_FUNCTION_R__                  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_PSCR, XXXXXXX,      __EDVORAKJP_PAGE__           ,                                __EDVORAKJP_CURSOR__    , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                __KC_TRNS_x4__          , KC_TRNS, KC_TRNS, XXXXXXX,     KC_MAC,  RC_DEL, KC_TRNS,          __KC_TRNS_x4__
  //`--------------------------------------------------------------'  `--------------------------------------------------------------'
  ),

  [L_EDVORAKJP_RAISE] = LAYOUT_wrapper(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,  __EDVORAKJP_SYMBOL_L__           ,                                __EDVORAKJP_SYMBOL_R__  , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,           __EDVORAKJP_NUMBER_L__           ,                                __EDVORAKJP_NUMBER_R__           , XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_PSCR, XXXXXXX,      __EDVORAKJP_PAGE__           ,                                __EDVORAKJP_CURSOR__    , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                __KC_TRNS_x4__          , KC_TRNS, KC_TRNS,  KC_WIN,    XXXXXXX, KC_TRNS, KC_TRNS,          __KC_TRNS_x4__
  //`--------------------------------------------------------------'  `--------------------------------------------------------------'
  )
};
// clang-format on
