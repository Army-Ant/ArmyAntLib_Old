#ifndef A_A_DIGRAPH_HPP_2016_1_13
#define A_A_DIGRAPH_HPP_2016_1_13

#include "AADefine.h"

namespace  ArmyAnt {

template <class T_Val, class T_Tag, class T_Weight = float>
class GraphNode
{
	//根据键值对创建节点
	GraphNode(T_Tag tag, const T_Val&element, T_Weight weight = T_Weight(1));
	//复制节点
	GraphNode(const GraphNode&value);
	//拷贝节点内容
	GraphNode&operator=(const GraphNode&value);
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
	Digraph<T_Tag, T_Weight> GetGraph();
	inline const Digraph<T_Tag, T_Weight> GetGraph()const;
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
	//获取已连出的连线
	GraphLine* GetLinkedOut(T_Tag tag);
	const GraphLine* GetLinkedOut(T_Tag tag)const;
	//获取已连入的连线
	GraphLine* GetLinkedIn(T_Tag tag);
	const GraphLine* GetLinkedIn(T_Tag tag)const;
	//获取所有连出的连线,返回个数
	T_Tag GetAllLinkedOut(GraphLine* linked);
	//获取所有连入的连线,返回个数
	T_Tag GetAllLinkedIn(GraphLine* linked);

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
	T_Weight parent;
	//连出节点数组
	GraphLine<T_Weight>** children = nullptr;
};


template <class T_Weight = float>
class GraphLine
{
public:
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
	//取得图中具有指定键的唯一节点
	inline GraphNode*GetChild(T_Tag tag);
	inline const GraphNode*GetChild(T_Tag tag)const;
	//取得图中所有节点,返回节点数
	inline T_Tag GetAllNode(GraphNode* linked);

public:
	//添加节点
	bool AddNode(const GraphNode&value);
	//删除节点
	bool RemoveNode(const GraphNode*target);
	bool RemoveNode(T_Tag tag);

};


} // namespace ArmyAnt

#endif // A_A_DIGRAPH_HPP_2016_1_13