#ifndef AA_FRAGMENT_H_2015_12_31
#define AA_FRAGMENT_H_2015_12_31

#if defined DEBUG
#include <assert.h>
#elif defined _cplusplus
#include <exception>
#else

#endif


#ifdef _cplusplus
#undef max
#undef min
#endif


namespace ArmyAnt {

namespace Fragment {

template <class NUM1, class NUM2> 
inline NUM1 min(NUM1 num1, NUM2 num2)
{
	return num1 > num2 ? NUM1(num2) : num1;
}

template <class NUM1, class NUM2> 
inline NUM1 max(NUM1 num1, NUM2 num2)
{
	return num1 < num2 ? NUM1(num2) : num1;
}

inline void Assert(bool x)
{
#if defined DEBUG
	assert(x);
#elif defined _cplusplus
	if(!(x))
		throw std::exception("assert failed !");
#endif
}

}

}

#endif