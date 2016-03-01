#ifndef C_A_A_DEFINE_H_2015_11_11
#define C_A_A_DEFINE_H_2015_11_11

//#include <yvals.h>

typedef char int8;
typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;

#ifdef _x86
typedef int mac_int;
typedef unsigned int mac_uint;
#else
typedef long long mac_int;
typedef unsigned long long mac_uint;
#endif

#ifndef BOOL
typedef int BOOL;
#ifndef TRUE
static const int TRUE = 1;
static const int FALSE = 0;
#endif
#endif

#ifndef _cplusplus

typedef _Bool bool;
static const int true = TRUE;
static const int false = FALSE;

static const double s_aa_natrualBase = 2.7182818284590452353;

#ifndef min
#define min(x,y) ((x>y)?y:x)
#endif
#ifndef max
#define max(x,y) ((x<y)?y:x)
#endif

#define AA_SAFE_DEL(x) if(x != NULL){free(x); x = NULL;}else;
#define AA_SAFE_FREE AA_SAFE_DEL
#define AA_SAFE_DELALL AA_SAFE_DEL

#if defined DEBUG
#include <assert.h>
#define Assert(x) assert(x)
#else
#define Assert(x) x
#endif

#endif

#define ARMYANT_CLIB_API ARMYANTLIB_API

#endif // C_A_A_DEFINE_H_2015_11_11