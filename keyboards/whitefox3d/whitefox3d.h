#ifndef WHITEFOX3D_H
#define WHITEFOX3D_H


#include "quantum.h"

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D,      K2F, \
    K30,           K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, \
    K40, K41,      K43,                K47,                K4B, K4C, K4D, K4E, K4F \
    ) { \
  {  K00,  K01,   K02,   K03,  K04,   K05,   K06,   K07,  K08,   K09,    K0A,   K0B,  K0C,  K0D,   K0E,   K0F }, \
  {  K10,  K11,   K12,   K13,  K14,   K15,   K16,   K17,  K18,   K19,    K1A,   K1B,  K1C,  KC_NO, K1E,   K1F }, \
  {  K20,  KC_NO, K22,   K23,  K24,   K25,   K26,   K27,  K28,   K29,    K2A,   K2B,  K2C,  K2D,   KC_NO, K2F }, \
  {  K30,  KC_NO, KC_NO, K33,  K34,   K35,   K36,   K37,  K38,   K39,    K3A,   K3B,  K3C,  K3D,   K3E,   K3F }, \
  {  K40,  K41,   KC_NO, K43,  KC_NO, KC_NO, KC_NO, K47,  KC_NO, KC_NO,  KC_NO, K4B,  K4C,  K4D,   K4E,   K4F }  \
}

#endif
