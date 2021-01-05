#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x002A
#define DEVICE_VER      0x0001
#define MANUFACTURER    charafau
#define PRODUCT         charaisu

#define MATRIX_ROWS 5
#define MATRIX_COLS 14


#define MATRIX_COL_PINS \
    { B10, B1, B0, B15, A8, A10, B3, B4, B5, B6, B7, B8, B9, A0 }
#define MATRIX_ROW_PINS \
    { A6, A5, A4, A3, A2  }

#define UNUSED_PINS


#define DIODE_DIRECTION COL2ROW
