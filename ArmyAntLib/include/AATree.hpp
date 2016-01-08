#ifndef A_A_TREE_HPP_2015_12_26
#define A_A_TREE_HPP_2015_12_26

#include "AADefine.h"
#include <functional>

namespace  ArmyAnt{

typedef std::function<void(void*node, void*param)> BrowseFunc;

template <class T_Val, class T_Tag = DWORD>
class Node
{
public:
	Node(T_Tag tag, const T_Val&element);
	Node(const Node&value);
	Node&operator=(const Node&value);
	~Node();

public:
	T_Tag GetTag()const;
	T_Val*GetValue();
	inline const T_Val*GetValue()const;
	Node*GetParent();
	inline const Node*GetParent()const;
	Node*GetChild(T_Tag tag);
	inline const Node*GetChild(T_Tag tag)const;
	T_Tag GetChildren(Node*children);

public:
	Tree<T_Tag> GetTree();
	inline const Tree<T_Tag> GetTree()const;
	bool SetTag(T_Tag tag);
	bool SetValue(T_Val&value);
	bool SetValue();
	bool RemoveFromParent();
	bool SetParent(Node*parent);

public:
	bool AddChild(const Node*child);
	template <class T_Value>bool AddChild(T_Tag tag, T_Value value);
	bool RemoveChild(T_Tag tag);
	bool RemoveChild(Node*child);
	bool ClearChildren();

public:
	inline T_Val* operator=(std::nullptr_t);
	inline Node& operator[](T_Tag tag);
	inline const Node& operator[](T_Tag tag)const;
	
private:
	T_Tag tag;
	T_Val* value = nullptr;
	Node* parent = nullptr;
	Node** children = nullptr;
};

template <class T_Tag = DWORD>
class Tree
{
public:
	Tree();
	~Tree();

public:
	Node*GetRoot();
	inline const Node*GetRoot()const;
	inline T_Tag GetTag()const;
	inline Node*GetChild(T_Tag tag);
	inline const Node*GetChild(T_Tag tag)const;
	Tree*GetChildTree(T_Tag tag);
	inline const Tree*GetChildTree(T_Tag tag)const;
	inline Node*GetParent();
	inline const Node*GetParent()const;
	Tree*GetParentTree();
	inline const Tree*GetParentTree()const;

public:
	// Recursion traversal
	// 先序遍历（深度优先遍历）
	Iterator_Tree<T_Tag> GetPreorderTraversal(T_Tag first);
	inline const Iterator_Tree<T_Tag> GetPreorderTraversal(T_Tag first)const;
	// 后序遍历
	Iterator_Tree<T_Tag> GetPostorderTraversal(T_Tag first);
	inline const Iterator_Tree<T_Tag> GetPostorderTraversal(T_Tag first)const;

	// Un-recursion-able traversal
	// 逐层遍历（广度优先遍历）
	Iterator_Tree<T_Tag> GetLayerorderTraversal(T_Tag first);
	inline const Iterator_Tree<T_Tag> GetLayerorderTraversal(T_Tag first)const;
	// 随机遍历
	Iterator_Tree<T_Tag> GetRandomTraversal();
	inline const Iterator_Tree<T_Tag> GetRandomTraversal()const;

public:
	inline static const Iterator_Tree<T_Tag> End();
	inline bool operator==(std::nullptr_t);
	inline bool operator!=(std::nullptr_t);
	inline operator bool();
	inline bool operator!(); 

private:
	Node* root = nullptr;

	AA_FORBID_ASSGN_OPR(Tree);
	AA_FORBID_COPY_CTOR(Tree);
};

template <class T_Tag = DWORD>
class Iterator_Tree
{
public:
	enum class TraversalType
	{
		Unknown,
		PreorderTraversal,	//先序遍历
		InorderTraversal,	//中序遍历
		PostorderTraversal,	//后序遍历,	
		LayerorderTraversal,//逐层遍历
		RandomTraversal		//随机遍历
	};

public:
	Iterator_Tree(TraversalType type, const Tree&tree);
	Iterator_Tree(const Iterator_Tree&value);
	Iterator_Tree&operator=(const Iterator_Tree&value);
	~Iterator_Tree();

public:


private:
	Tree<T_Tag>*tree = nullptr;
};

} // ArmyAnt

#endif