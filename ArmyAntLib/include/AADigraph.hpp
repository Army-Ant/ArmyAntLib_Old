#ifndef A_A_DIGRAPH_HPP_2016_1_13
#define A_A_DIGRAPH_HPP_2016_1_13

#include "AADefine.h"

namespace  ArmyAnt {

template <class T_Val, class T_Tag, class T_Weight = float>
class GraphNode
{
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
	Digraph<T_Tag, T_Weight> GetGraph();
	inline const Digraph<T_Tag, T_Weight> GetGraph()const;
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
	GraphLine* GetLinkedOut(T_Tag tag);
	const GraphLine* GetLinkedOut(T_Tag tag)const;
	//��ȡ�����������
	GraphLine* GetLinkedIn(T_Tag tag);
	const GraphLine* GetLinkedIn(T_Tag tag)const;
	//��ȡ��������������,���ظ���
	T_Tag GetAllLinkedOut(GraphLine* linked);
	//��ȡ�������������,���ظ���
	T_Tag GetAllLinkedIn(GraphLine* linked);

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
	//ȡ��ͼ�о���ָ������Ψһ�ڵ�
	inline GraphNode*GetChild(T_Tag tag);
	inline const GraphNode*GetChild(T_Tag tag)const;
	//ȡ��ͼ�����нڵ�,���ؽڵ���
	inline T_Tag GetAllNode(GraphNode* linked);

public:
	//��ӽڵ�
	bool AddNode(const GraphNode&value);
	//ɾ���ڵ�
	bool RemoveNode(const GraphNode*target);
	bool RemoveNode(T_Tag tag);

};


} // namespace ArmyAnt

#endif // A_A_DIGRAPH_HPP_2016_1_13