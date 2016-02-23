#ifndef A_A_DIGRAPH_HPP_2016_1_13
#define A_A_DIGRAPH_HPP_2016_1_13

/*	* @ author			: Jason
* @ date			: 01/18/2016
* @ nearly update	: 01/18/2016
* @ small version	: 0.1
* @ summary			: 有向图及其遍历迭代器
* @ uncompleted		: 迭代器和图
* @ untested		: all
* @ tested			:
*/

#include "AADefine.h"
#include <vector>

namespace  ArmyAnt {

template <class T_Val, class T_Tag, class T_Weight = float>
class GraphNode;
template <class T_Val, class T_Tag, class T_Weight = float>
class GraphLine;
template <class T_Val, class T_Tag, class T_Weight = float>
class Digraph;

template <class T_Val, class T_Tag, class T_Weight>
class GraphNode
{
public:
	//创建空节点
	GraphNode();
	//根据键值对创建节点
	GraphNode(T_Tag tag, const T_Val&element, T_Weight weight = T_Weight(1));
	//复制节点
	GraphNode(const GraphNode<T_Val, T_Tag, T_Weight>&value);
	//拷贝节点内容
	GraphNode<T_Val, T_Tag, T_Weight>&operator=(const GraphNode<T_Val, T_Tag, T_Weight>&value);
	//析构函数
	virtual ~GraphNode();

public:
	//取得节点的键
	T_Tag GetTag()const;
	//取得节点的值内容
	T_Val*GetValue();
	inline const T_Val*GetValue()const;
	//取得节点的权重
	T_Weight GetWeight()const;

public:
	//取得所在的图
	Digraph<T_Val, T_Tag, T_Weight>*GetGraph();
	inline const Digraph<T_Val, T_Tag, T_Weight>*GetGraph()const;
	//设置所在图
	bool SetGraph(const Digraph<T_Val, T_Tag, T_Weight>*graph);
	//修改键
	bool SetTag(T_Tag tag);
	//修改值内容
	bool SetValue(T_Val&value);
	//重置值内容
	bool SetValue();
	//修改权重
	bool SetWeight(T_Weight weight);

public:
	//连出到某个节点
	bool LinkTo(const GraphNode&target, T_Weight weight = T_TargetLineWeight(1));
	//从某个节点连入
	bool LinkFrom(const GraphNode&target, T_Weight weight = T_TargetLineWeight(1));
	//断开对某个节点的连接(包括连入和连出)
	bool DeLink(const GraphNode*target);
	bool DeLink(T_Tag tag);
	//断开对某个节点的连入或连出
	bool DeLink(const GraphNode*target, bool isOut);
	bool DeLink(T_Tag tag, bool isOut);
	//断开所有连接,包括连入的和连出的
	bool DeLinkAll();
	//断开所有连出的连接,或者断开所有连入的连接
	bool DeLinkAll(bool isOut);

public:
	//查询是否连接到指定节点
	bool IsLinkedTo(T_Tag tar);
	bool IsLinkedTo(const GraphNode* tar);
	//获取已连出的连线
	GraphLine<T_Val, T_Tag, T_Weight>* GetLinkedOut(T_Tag tag);
	const GraphLine<T_Val, T_Tag, T_Weight>* GetLinkedOut(T_Tag tag)const;
	//获取已连入的连线
	GraphLine<T_Val, T_Tag, T_Weight>* GetLinkedIn(T_Tag tag);
	const GraphLine<T_Val, T_Tag, T_Weight>* GetLinkedIn(T_Tag tag)const;
	//获取所有连出的连线,返回个数
	T_Tag GetAllLinkedOut(GraphLine<T_Val, T_Tag, T_Weight>** linked);
	//获取所有连入的连线,返回个数
	T_Tag GetAllLinkedIn(GraphLine<T_Val, T_Tag, T_Weight>* linked);

public:
	//清空节点内容
	inline T_Val* operator=(std::nullptr_t);
	//获取指定键处的节点
	inline GraphNode& operator[](T_Tag tag);
	inline const GraphNode& operator[](T_Tag tag)const;

private:
	//键
	T_Tag tag;
	//值
	T_Val* value = nullptr;
	//权重
	T_Weight weight;
	//所在的图
	Digraph<T_Val, T_Tag, T_Weight>* parent = nullptr;
	//连出节点数组
	std::vector<GraphLine<T_Val, T_Tag, T_Weight>> children;
};


template <class T_Val, class T_Tag, class T_Weight>
class GraphLine
{
public:
	GraphLine(GraphNode<T_Val, T_Tag, T_Weight>* start, GraphNode<T_Val, T_Tag, T_Weight>* end, T_Weight weight);
	virtual ~GraphLine();

public:
	//获得连线的起点
	const GraphNode<T_Val, T_Tag, T_Weight>* GetStartNode()const;
	//获得连线的终点
	const GraphNode<T_Val, T_Tag, T_Weight>* GetEndNode()const;
	//获得连线的权重
	T_Weight GetWeight()const;
	//设定连线的权重
	bool SetWeight(T_Weight weight);

private:
	const GraphNode<T_Val, T_Tag, T_Weight>* startnode;
	const GraphNode<T_Val, T_Tag, T_Weight>* endnode;
	T_Weight weight;

	AA_FORBID_ASSGN_OPR(GraphLine);
	AA_FORBID_COPY_CTOR(GraphLine);
};


template <class T_Val, class T_Tag, class T_Weight>
class Digraph
{
public:
	Digraph();
	virtual ~Digraph();

public:
	//取得图中具有指定键的唯一节点
	inline GraphNode<T_Val, T_Tag, T_Weight>*GetChild(T_Tag tag);
	inline const GraphNode<T_Val, T_Tag, T_Weight>*GetChild(T_Tag tag)const;
	//取得图中所有节点,返回节点数
	inline T_Tag GetAllNode(GraphNode<T_Val, T_Tag, T_Weight>* linked = nullptr);

public:
	//添加节点
	bool AddNode(const GraphNode<T_Val, T_Tag, T_Weight>&value);
	bool AddNode(T_Val value, T_Tag tag, T_Weight weight = T_Weight(1));
	//删除节点
	bool RemoveNode(T_Tag tag);
	//连接节点
	bool LinkNode(T_Tag src, T_Tag dest, T_Weight weight = T_Weight(1));
	//断开节点的连接
	bool DelinkNode(T_Tag src, T_Tag dest);
	//查询两节点连线是否存在
	bool IsLinkedTo(T_Tag src, T_Tag dst);
	//断开某个节点的所有连接
	bool DeLinkNodeAll(T_Tag target, bool isOut);
	bool DeLinkNodeAll(T_Tag target);
	//断开图中所有连接
	bool DeLinkAll();
	//清空图中所有节点和连线
	bool Clear();

private:
	std::vector<GraphNode<T_Val, T_Tag, T_Weight>> nodes;

	AA_FORBID_ASSGN_OPR(Digraph);
	AA_FORBID_COPY_CTOR(Digraph);
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
GraphNode<T_Val, T_Tag, T_Weight>::GraphNode(const GraphNode<T_Val, T_Tag, T_Weight>&value)
	: tag(value.tag), value(value.value), weight(weight.weight), children()
{
	for(int i = 0; i < value.children.size(); ++i)
	{
		children[i] = value.children[i];
	}
}

template<class T_Val, class T_Tag, class T_Weight>
GraphNode<T_Val, T_Tag, T_Weight> & GraphNode<T_Val, T_Tag, T_Weight>::operator=(const GraphNode<T_Val, T_Tag, T_Weight> & value)
{
	tag = value.tag;
	this->value = value.value;
	weight = value.weight;
	children.clear();
	for(int i = 0; i < value.children.size(); ++i)
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
Digraph<T_Val, T_Tag, T_Weight>*GraphNode<T_Val, T_Tag, T_Weight>::GetGraph()
{
	return parent;
}

template<class T_Val, class T_Tag, class T_Weight>
const Digraph<T_Val, T_Tag, T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetGraph() const
{
	return parent;
}

template<class T_Val, class T_Tag, class T_Weight>
inline bool GraphNode<T_Val, T_Tag, T_Weight>::SetGraph(const Digraph<T_Val, T_Tag, T_Weight>* graph)
{
	parent = graph;
	return true;
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
bool GraphNode<T_Val, T_Tag, T_Weight>::LinkTo(const GraphNode<T_Val, T_Tag, T_Weight> & target, T_Weight weight)
{
	if(parent == nullptr || target.parent == nullptr || parent->GetChild(target.tag) != &target)
		return false;
	if(GetLinkedOut(target.tag) != nullptr)
		return GetLinkedOut(target.tag) == &target;
	children.push_back(GraphLine(this, &target, weight));
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::LinkFrom(const GraphNode<T_Val, T_Tag, T_Weight> & target, T_Weight weight)
{
	if(parent == nullptr || target.parent == nullptr || target.GetChild(tag) != this)
		return false;
	if(target.GetLinkedOut(tag) != nullptr)
		return target.GetLinkedOut(tag) == this;
	target.children.push_back(GraphLine(&target, this, weight));
}

template<class T_Val, class T_Tag, class T_Weight>
bool GraphNode<T_Val, T_Tag, T_Weight>::DeLink(const GraphNode<T_Val, T_Tag, T_Weight> * target)
{
	if(target == nullptr)
		return false;
	bool ret = false;
	for(auto i = children.begin(); i != children.end(); ++i)
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
	for(auto i = target->children.begin(); i != target->children.end(); ++i)
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
	for(auto i = children.begin(); i != children.end(); ++i)
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

	for(auto i = target->children.begin(); i != target->children.end(); ++i)
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
bool GraphNode<T_Val, T_Tag, T_Weight>::DeLink(const GraphNode<T_Val, T_Tag, T_Weight> * target, bool isOut)
{
	if(target == nullptr)
		return false;
	if(isOut)
	{
		for(auto i = children.begin(); i != children.end(); ++i)
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
		for(auto i = target->children.begin(); i != target->children.end(); ++i)
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
		for(auto i = children.begin(); i != children.end(); ++i)
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
		for(auto i = target->children.begin(); i != target->children.end(); ++i)
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
		for(int i = 0; i < size; ++i)
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
bool GraphNode<T_Val, T_Tag, T_Weight>::IsLinkedTo(T_Tag tar)
{
	for(auto i = children.begin(); i != children.end(); i++)
	{
		if(i->GetEndNode()->tag == tar)
			return true;
	}
	return false;
}

template<class T_Val, class T_Tag, class T_Weight>
inline bool GraphNode<T_Val, T_Tag, T_Weight>::IsLinkedTo(const GraphNode * tar)
{
	for(auto i = children.begin(); i != children.end(); i++)
	{
		if(i->GetEndNode() == tar)
			return true;
	}
	return false;
}

template<class T_Val, class T_Tag, class T_Weight>
GraphLine<T_Val, T_Tag, T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetLinkedOut(T_Tag tag)
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
const GraphLine<T_Val, T_Tag, T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetLinkedOut(T_Tag tag) const
{
	return const_cast(this)->GetLinkedOut(tag);
}

template<class T_Val, class T_Tag, class T_Weight>
GraphLine<T_Val, T_Tag, T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetLinkedIn(T_Tag tag)
{
	auto size = parent->GetAllNode();
	auto ret = new GraphNode[size];
	GraphLine<T_Val,T_Tag, T_Weight>*res = nullptr;
	parent.GetAllNode(ret);
	for(int i = 0; i < size; ++i)
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
const GraphLine<T_Val, T_Tag, T_Weight>* GraphNode<T_Val, T_Tag, T_Weight>::GetLinkedIn(T_Tag tag) const
{
	return const_cast(this)->GetLinkedIn(tag);
}

template<class T_Val, class T_Tag, class T_Weight>
T_Tag GraphNode<T_Val, T_Tag, T_Weight>::GetAllLinkedOut(GraphLine<T_Val, T_Tag, T_Weight>** linked)
{
	if(linked != nullptr)
		for(DWORD i = 0; i < children.size(); ++i)
		{
			linked[i] = children[i]->GetEndNode();
		}
	return T_Tag(children.size());
}

template<class T_Val, class T_Tag, class T_Weight>
T_Tag GraphNode<T_Val, T_Tag, T_Weight>::GetAllLinkedIn(GraphLine<T_Val, T_Tag, T_Weight>* linked)
{
	T_Tag count = 0;
	auto size = parent->GetAllNode();
	auto ret = new GraphNode[size];
	parent.GetAllNode(ret);
	for(int i = 0; i < size; ++i)
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
GraphNode<T_Val, T_Tag, T_Weight> & GraphNode<T_Val, T_Tag, T_Weight>::operator[](T_Tag tag)
{
	return *(GetLinkedOut(tag)->GetEndNode());
}

template<class T_Val, class T_Tag, class T_Weight>
const GraphNode<T_Val, T_Tag, T_Weight> & GraphNode<T_Val, T_Tag, T_Weight>::operator[](T_Tag tag) const
{
	return *(GetLinkedOut(tag)->GetEndNode());
}


/************************ Source : GraphLine **********************************************************************/


template<class T_Val, class T_Tag, class T_Weight>
GraphLine<T_Val, T_Tag, T_Weight>::GraphLine(GraphNode<T_Val, T_Tag, T_Weight>* start, GraphNode<T_Val, T_Tag, T_Weight>* end, T_Weight weight)
	:startnode(start),endnode(end),weight(weight)
{
}

template<class T_Val, class T_Tag, class T_Weight>
GraphLine<T_Val, T_Tag, T_Weight>::~GraphLine()
{
}

template<class T_Val, class T_Tag, class T_Weight>
const GraphNode<T_Val, T_Tag, T_Weight>* GraphLine<T_Val, T_Tag, T_Weight>::GetStartNode() const
{
	return startnode;
}

template<class T_Val, class T_Tag, class T_Weight>
const GraphNode<T_Val, T_Tag, T_Weight>* GraphLine<T_Val, T_Tag, T_Weight>::GetEndNode() const
{
	return endnode;
}

template<class T_Val, class T_Tag, class T_Weight>
inline T_Weight GraphLine<T_Val, T_Tag, T_Weight>::GetWeight() const
{
	return weight;
}

template<class T_Val, class T_Tag, class T_Weight>
inline bool GraphLine<T_Val, T_Tag, T_Weight>::SetWeight(T_Weight weight)
{
	this->weight = weight;
	return true;
}


/************************ Source : Digraph **********************************************************************/



template<class T_Val, class T_Tag, class T_Weight>
Digraph<T_Val, T_Tag, T_Weight>::Digraph()
	:nodes()
{
}

template<class T_Val, class T_Tag, class T_Weight>
Digraph<T_Val, T_Tag, T_Weight>::~Digraph()
{
}

template<class T_Val, class T_Tag, class T_Weight>
GraphNode<T_Val, T_Tag, T_Weight>* Digraph<T_Val, T_Tag, T_Weight>::GetChild(T_Tag tag)
{
	for(auto i = nodes.begin(); i != nodes.end(); ++i)
	{
		if(i->tag == tag)
			return &*i;
	}
	return nullptr;
}

template<class T_Val, class T_Tag, class T_Weight>
const GraphNode<T_Val, T_Tag, T_Weight>* Digraph<T_Val, T_Tag, T_Weight>::GetChild(T_Tag tag) const
{
	return const_cast(this)->GetChild(tag);
}

template<class T_Val, class T_Tag, class T_Weight>
T_Tag Digraph<T_Val, T_Tag, T_Weight>::GetAllNode(GraphNode<T_Val, T_Tag, T_Weight>* linked/* = nullptr*/)
{
	for(T_Tag i = 0; i < nodes.size() && linked != nullptr; ++i)
	{
		linked[i] = &(nodes[i]);
	}
	return T_Tag(nodes.size());
}

template<class T_Val, class T_Tag, class T_Weight>
bool Digraph<T_Val, T_Tag, T_Weight>::AddNode(const GraphNode<T_Val, T_Tag, T_Weight>& value)
{
	if(GetChild(value.tag) != nullptr)
		return false;
	nodes.push_back(value);
	value.SetGraph(this);
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
inline bool Digraph<T_Val, T_Tag, T_Weight>::AddNode(T_Val value, T_Tag tag, T_Weight weight)
{
	return AddNode(GraphNode<T_Val, T_Tag, T_Weight>(value, tag, weight));
}

template<class T_Val, class T_Tag, class T_Weight>
bool Digraph<T_Val, T_Tag, T_Weight>::RemoveNode(T_Tag tag)
{
	auto target = GetChild(value.tag);
	if(target == nullptr)
		return false;
	target.SetGraph(nullptr);
	nodes.erase(target);
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool Digraph<T_Val, T_Tag, T_Weight>::LinkNode(T_Tag src, T_Tag dest, T_Weight weight/* = T_Weight(1)*/)
{
	auto source = GetChild(src);
	auto target = GetChild(dest);
	if(source == nullptr|| target == nullptr)
		return false;
	return source->LinkTo(*target, weight);
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool Digraph<T_Val, T_Tag, T_Weight>::DelinkNode(T_Tag src, T_Tag dest)
{
	auto source = GetChild(src);
	auto target = GetChild(dest);
	if(source == nullptr || target == nullptr)
		return false;
	return source->DeLink(target, true);
}

template<class T_Val, class T_Tag, class T_Weight>
inline bool Digraph<T_Val, T_Tag, T_Weight>::IsLinkedTo(T_Tag src, T_Tag dst)
{
	auto source = GetChild(src);
	auto target = GetChild(dest);
	if(source == nullptr || target == nullptr)
		return false;
	return source->IsLinkedTo(target);
}

template<class T_Val, class T_Tag, class T_Weight>
bool Digraph<T_Val, T_Tag, T_Weight>::DeLinkNodeAll(T_Tag target, bool isOut)
{
	auto source = GetChild(target);
	if(source == nullptr)
		return false;
	return source->DeLinkAll(isOut);
}

template<class T_Val, class T_Tag, class T_Weight>
bool Digraph<T_Val, T_Tag, T_Weight>::DeLinkNodeAll(T_Tag target)
{
	auto source = GetChild(target);
	if(source == nullptr)
		return false;
	return source->DeLinkAll();
}

template<class T_Val, class T_Tag, class T_Weight>
bool Digraph<T_Val, T_Tag, T_Weight>::DeLinkAll()
{
	for(auto i = nodes.begin(); i != nodes.end(); ++i)
	{
		if(!i->DeLinkAll())
			return false;
	}
	return true;
}

template<class T_Val, class T_Tag, class T_Weight>
bool Digraph<T_Val, T_Tag, T_Weight>::Clear()
{
	nodes.clear();
	return true;
}


} // namespace ArmyAnt

#endif // A_A_DIGRAPH_HPP_2016_1_13