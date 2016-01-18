#ifndef A_A_DIGRAPH_HPP_2016_1_13
#define A_A_DIGRAPH_HPP_2016_1_13

/*	* @ author			: Jason
	* @ date			: 01/18/2016
	* @ nearly update	: 01/18/2016
	* @ small version	: 0.1
	* @ summary			: ����ͼ�������������
	* @ uncompleted		: ��������ͼ
	* @ untested		: all
	* @ tested			:
*/

#include "AADefine.h"

namespace  ArmyAnt {

template <class T_Val, class T_Tag, class T_Weight = float>
class GraphNode
{
	//�����սڵ�
	GraphNode();
	//���ݼ�ֵ�Դ����ڵ�
	GraphNode(T_Tag tag, const T_Val&element, T_Weight weight = T_Weight(1));
	//���ƽڵ�
	GraphNode(const GraphNode&value);
	//�����ڵ�����
	GraphNode&operator=(const GraphNode&value);
	//��������
	virtual ~GraphNode();

public:
	//ȡ�ýڵ�ļ�
	T_Tag GetTag()const;
	//ȡ�ýڵ��ֵ����
	T_Val*GetValue();
	inline const T_Val*GetValue()const;
	//ȡ�ýڵ��Ȩ��
	T_Weight GetWeight()const;

public:
	//ȡ�����ڵ�ͼ
	Digraph<T_Tag, T_Weight>*GetGraph();
	inline const Digraph<T_Tag, T_Weight>*GetGraph()const;
	//�޸ļ�
	bool SetTag(T_Tag tag);
	//�޸�ֵ����
	bool SetValue(T_Val&value);
	//����ֵ����
	bool SetValue();
	//�޸�Ȩ��
	bool SetWeight(T_Weight weight);

public:
	//������ĳ���ڵ�
	bool LinkTo(const GraphNode&target, T_Weight weight = T_TargetLineWeight(1));
	//��ĳ���ڵ�����
	bool LinkFrom(const GraphNode&target, T_Weight weight = T_TargetLineWeight(1));
	//�Ͽ���ĳ���ڵ������(�������������)
	bool DeLink(const GraphNode*target);
	bool DeLink(T_Tag tag);
	//�Ͽ���ĳ���ڵ�����������
	bool DeLink(const GraphNode*target, bool isOut);
	bool DeLink(T_Tag tag, bool isOut);
	//�Ͽ���������,��������ĺ�������
	bool DeLinkAll();
	//�Ͽ���������������,���߶Ͽ��������������
	bool DeLinkAll(bool isOut);

public:
	//��ȡ������������
	GraphLine<T_Weight>* GetLinkedOut(T_Tag tag);
	const GraphLine<T_Weight>* GetLinkedOut(T_Tag tag)const;
	//��ȡ�����������
	GraphLine<T_Weight>* GetLinkedIn(T_Tag tag);
	const GraphLine<T_Weight>* GetLinkedIn(T_Tag tag)const;
	//��ȡ��������������,���ظ���
	T_Tag GetAllLinkedOut(GraphLine<T_Weight>** linked);
	//��ȡ�������������,���ظ���
	T_Tag GetAllLinkedIn(GraphLine<T_Weight>* linked);

public:
	//��սڵ�����
	inline T_Val* operator=(std::nullptr_t);
	//��ȡָ�������Ľڵ�
	inline GraphNode& operator[](T_Tag tag);
	inline const GraphNode& operator[](T_Tag tag)const;

private:
	//��
	T_Tag tag;
	//ֵ
	T_Val* value = nullptr;
	//Ȩ��
	T_Weight parent;
	//�����ڵ�����
	std::vector<GraphLine<T_Weight>> children;
	Digraph<T_Tag, T_Weight>* parent = nullptr;
};


template <class T_Tag, class T_Weight = float>
class GraphLine
{
public:
	GraphLine(GraphNode<T_Tag>* start, GraphNode<T_Tag>* end, T_Weight weight);
	virtual ~GraphLine();

public:
	GraphNode* GetStartNode();
	const GraphNode* GetStartNode()const;
	GraphNode* GetEndNode();
	const GraphNode* GetEndNode()const;
	T_Weight GetWeight()const;

	AA_FORBID_ASSGN_OPR(GraphLine);
	AA_FORBID_COPY_CTOR(GraphLine);
};


template <class T_Tag, class T_Weight = float>
class Digraph
{
public:
	Digraph();
	virtual ~Digraph();

public:
	//ȡ��ͼ�о���ָ������Ψһ�ڵ�
	inline GraphNode<T_Tag, T_Weight>*GetChild(T_Tag tag);
	inline const GraphNode<T_Tag, T_Weight>*GetChild(T_Tag tag)const;
	//ȡ��ͼ�����нڵ�,���ؽڵ���
	inline T_Tag GetAllNode(GraphNode<T_Tag, T_Weight>* linked);

public:
	//��ӽڵ�
	bool AddNode(const GraphNode<T_Tag, T_Weight>&value);
	//ɾ���ڵ�
	bool RemoveNode(const GraphNode<T_Tag, T_Weight>*target);
	bool RemoveNode(T_Tag tag);

};


/************************ Source : GraphNode **********************************************************************/


template <class T_Val, class T_Tag, class T_Weight>
GraphNode<T_Val, T_Tag, T_Weight>::GraphNode()
	:tag(0), value(nullptr), weight(0), children()
{
}

template <class T_Val, class T_Tag, class T_Weight>
GraphNode<T_Val, T_Tag, T_Weight>::GraphNode(T_Tag tag, const T_Val&element, T_Weight weight /*= T_Weight(1)*/)
	: tag(tag), value(&element), weight(weight), children()
{
}

template <class T_Val, class T_Tag, class T_Weight>
GraphNode<T_Val, T_Tag, T_Weight>::GraphNode(const GraphNode&value)
	: tag(value.tag), value(value.value), weight(weight.weight), children()
{
	for(int i = 0; i < value.children.size(); i++)
	{
		children[i] = value.children[i];
	}
}

template<class T_Val, class T_Tag, class T_Weight>
GraphNode & GraphNode<T_Val, T_Tag, T_Weight>::operator=(const GraphNode & value)
{
	tag = value.tag;
	this->value = value.value;
	weight = value.weight;
	children.clear();
	for(int i = 0; i < value.children.size(); i++)
	{
		children[i] = value.children[i];
	}
	return *this;
}

template<class T_Val, class T_Tag, class T_Weight>
GraphNode<T_Val, T_Tag, T_Weight>::~GraphNode()
{
}

template<class T_Val, class T_Tag, class T_Weight>
T_Tag GraphNode<T_Val, T_Tag, T_Weight>::GetTag() const
{
	return tag;
}

template<class T_Val, class T_Tag, class T_Weight>
T_Val * GraphNode<T_Val, T_Tag, T_Weight>::GetValue()
{
	return value;
}

template<class T_Val, class T_Tag, class T_Weight>
const T_Val * GraphNode<T_Val, T_Tag, T_Weight>::GetValue() const
{
	return value;
}

template<class T_Val, class T_Tag, class T_Weight>
T_Weight GraphNode<T_Val, T_Tag, T_Weight>::GetWeight() const
{
	return weight;
}

template<class T_Val, class T_Tag, class T_Weight>
Digraph<T_Tag, T_Weight>*GraphNode<T_Val, T_Tag, T_Weight>::GetGraph()
{
	return parent;
}

template<class T_Val, class T_Tag, class T_Weight>
const Digraph<T_Tag, T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetGraph() const
{
	return parent;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::SetTag(T_Tag tag)
{
	this->tag = tag;
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::SetValue(T_Val & value)
{
	this->value = value;
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::SetValue()
{
	this->value = nullptr;
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::SetWeight(T_Weight weight)
{
	this->weight = weight;
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::LinkTo(const GraphNode & target, T_Weight weight)
{
	if(parent == nullptr || target.parent == nullptr || parent->GetChild(target.tag) != &target)
		return false;
	if(GetLinkedOut(target.tag) != nullptr)
		return GetLinkedOut(target.tag) == &target;
	children.push_back(GraphLine(this, &target, weight));
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::LinkFrom(const GraphNode & target, T_Weight weight)
{
	if(parent == nullptr || target.parent == nullptr || target.GetChild(tag) != this)
		return false;
	if(target.GetLinkedOut(tag) != nullptr)
		return target.GetLinkedOut(tag) == this;
	target.children.push_back(GraphLine(&target, this, weight));
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::DeLink(const GraphNode * target)
{
	if(target == nullptr)
		return false;
	bool ret = false;
	for(auto i = children.begin(); i != children.end(); i++)
	{
		if(i->GetEndNode() == target)
		{
			children.erase(i);
			ret = true;
			return true;
		}
	}
	if(!ret)
		return false;
	for(auto i = target->children.begin(); i != target->children.end(); i++)
	{
		if(i->GetEndNode() == this)
		{
			target->children.erase(i);
			return true;
		}
	}
	return false;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::DeLink(T_Tag tag)
{
	bool ret = false;
	for(auto i = children.begin(); i != children.end(); i++)
	{
		if(i->GetEndNode()->tag == target->tag)
		{
			children.erase(i);
			ret = true;
			break;
		}
	}
	if(!ret)
		return false;

	for(auto i = target->children.begin(); i != target->children.end(); i++)
	{
		if(i->GetEndNode()->tag == tag)
		{
			target->children.erase(i);
			return true;
		}
	}
	return false;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::DeLink(const GraphNode * target, bool isOut)
{
	if(target == nullptr)
		return false;
	if(isOut)
	{
		for(auto i = children.begin(); i != children.end(); i++)
		{
			if(i->GetEndNode() == target)
			{
				children.erase(i);
				return true;
			}
		}
	}
	else
	{
		for(auto i = target->children.begin(); i != target->children.end(); i++)
		{
			if(i->GetEndNode() == this)
			{
				target->children.erase(i);
				return true;
			}
		}
	}
	return false;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::DeLink(T_Tag tag, bool isOut)
{
	if(isOut)
	{
		for(auto i = children.begin(); i != children.end(); i++)
		{
			if(i->GetEndNode()->tag == target->tag)
			{
				children.erase(i);
				return true;
			}
		}
	}
	else
	{
		for(auto i = target->children.begin(); i != target->children.end(); i++)
		{
			if(i->GetEndNode()->tag == tag)
			{
				target->children.erase(i);
				return true;
			}
		}
	}
	return false;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::DeLinkAll()
{
	return DeLinkAll(true) && DeLinkAll(false);
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::DeLinkAll(bool isOut)
{
	if(parent == nullptr)
		return false;
	if(isOut)
	{
		children.clear();
	}
	else
	{
		auto size = parent->GetAllNode();
		auto ret = new GraphNode[size];
		parent.GetAllNode(ret);
		for(int i = 0; i < size; i++)
		{
			for(auto it = ret[i]->children.begin(); it != ret[i]->children.end(); it++)
			{
				if(it->GetEndNode() == this)
				{
					ret[i]->children.erase(it);
					break;
				}
			}
		}
		AA_SAFE_DELALL(ret)
	}
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
GraphLine<T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetLinkedOut(T_Tag tag)
{
	for(auto it = children.begin(); it != children.end(); it++)
	{
		if(it->GetEndNode()->tag == tag)
		{
			return &*it;
		}
	}
	return nullptr;
}

template<class T_Val, class T_Tag, class T_Weight>
const GraphLine<T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetLinkedOut(T_Tag tag) const
{
	return const_cast(this)->GetLinkedOut(tag);
}

template<class T_Val, class T_Tag, class T_Weight>
GraphLine<T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetLinkedIn(T_Tag tag)
{
	auto size = parent->GetAllNode();
	auto ret = new GraphNode[size];
	GraphLine<T_Weight>*res = nullptr;
	parent.GetAllNode(ret);
	for(int i = 0; i < size; i++)
	{
		for(auto it = ret[i]->children.begin(); it != ret[i]->children.end(); it++)
		{
			if(it->GetEndNode() == this)
			{
				res = &*it;
				break;
			}
		}
	}
	AA_SAFE_DELALL(ret);
	return res;
}

template<class T_Val, class T_Tag, class T_Weight>
const GraphLine<T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetLinkedIn(T_Tag tag) const
{
	return const_cast(this)->GetLinkedIn(tag);
}

template<class T_Val, class T_Tag, class T_Weight>
T_Tag GraphNode<T_Val, T_Tag, T_Weight>::GetAllLinkedOut(GraphLine<T_Weight>** linked)
{
	if(linked != nullptr)
		for(DWORD i = 0; i < children.size(); i++)
		{
			linked[i] = children[i]->GetEndNode();
		}
	return T_Tag(children.size());
}

template<class T_Val, class T_Tag, class T_Weight>
T_Tag GraphNode<T_Val, T_Tag, T_Weight>::GetAllLinkedIn(GraphLine<T_Weight>* linked)
{
	T_Tag count = 0;
	auto size = parent->GetAllNode();
	auto ret = new GraphNode[size];
	parent.GetAllNode(ret);
	for(int i = 0; i < size; i++)
	{
		for(auto it = ret[i]->children.begin(); it != ret[i]->children.end(); it++)
		{
			if(it->GetEndNode() == this)
			{
				if(linked != nullptr)
					linked[count++] = it->GetEndNode();
				break;
			}
		}
	}
	AA_SAFE_DELALL(ret);
	return count;
}

template<class T_Val, class T_Tag, class T_Weight>
T_Val * GraphNode<T_Val, T_Tag, T_Weight>::operator=(std::nullptr_t)
{
	value = nullptr;
	children.clear();
	parent = nullptr;
	return nullptr;
}

template<class T_Val, class T_Tag, class T_Weight>
GraphNode & GraphNode<T_Val, T_Tag, T_Weight>::operator[](T_Tag tag)
{
	return *(GetLinkedOut(tag)->GetEndNode());
}

template<class T_Val, class T_Tag, class T_Weight>
const GraphNode & GraphNode<T_Val, T_Tag, T_Weight>::operator[](T_Tag tag) const
{
	return *(GetLinkedOut(tag)->GetEndNode());
}


/************************ Source : GraphLine **********************************************************************/


} // namespace ArmyAnt

#endif // A_A_DIGRAPH_HPP_2016_1_13