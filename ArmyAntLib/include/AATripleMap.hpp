#ifndef ARMY_ANT_TRIPLE_MAP_2015_11_19
#define ARMY_ANT_TRIPLE_MAP_2015_11_19

#include "AADefine.h"
#include <cstddef>

namespace ArmyAnt {

template <class _First, class _Second, class _Third>
class Triad
{
public:
	Triad();
	Triad(const _First&, const  _Second&, const  _Third&);
	Triad(Triad&);
	~Triad();

public:
	bool Equals(const Triad&) const;
	bool Empty() const;
	Triad<_Second, _First, _Third> Swap12() const;
	Triad<_Third, _Second, _First> Swap13() const;
	Triad<_First, _Third, _Second> Swap23() const;

public:
	Triad& operator =(const Triad&);
	bool operator == (const Triad&) const;
	bool operator != (const Triad&) const;
	bool operator == (std::nullptr_t) const;
	bool operator != (std::nullptr_t) const;
	bool operator bool() const;
	bool operator !() const;

public:
	_First*first = nullptr;
	_Second*second = nullptr;
	_Third*third = nullptr;
};

template <class _Key, class _Value1, class _Value2>
class TripleMap
{
public:
	TripleMap();
	TripleMap(TripleMap&);
	~TripleMap();
};

} // namespace ArmyAnt
#endif