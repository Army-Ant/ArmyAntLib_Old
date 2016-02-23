#ifndef A_A_DEFINE_H_2015_11_11
#define A_A_DEFINE_H_2015_11_11

#include "C_AADefine.h"
#include "AAFragment.h"

#ifndef LWORD
typedef unsigned long long LWORD;
#endif

#define AA_SAFE_DEL(x) if(x != nullptr){delete x; x = nullptr;}else;
#define AA_SAFE_DELALL(x) if(x != nullptr){delete[] x; x = nullptr;}else;

#define AA_FORBID_ASSGN_OPR(typen) public: typen& operator=(typen&)=delete
#define AA_FORBID_COPY_CTOR(typen) public: typen(typen&)=delete

#endif // A_A_DEFINE_H_2015_11_11
