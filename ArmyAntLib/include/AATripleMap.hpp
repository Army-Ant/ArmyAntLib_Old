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
	Triad(const Iterator&);
	Triad(const SelfType&);
	~Triad();
	typedef Triad<_First, _Second, _Third> SelfType;
	typedef Iterator_TripleMap<_First, _Second, _Third> Iterator;

public:
	bool Equals(const SelfType&) const;
	inline bool Empty() const;
	inline bool Clear();
	inline Triad<_Second, _First, _Third> Swap12() const;
	inline Triad<_Third, _Second, _First> Swap13() const;
	inline Triad<_First, _Third, _Second> Swap23() const;
	inline std::pair<_First, _Second> GetValue12() const;
	inline std::pair<_First, _Third> GetValue13() const;
	inline std::pair<_Second, _Third> GetValue23() const;

public:
	SelfType& operator =(const SelfType&);
	SelfType& operator =(const Iterator&);
	inline bool operator == (const SelfType&) const;
	inline bool operator != (const SelfType&) const;
	inline bool operator == (const Iterator&) const;
	inline bool operator != (const Iterator&) const;
	inline bool operator == (std::nullptr_t) const;
	inline bool operator != (std::nullptr_t) const;
	inline bool operator bool() const;
	inline bool operator !() const;

public:
	const _First&first;
	const _Second&second;
	const _Third&third;

private:
	_First* realFirst;
	_Second* realSecond;
	_Third* realThird;
};


template <class _Key, class _Value1, class _Value2>
class TripleMap
{
public:
	TripleMap(Triad* dataArray = nullptr, DWORD num = 0);
	TripleMap(const SelfMap&);
	~TripleMap();
	typedef TripleMap<_Key, _Value1, _Value2> SelfMap;
	typedef Iterator_TripleMap<_Key, _Value1, _Value2> Iterator;
	typedef Triad<_Key, _Value1, _Value2> Element;

public:
	bool Equals(const SelfMap&) const;
	inline bool Empty() const;
	std::pair<_Value1, _Value2> GetValues(const _Key&) const;
	DWORD Size() const;

	bool Insert(const _Key&, const  _Value1&, const  _Value2&);
	bool Insert(const Iterator&);
	inline bool Insert(const Element&);
	inline bool Insert(const _Key&, const std::pair<_Value1, _Value2>&);
	bool Erase(const Iterator&);
	bool Erase(const _Key&);

	Iterator Find(const _Key&);
	const Iterator Find(const _Key&) const;
	Iterator Begin();
	const Iterator Begin() const;
	Iterator&Before(const Iterator&, int num = 1);
	Iterator&After(const Iterator&, int num = 1);
	inline static const Iterator End();

	typedef std::function<bool(Iterator, Iterator)> SortFunc;
	void Sort(SortFunc);
	bool Clear();
	bool ClearValues();

public:
	TripleMap& operator =(const SelfMap&);
	inline bool operator ==(const SelfMap&) const;
	inline bool operator !=(const SelfMap&) const;
	inline bool operator ==(std::nullptr_t) const;
	inline bool operator !=(std::nullptr_t) const;
	inline bool operator bool() const;
	inline bool operator !() const;
	inline Iterator operator[] (const _Key&);
	inline const Iterator operator[] (const _Key&) const;
	inline static const Iterator operator[] (std::nullptr_t);

private:
	std::vector<Triad<_Key, _Value1, _Value2>> datas;
};


template <class _Key, class _Value1, class _Value2>
class Iterator_TripleMap
{
public:
	Iterator_TripleMap(const TripleMap&);
	Iterator_TripleMap(const Iterator_TripleMap&);
	~Iterator_TripleMap();
	typedef Iterator_TripleMap<_Key, _Value1, _Value2> Iterator;
	typedef TripleMap<_Key, _Value1, _Value2> SelfMap;
	typedef Triad<_Key, _Value1, _Value2> Element;

public:
	bool Equals(const Iterator&) const;
	bool Equals(const Element&) const;
	bool Equals(const SelfMap&, const _Key&) const;
	inline bool Empty() const;
	inline bool End() const;
	std::pair<_Value1, _Value2> GetValues() const;

	bool Erase();
	bool PushFront(const _Key&, const  _Value1&, const  _Value2&);
	bool PushFront(const Iterator&);
	inline bool PushFront(const Element&);
	inline bool PushFront(const _Key&, const std::pair<_Value1, _Value2>&);
	bool PushBack(const _Key&, const  _Value1&, const  _Value2&);
	bool PushBack(const Iterator&);
	inline bool PushBack(const Element&);
	inline bool PushBack(const _Key&, const std::pair<_Value1, _Value2>&);

	inline bool SwapFront();
	inline bool SwapBack();
	Iterator& Next();
	Iterator& Back();
	inline SelfMap& GetParent() const;
	inline bool Clear();
	bool ClearMap();
	bool ClearValue();
	bool ClearAllValues();

public:
	TripleMap& operator =(const Iterator&);
	inline bool operator ==(const Iterator&) const;
	inline bool operator !=(const Iterator&) const;
	inline bool operator ==(const Element&) const;
	inline bool operator !=(const Element&) const;
	inline bool operator ==(std::nullptr_t) const;
	inline bool operator !=(std::nullptr_t) const;
	inline bool operator bool() const;
	inline bool operator !() const;

	Iterator& operator +(int);
	Iterator& operator -(int);
	int operator -(const Iterator&) const;
	inline Iterator& operator +=(int);
	inline Iterator& operator -=(int);
	inline Iterator& operator ++();
	inline Iterator& operator ++(int);
	inline Iterator& operator --();
	inline Iterator& operator --(int);

	inline const Element* operator->() const;
	inline Element operator *();
	inline const Element& operator *() const;

public:
	const _Key&key;

private:
	Element* pointer;
	SelfMap* parent;
};


/****************************** Source Code : Triad ******************************************/


template <class _First, class _Second, class _Third>
Triad<_First, _Second, _Third>::Triad()
	:realFirst(nullptr), realSecond(nullptr), realThird(nullptr),
	first(*realFirst), second(*realSecond), third(*realThird)
{
}

template <class _First, class _Second, class _Third>
Triad<_First, _Second, _Third>::Triad(const _First& first, const _Second& second, const _Third& third)
	:realFirst(new _First(first)), realSecond(new _Second(second)), realThird(new Third(third)),
	first(*realFirst), second(*realSecond), third(*realThird)
{
}

template <class _First, class _Second, class _Third>
Triad<_First, _Second, _Third>::Triad(const Iterator& i)
	:first(*realFirst), second(*realSecond), third(*realThird)
{
	if(i.Empty())
	{
		realFirst = nullptr;
		realSecond = nullptr;
		realThird = nullptr;
	}
	else
	{
		realFirst = new _First(i->first);
		realSecond = new _Second(i->second);
		realThird = new _Third(i->third);
	}
}

template <class _First, class _Second, class _Third>
Triad<_First, _Second, _Third>::Triad(const SelfType& value)
	:first(*realFirst), second(*realSecond), third(*realThird)
{
	if(value.Empty())
	{
		realFirst = nullptr;
		realSecond = nullptr;
		realThird = nullptr;
	}
	else
	{
		realFirst = new _First(value.first);
		realSecond = new _Second(value.second);
		realThird = new _Third(value.third);
	}
}

template <class _First, class _Second, class _Third>
Triad<_First, _Second, _Third>::~Triad()
{
	Clear();
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::Equals(const SelfType& value) const
{
	if(realFirst == value.realFirst && realSecond == value.realSecond && realThird == value.realThird)
		return true;
	if(realFirst == nullptr && value.realFirst != nullptr)
		return false;
	if(realSecond == nullptr && value.realSecond != nullptr)
		return false;
	if(realThird == nullptr && value.realThird != nullptr)
		return false;
	if(value.realFirst == nullptr && realFirst != nullptr)
		return false;
	if(value.realSecond == nullptr && realSecond != nullptr)
		return false;
	if(value.realThird == nullptr && realThird != nullptr)
		return false;
	if(realFirst != value.realFirst && first != value.first)
		return false;
	if(realSecond != value.realSecond && second != value.second)
		return false;
	if(realThird != value.realThird && third != value.third)
		return false;
	return true;
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::Empty() const
{
	return realFirst == nullptr && realSecond == nullptr && realThird == nullptr;
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::Clear()
{
	AA_SAFE_DEL(realFirst)
		AA_SAFE_DEL(realSecond)
		AA_SAFE_DEL(realThird)
}

template <class _First, class _Second, class _Third>
Triad<_Second, _First, _Third> Triad<_First, _Second, _Third>::Swap12() const
{
	return Triad(second, first, third);
}

template <class _First, class _Second, class _Third>
Triad<_Third, _Second, _First> Triad<_First, _Second, _Third>::Swap13() const
{
	return Triad(third, second, first);
}

template <class _First, class _Second, class _Third>
Triad<_First, _Third, _Second> Triad<_First, _Second, _Third>::Swap23() const
{
	return Triad(first, third, second);
}

template <class _First, class _Second, class _Third>
std::pair<_First, _Second> Triad<_First, _Second, _Third>::GetValue12() const
{
	return std::pair<_First, _Second>(first, second);
}

template <class _First, class _Second, class _Third>
std::pair<_First, _Third> Triad<_First, _Second, _Third>::GetValue13() const
{
	return std::pair<_First, _Third>(first, third);
}

template <class _First, class _Second, class _Third>
std::pair<_Second, _Third> Triad<_First, _Second, _Third>::GetValue23() const
{
	return std::pair<_Second, _Third>(second, third);
}

template <class _First, class _Second, class _Third>
SelfType& Triad<_First, _Second, _Third>::operator=(const SelfType&value)
{
	if(value.realFirst == nullptr)
		AA_SAFE_DEL(realFirst)
	else if(realFirst == nullptr)
		realFirst = new _First(value.first);
	else
		*realFirst = SelfType.first;
	if(value.realSecond == nullptr)
		AA_SAFE_DEL(realSecond)
	else if(realSecond == nullptr)
		realSecond = new _Second(value.second);
	else
		*realSecond = SelfType.second;
	if(value.realThird == nullptr)
		AA_SAFE_DEL(realThird)
	else if(realThird == nullptr)
		realThird = new _Third(value.third);
	else
		*realThird = SelfType.third;
	return *this;
}

template <class _First, class _Second, class _Third>
SelfType& Triad<_First, _Second, _Third>::operator=(const Iterator&value)
{
	if(value->realFirst == nullptr)
		AA_SAFE_DEL(realFirst)
	else if(realFirst == nullptr)
		realFirst = new _First(value->first);
	else
		*realFirst = SelfType.first;
	if(value->realSecond == nullptr)
		AA_SAFE_DEL(realSecond)
	else if(realSecond == nullptr)
		realSecond = new _Second(value->second);
	else
		*realSecond = SelfType.second;
	if(value->realThird == nullptr)
		AA_SAFE_DEL(realThird)
	else if(realThird == nullptr)
		realThird = new _Third(value->third);
	else
		*realThird = SelfType.third;
	return *this;
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::operator==(const SelfType&value) const
{
	return Equals(value);
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::operator!=(const SelfType&value) const
{
	return !operator==(value);
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::operator==(const Iterator&i) const
{
	return operator==(*i);
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::operator!=(const Iterator&i) const
{
	return operator!=(i);
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::operator==(std::nullptr_t) const
{
	return Empty();
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::operator!=(std::nullptr_t) const
{
	return !operator==(nullptr);
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::operator bool() const
{
	return operator==(nullptr);
}

template <class _First, class _Second, class _Third>
bool Triad<_First, _Second, _Third>::operator!() const
{
	return !operator bool();
}


/****************************** Source Code : TripleMap ******************************************/


template <class _Key, class _Value1, class _Value2>
TripleMap<_Key, _Value1, _Value2>::TripleMap(Triad* dataArray/* = nullptr*/, DWORD num/* = 0*/)
{
	if(dataArray == nullptr || num == 0)
		return;
	for(DWORD i = 0; i < num; i++)
	{
		datas.push_back(dataArray[i]);
	}
}

template <class _Key, class _Value1, class _Value2>
ArmyAnt::TripleMap<_Key, _Value1, _Value2>::TripleMap(const SelfMap& value)
{
	auto len = value.datas.size();
	for(DWORD i = 0; i < len; i++)
	{
		datas.push_back(value.datas.at(i));
	}
}

template <class _Key, class _Value1, class _Value2>
ArmyAnt::TripleMap<_Key, _Value1, _Value2>::~TripleMap()
{
	Clear();
}

template <class _Key, class _Value1, class _Value2>
bool ArmyAnt::TripleMap<_Key, _Value1, _Value2>::Equals(const SelfMap& value) const
{
	auto len = value.datas.size();
	for(DWORD i = 0; i < len; i++)
	{
		datas.push_back(value.datas.at(i));
	}
}

template <class _Key, class _Value1, class _Value2>
bool ArmyAnt::TripleMap<_Key, _Value1, _Value2>::Empty() const
{
	return datas.empty();
}

template <class _Key, class _Value1, class _Value2>
std::pair<_Value1, _Value2> ArmyAnt::TripleMap<_Key, _Value1, _Value2>::GetValues(const _Key& key) const
{
	auto ret = Find(key);
	return std::pair<_Value1, _Value2>(ret->second, ret->third);
}

template <class _Key, class _Value1, class _Value2>
DWORD ArmyAnt::TripleMap<_Key, _Value1, _Value2>::Size() const
{
	return datas.size();
}







 } // namespace ArmyAnt
#endif