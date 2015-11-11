#ifndef C_A_A_DEFINE_H_2015_11_11
#define C_A_A_DEFINE_H_2015_11_11

#include "AADefine.h"

#ifndef BOOL
typedef BYTE BOOL;
#ifndef TRUE
const BYTE TRUE = BYTE(1);
const BYTE FALSE = BYTE(0);
#endif
#endif

#define ARMYANT_CLIB_API ARMYANTLIB_API

#endif // C_A_A_DEFINE_H_2015_11_11