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

static const double s_aa_natrualBase = 2.7182818284590452353;

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

template<class PTR>
inline PTR AA_SAFE_DEL(PTR ptr)
{
	if(ptr != nullptr)
	{
		delete ptr;
		ptr = nullptr;
	}
	return nullptr;
}

template <class PTR>
inline void AA_SAFE_DELALL(PTR&ptr)
{
	if(ptr != nullptr)
	{
		delete[] ptr;
		ptr = nullptr;
	}
}

} // namespace Fragment

} // namespace ArmyAnt

#endif
