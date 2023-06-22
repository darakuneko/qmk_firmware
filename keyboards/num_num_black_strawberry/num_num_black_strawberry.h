 #pragma once

#include "quantum.h"

extern void (*pointing_device_set_button)(uint8_t btn);
extern void (*pointing_device_clear_button)(uint8_t btn);

#define LAYOUT( \
    ELCCW, k01, k02, k03, k04, k05,  \
    k18, k06, k07, k08, k09, k10,  \
    ELCW, k11, k12, k13, k14, k15,  \
    k16, k17, \
    f01, f02,  \
    f03, f04, f05, f06,  \
    f07, f08, f09  \
     \
) \
{ \
    { k01, k02, k03, k04, }, \
    { k05, k06, k07, k08, }, \
    { k09, k10, k11, k12, }, \
    { k13, k14, k15, k16, },\
    { k17, k18, ELCCW, ELCW }, \
    { f01, f02, KC_NO, KC_NO, }, \
    { f03, f04, f05, f06, }, \
    { f07, f08, f09, KC_NO } \
}
