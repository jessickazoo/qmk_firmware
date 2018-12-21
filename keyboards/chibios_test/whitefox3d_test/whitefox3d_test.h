#ifndef WHITEFOX3D_TEST_H
#define WHITEFOX3D_TEST_H
/*#include "chibios_test.h"
*/

#include "quantum.h"

/*
#define LAYOUT(k00) {{ k00 }}
*/

/* Keymap for truefox layout */
#define LAYOUT( \
    K00, K10, K20, K30, K40, K50, K60, K70, K80, K01, K11, K21, K31, K41, K51, K61, \
    K71, K81, K02, K12, K22, K32, K42, K52, K62, K72, K82, K03, K13, K23,      K33, \
    K43, K53, K63, K73, K83, K04, K14, K24, K34, K44, K54, K64,      K84,      K05, \
    K15,      K35, K45, K55, K65, K75, K85, K06, K16, K26, K36, K46,      K56, K66, \
    K76, K86, K07,                K17,                K27, K37,      K57, K67, K77  \
) { \
    { K00, K01, K02, K03, K04,   K05,   K06, K07   }, \
    { K10, K11, K12, K13, K14,   K15,   K16, K17   }, \
    { K20, K21, K22, K23, K24,   KC_NO, K26, K27   }, \
    { K30, K31, K32, K33, K34,   K35,   K36, K37   }, \
    { K40, K41, K42, K43, K44,   K45,   K46, KC_NO }, \
    { K50, K51, K52, K53, K54,   K55,   K56, K57   }, \
    { K60, K61, K62, K63, K64,   K65,   K66, K67   }, \
    { K70, K71, K72, K73, KC_NO, K75,   K76, K77   }, \
    { K80, K81, K82, K83, K84,   K85,   K86, KC_NO }  \
}

#endif
