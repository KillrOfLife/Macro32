#include QMK_KEYBOARD_H
#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_F13,                   KC_F14,
        KC_A, KC_F16 , KC_F17 , KC_F18,
        KC_F19, KC_F20 , KC_F21 , KC_F22,
        KC_F23, KC_F24 , KC_LEFT , KC_RIGHT
    ),
    [1] = LAYOUT(
		KC_F13,                   KC_F14,
        KC_S, KC_F16 , KC_F17 , KC_F18,
        KC_F19, KC_F20 , KC_F21 , KC_F22,
        KC_F23, KC_F24 , KC_LEFT , KC_RIGHT
    ),
    [2] = LAYOUT(
		KC_F13,                   KC_F14,
        KC_D, KC_F16 , KC_F17 , KC_F18,
        KC_F19, KC_F20 , KC_F21 , KC_F22,
        KC_F23, KC_F24 , KC_LEFT , KC_RIGHT
    ),
    [3] = LAYOUT(
		KC_F13,                   KC_F14,
        KC_F, KC_F16 , KC_F17 , KC_F18,
        KC_F19, KC_F20 , KC_F21 , KC_F22,
        KC_F23, KC_F24 , KC_LEFT , KC_RIGHT
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(TO(3), TO(1)),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(TO(0), TO(2)),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [2] = { ENCODER_CCW_CW(TO(1), TO(3)),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [3] = { ENCODER_CCW_CW(TO(2), TO(0)),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    // [1] = { ENCODER_CCW_CW(UG_HUED, UG_HUEU),  ENCODER_CCW_CW(UG_SATD, UG_SATU)  },
    // [2] = { ENCODER_CCW_CW(UG_VALD, UG_VALU),  ENCODER_CCW_CW(UG_SPDD, UG_SPDU)  },
    // [3] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT),  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif