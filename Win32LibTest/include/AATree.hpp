#ifndef A_A_TREE_HPP_2015_12_26
#define A_A_TREE_HPP_2015_12_26
#include <functional>

namespace  ArmyAnt{

template <class T>
class Node
{
public:
	Node(T element);
	~Node();

public:

	
private:
	T* value = nullptr;
	Node* parent = nullptr;
	Node** children = nullptr;
};

typedef std::function<void(void*node, void*param)> BrowseFunc;

template <class T>
class Tree
{
public:
	Tree();
	~Tree();

public:


private:
	Node* root = nullptr;
};




} // ArmyAnt

#endif