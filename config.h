#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
//#define TAPPING_TERM 100

// Optimize firmware size
// #define NO_ACTION_TAPPING
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT

// Kill the lights on sleep
#define RGBLIGHT_SLEEP

#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_EFFECT_TWINKLE_LIFE 100
#define RGBLIGHT_EFFECT_TWINKLE_PROBABILITY 2/150

#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

#define RGBLIGHT_LIMIT_VAL 200
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#define MOUSEKEY_MAX_SPEED 4
#define MOUSEKEY_TIME_TO_MAX 50

#define OLED_TIMEOUT 10000
#define OLED_UPDATE_INTERVAL 30
// #define OLED_FADE_OUT 
// #define OLED_FADE_OUT_INTERVAL 8

#define WPM_UNFILTERED
#define WPM_LAUNCH_CONTROL
#define SPLIT_WPM_ENABLE

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
