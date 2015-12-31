#ifndef C_A_A_DEFINE_H_2015_11_11
#define C_A_A_DEFINE_H_2015_11_11

//#include <yvals.h>

#ifndef BYTE
typedef unsigned char BYTE;
#endif
#ifndef WORD
typedef unsigned short WORD;
#endif
#ifndef DWORD
typedef unsigned long DWORD;
#endif

#ifndef BOOL
typedef int BOOL;
#ifndef TRUE
const int TRUE = 1;
const int FALSE = 0;
#endif
#endif

#ifndef _cplusplus

typedef _Bool bool;
const int true = TRUE;
const int false = FALSE;

#ifndef min
#define min(x,y) ((x>y)?y:x)
#endif
#ifndef max
#define max(x,y) ((x<y)?y:x)
#endif

#define SafeDel(x) if(x != NULL){free(x); x = NULL;}else;
#define SafeFree SafeDel
#define SafeDelAll SafeDel

#if defined DEBUG
#include <assert.h>
#define Assert(x) assert(x)
#else
#define Assert(x) x
#endif

#endif

#define ARMYANT_CLIB_API ARMYANTLIB_API

#endif // C_A_A_DEFINE_H_2015_11_11