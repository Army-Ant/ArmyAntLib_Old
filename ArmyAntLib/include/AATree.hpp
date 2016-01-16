#ifndef A_A_TREE_HPP_2015_12_26
#define A_A_TREE_HPP_2015_12_26

#include "AADefine.h"
#include <functional>

namespace  ArmyAnt {

typedef std::function<void(void*node, void*param)> BrowseFunc;

template <class T_Val, class T_Tag = DWORD>
class TreeNode;
template <class T_Val, class T_Tag = DWORD>
class Tree;
template <class T_Val, class T_Tag = DWORD>
class Iterator_Tree;

template <class T_Val, class T_Tag>
class TreeNode
{
public:
	//���ݼ�ֵ�Դ����ڵ�
	TreeNode(T_Val&element, T_Tag tag);
	//���ƽڵ�,���Ḵ�Ƹ��ڵ��ϵ
	TreeNode(const TreeNode<T_Val, T_Tag>&value, bool withChildren = false);
	//�����ڵ�����,���Ḵ�Ƹ��ڵ��ϵ,���Ḵ��ȫ���ӽڵ�
	TreeNode<T_Val, T_Tag>&operator=(const TreeNode<T_Val, T_Tag>&value);
	//��������
	virtual ~TreeNode();

public:
	//ȡ�ýڵ�ļ�
	T_Tag GetTag()const;
	//ȡ�ýڵ��ֵ����
	T_Val*GetValue();
	inline const T_Val*GetValue()const;
	//ȡ�ýڵ����ڵĸ��ڵ�
	TreeNode<T_Val, T_Tag>*GetParent();
	inline const TreeNode<T_Val, T_Tag>*GetParent()const;
	//ȡ�ýڵ��ָ������Ӧ���ӽڵ�
	TreeNode<T_Val, T_Tag>*GetChild(T_Tag tag);
	inline const TreeNode<T_Val, T_Tag>*GetChild(T_Tag tag)const;
	//ȡ�õ�һ���ӽڵ�
	TreeNode<T_Val, T_Tag>*GetFirstChild();
	inline const TreeNode<T_Val, T_Tag>* GetFirstChild()const;
	//ȡ�����һ���ӽڵ�
	TreeNode<T_Val, T_Tag>*GetLastChild();
	inline const TreeNode<T_Val, T_Tag>* GetLastChild()const;
	//ȡ��λ��ĳ���ڵ�֮����ӽڵ�
	TreeNode<T_Val, T_Tag>*GetNextChild(T_Tag tag);
	inline const TreeNode<T_Val, T_Tag>*GetNextChild(T_Tag tag)const;
	//ȡ��λ��ĳ���ڵ�֮ǰ���ӽڵ�
	TreeNode<T_Val, T_Tag>*GetBackChild(T_Tag tag);
	inline const TreeNode<T_Val, T_Tag>*GetBackChild(T_Tag tag)const;
	//ȡ�������ӽڵ�,�����ӽڵ����
	T_Tag GetChildren(TreeNode<T_Val, T_Tag>*children);

public:
	//ȡ�����ڵ���
	Tree<T_Val, T_Tag> GetTree();
	inline const Tree<T_Val, T_Tag> GetTree()const;
	//�޸ļ�
	bool SetTag(T_Tag tag);
	//�޸�ֵ����
	bool SetValue(T_Val&value);
	//����ֵ����
	bool SetValue();
	//�Ӹ��ڵ�͸������Ƴ�
	bool RemoveFromParent();
	//��ӵ�ĳ���ڵ�֮��(���ԭ���и��ڵ�,����ȴӸ��ڵ����Ƴ�)
	bool SetParent(TreeNode<T_Val, T_Tag>*parent);

public:
	//���һ���ӽڵ�(�������ӵĽڵ�ԭ���и��ڵ�,����ȴӸ��ڵ����Ƴ�)
	bool AddChild(const TreeNode<T_Val, T_Tag>*child);
	//��ָ��������,�½�һ���ӽڵ�
	bool AddChild(T_Tag tag, T_Val value);
	//�Ƴ�ָ������Ӧ���ӽڵ�
	bool RemoveChild(T_Tag tag);
	//�Ƴ�ָ���ӽڵ�
	bool RemoveChild(const TreeNode<T_Val, T_Tag>*child);
	//�Ƴ������ӽڵ�
	bool ClearChildren();

public:
	//��սڵ�ֵ����
	inline T_Val* operator=(std::nullptr_t);
	//��ȡָ�������Ľڵ�
	inline TreeNode<T_Val, T_Tag>* operator[](T_Tag tag);
	inline const TreeNode<T_Val, T_Tag>* operator[](T_Tag tag)const;

private:
	//��
	T_Tag tag;
	//ֵ
	T_Val* value = nullptr;
	//���ڵ�
	TreeNode<T_Val, T_Tag>* parent = nullptr;
	//�ӽڵ�����
	std::vector<TreeNode<T_Val, T_Tag>*> children;
};

template <class T_Val, class T_Tag>
class Tree
{
public:
	Tree();
	Tree(TreeNode<T_Val, T_Tag>* root);
	virtual ~Tree();

public:
	//ȡ�ø��ڵ�
	TreeNode<T_Val, T_Tag>*GetRoot();
	inline const TreeNode<T_Val, T_Tag>*GetRoot()const;
	//ȡ�ø��ڵ�ļ�
	inline T_Tag GetTag()const;
	//ȡ�����о���ָ�����������ӽڵ�,����ȡ�õ��ܸ���
	int GetChild(T_Tag tag, TreeNode<T_Val, T_Tag>**rets);
	//ȡ�õ�һ����Ѱ���ľ���ָ�������ӽڵ�,��Ѱ��ʽΪ������
	TreeNode<T_Val, T_Tag>*GetFirstChild(T_Tag tag);
	inline const TreeNode<T_Val, T_Tag>*GetFirstChild(T_Tag tag)const;
	//��ȡ����,����Ѱ���ڵ���ӽڵ�
	Tree<T_Val, T_Tag>*GetChildTree(T_Tag tag);
	inline const Tree<T_Val, T_Tag>*GetChildTree(T_Tag tag)const;
	//��ȡ���ĸ��ڵ�,���û��,����nullptr
	inline TreeNode<T_Val, T_Tag>*GetParent();
	inline const TreeNode<T_Val, T_Tag>*GetParent()const;
	//��ȡ����,���û��,����nullptr
	Tree<T_Val, T_Tag>*GetParentTree();
	inline const Tree<T_Val, T_Tag>*GetParentTree()const;

public:
	// Recursion traversal, �ɵݹ�ı����㷨
	// ���������������ȱ�����
	Iterator_Tree<T_Val, T_Tag> GetPreorderTraversal(T_Tag first);
	inline const Iterator_Tree<T_Val, T_Tag> GetPreorderTraversal(T_Tag first)const;
	// �������
	Iterator_Tree<T_Val, T_Tag> GetPostorderTraversal(T_Tag first);
	inline const Iterator_Tree<T_Val, T_Tag> GetPostorderTraversal(T_Tag first)const;

	// Un-recursion-able traversal, ���ɵݹ�ı����㷨
	// ��������������ȱ�����
	Iterator_Tree<T_Val, T_Tag> GetLayerorderTraversal(T_Tag first);
	inline const Iterator_Tree<T_Val, T_Tag> GetLayerorderTraversal(T_Tag first)const;
	// �������
	Iterator_Tree<T_Val, T_Tag> GetRandomTraversal();
	inline const Iterator_Tree<T_Val, T_Tag> GetRandomTraversal()const;

public:
	//��ȡһ���յĵ�����,Ҳ����ĩβ
	inline const Iterator_Tree<T_Val, T_Tag> End() const;

private:
	//���ڵ�
	TreeNode<T_Val, T_Tag>* root = nullptr;

	AA_FORBID_ASSGN_OPR(Tree);
	AA_FORBID_COPY_CTOR(Tree);
};

//������ʽ
enum class TraversalType : BYTE
{
	Unknown,
	PreorderTraversal,	//���������������ȱ�����
	InorderTraversal,	//�������
	PostorderTraversal,	//�������	
	LayerorderTraversal,//��������������ȱ�����
	RandomTraversal		//�������
};

template <class T_Val, class T_Tag>
class Iterator_Tree
{
public:
	//�����ͱ�����ʽ����������,�Ƕ���������ʹ���������
	Iterator_Tree(TraversalType type, const Tree<T_Val, T_Tag>&tree);
	//���Ƶ�����
	Iterator_Tree(const Iterator_Tree<T_Val, T_Tag>&value);
	//���Ƶ�������ֵ
	Iterator_Tree&operator=(const Iterator_Tree<T_Val, T_Tag>&value);
	//��������
	virtual ~Iterator_Tree();

public:
	//���������չ涨�ı�����ʽ,��ת����һ��
	inline bool Next();
	//��������ת����һ��
	inline bool Back();
	//�жϵ������Ƿ��ڿ�ͷ(���������Զ����false)
	bool IsBegin();
	//�жϵ������Ƿ��ڽ�β
	bool IsEnd();

public:
	//��ȡ��������������
	Tree<T_Val, T_Tag>* GetTree();
	const Tree<T_Val, T_Tag>* GetTree()const;
	//��ȡ������ָ��Ľڵ�
	TreeNode<T_Val, T_Tag>* GetNode();
	const TreeNode<T_Val, T_Tag>* GetNode()const;
	//��ȡ�������ı�����ʽ
	TraversalType GetTraversalType()const;
	//����������ı�����ʽ
	bool SetTraversalType(TraversalType type);
	//�����������������ָ�Ľڵ�,����������ָ��ýڵ����һ��Ŀ��
	bool Erase();

public:
	//����������Ƿ�Ϊĩβ
	inline bool operator==(std::nullptr_t);
	inline bool operator!=(std::nullptr_t);
	inline operator bool();
	inline bool operator!();
	inline TreeNode<T_Val, T_Tag>& operator*();
	inline const TreeNode<T_Val, T_Tag>& operator*()const;
	inline const TreeNode<T_Val, T_Tag>* operator->()const;

private:
	bool Go(bool isNext);

private:
	TraversalType type = TraversalType::Unknown;
	Tree<T_Val, T_Tag>*tree = nullptr;
	TreeNode<T_Val, T_Tag>* nownode = nullptr;
};


/******************************* Source : TreeNode ***********************************************************/


template <class T_Val, class T_Tag /*= DWORD*/>
TreeNode<T_Val, T_Tag>::TreeNode(T_Val&element, T_Tag tag)
	:tag(tag), value(&element), parent(nullptr), children()
{
}

template <class T_Val, class T_Tag /*= DWORD*/>
TreeNode<T_Val, T_Tag>::TreeNode(const TreeNode<T_Val, T_Tag>&value, bool withChildren/* = false*/)
	: tag(value.tag), value(&value.value), parent(nullptr), children()
{
	this->children.clear();
	if(withChildren)
		for(auto i = value.children, begin(); i != value.children.end(); i++)
		{
			children.push_back(*i);
		}
}

template <class T_Val, class T_Tag /*= DWORD*/>
TreeNode<T_Val, T_Tag>& TreeNode<T_Val, T_Tag>::operator=(const TreeNode<T_Val, T_Tag>&value)
{
	this->tag = value.tag;
	this->value = value.value;
	this->children.clear();
	for(auto i = value.children, begin(); i != value.children.end(); i++)
	{
		children.push_back(*i);
	}
}

template <class T_Val, class T_Tag /*= DWORD*/>
TreeNode<T_Val, T_Tag>::~TreeNode()
{
}

template<class T_Val, class T_Tag>
T_Tag TreeNode<T_Val, T_Tag>::GetTag() const
{
	return tag;
}

template<class T_Val, class T_Tag>
T_Val * TreeNode<T_Val, T_Tag>::GetValue()
{
	return value;
}

template<class T_Val, class T_Tag>
const T_Val * TreeNode<T_Val, T_Tag>::GetValue() const
{
	return value;
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetParent()
{
	return parent;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetParent() const
{
	return parent;
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetChild(T_Tag tag)
{
	for(auto i = children.begin(); i != children.end(); i++)
	{
		if(i->tag == tag)
			return &*i;
	}
	return nullptr;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetChild(T_Tag tag) const
{
	return const_cast(this)->GetChild(tag);
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetFirstChild()
{
	if(children.empty())
		return nullptr;
	return children[0];
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetFirstChild() const
{
	if(children.empty())
		return nullptr;
	return children[0];
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag>* TreeNode<T_Val, T_Tag>::GetLastChild()
{
	if(children.empty())
		return nullptr;
	return children[children.size()-1];
}

template<class T_Val, class T_Tag>
inline const TreeNode<T_Val, T_Tag>* TreeNode<T_Val, T_Tag>::GetLastChild() const
{
	if(children.empty())
		return nullptr;
	return children[children.size() - 1];
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetNextChild(T_Tag tag)
{
	if(children.empty())
		return nullptr;
	for(auto i = children.begin(); i != children.end(); i++)
	{
		if(i->tag == tag)
			if(++i == children.end())
				return GetFirstChild();
			else
				return *i;
	}
	return nullptr;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetNextChild(T_Tag tag) const
{
	return const_cast(this)->GetNextChild(tag);
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetBackChild(T_Tag tag)
{
	if(children.empty())
		return nullptr;
	for(auto i = children.begin(); i != children.end(); i++)
	{
		if(i->tag == tag)
			if(i == children.begin())
				return children.back();
			else
				return --i;
	}
	return nullptr;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::GetBackChild(T_Tag tag) const
{
	return const_cast(this)->GetBackChild(tag);
}

template<class T_Val, class T_Tag>
T_Tag TreeNode<T_Val, T_Tag>::GetChildren(TreeNode<T_Val, T_Tag> * children)
{
	for(auto i = this.children.begin(); i != this->children.end(); i++)
	{
		children[i] = *i;
	}
	return this->children.size();
}

template<class T_Val, class T_Tag>
Tree<T_Val, T_Tag> TreeNode<T_Val, T_Tag>::GetTree()
{
	return Tree<T_Tag>(this);
}

template<class T_Val, class T_Tag>
const Tree<T_Val, T_Tag> TreeNode<T_Val, T_Tag>::GetTree() const
{
	return const_cast(this)->GetTree();
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::SetTag(T_Tag tag)
{
	this->tag = tag;
	return true;
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::SetValue(T_Val & value)
{
	this->value = &value;
	return true;
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::SetValue()
{
	this->value = nullptr;
	return true;
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::RemoveFromParent()
{
	return this->parent->RemoveChild(this);
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::SetParent(TreeNode<T_Val, T_Tag> * parent)
{
	return parent->AddChild(this);
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::AddChild(const TreeNode<T_Val, T_Tag> * child)
{
	if(child->parent != nullptr && !child->RemoveFromParent())
		return false;
	children.push_back(child);
	child->parent = this;
	return true;
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::AddChild(T_Tag tag, T_Val value)
{
	children.push_back(TreeNode(tag, value));
	return true;
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::RemoveChild(T_Tag tag)
{
	for(auto i = this.children.begin(); i != this->children.end();)
	{
		if(i->tag == tag)
		{
			i->parent = nullptr;
			i = children.erase(i);
			return true;
		}
		else
			i++;
	}
	return false;
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::RemoveChild(const TreeNode<T_Val, T_Tag> * child)
{
	for(auto i = this.children.begin(); i != this->children.end();)
	{
		if(&*i == child)
		{
			i->parent = nullptr;
			i = children.erase(i);
			return true;
		}
		else
			i++;
	}
	return false;
}

template<class T_Val, class T_Tag>
bool TreeNode<T_Val, T_Tag>::ClearChildren()
{
	for(auto i = this.children.begin(); i != this->children.end(); i++)
	{
		i->parent = nullptr;
	}
	children.clear();
	return true;
}

template<class T_Val, class T_Tag>
T_Val * TreeNode<T_Val, T_Tag>::operator=(std::nullptr_t)
{
	value = nullptr;
	return nullptr;
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::operator[](T_Tag tag)
{
	return GetChild(tag);
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * TreeNode<T_Val, T_Tag>::operator[](T_Tag tag) const
{
	return GetChild(tag);
}


/******************************* Source : Tree ***************************************************************/


template<class T_Val, class T_Tag>
Tree<T_Val, T_Tag>::Tree()
	:root(nullptr)
{
}

template<class T_Val, class T_Tag>
Tree<T_Val, T_Tag>::Tree(TreeNode<T_Val, T_Tag> * root)
	: root(root)
{
}

template<class T_Val, class T_Tag>
Tree<T_Val, T_Tag>::~Tree()
{
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetRoot()
{
	return root;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetRoot() const
{
	return root;
}

template<class T_Val, class T_Tag>
T_Tag Tree<T_Val, T_Tag>::GetTag() const
{
	return tag;
}

template<class T_Val, class T_Tag>
int Tree<T_Val, T_Tag>::GetChild(T_Tag tag, TreeNode<T_Val, T_Tag>**rets)
{
	if(root == nullptr)
		return 0;
	auto ret = std::vector<TreeNode<T_Val, T_Tag>*>();
	for(auto i = GetLayerorderTraversal(root->tag); i != End(); i++)
	{
		if(i->tag == tag)
			ret.push_back(&*i);
	}
	for(int i = 0; i < ret.size(); i++)
		rets[i] = ret[i];
	return ret.size();
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetFirstChild(T_Tag tag)
{
	for(auto i = GetLayerorderTraversal(root->tag); i != End(); i++)
	{
		if(i->tag == tag)
			return &*i;
	}
	return nullptr;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetFirstChild(T_Tag tag) const
{
	return const_cast(this)->GetFirstChild(tag);
}

template<class T_Val, class T_Tag>
Tree<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetChildTree(T_Tag tag)
{
	if(root->GetChild(tag) != nullptr)
		return Tree(root->GetChild(tag));
	return nullptr;
}

template<class T_Val, class T_Tag>
const Tree<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetChildTree(T_Tag tag) const
{
	return const_cast(this)->GetChildTree(tag);
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetParent()
{
	return root->GetParent();
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetParent() const
{
	return root->GetParent();
}

template<class T_Val, class T_Tag>
Tree<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetParentTree()
{
	if(root->GetParent() != nullptr)
		return Tree(root->GetParent());
	return nullptr;
}

template<class T_Val, class T_Tag>
const Tree<T_Val, T_Tag> * Tree<T_Val, T_Tag>::GetParentTree() const
{
	if(root->GetParent() != nullptr)
		return Tree(root->GetParent());
	return nullptr;
}

template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::GetPreorderTraversal(T_Tag first)
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::PreorderTraversal, this);
}

template<class T_Val, class T_Tag>
const Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::GetPreorderTraversal(T_Tag first) const
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::PreorderTraversal, this);
}

template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::GetPostorderTraversal(T_Tag first)
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::PostorderTraversal, this);
}

template<class T_Val, class T_Tag>
const Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::GetPostorderTraversal(T_Tag first) const
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::PostorderTraversal, this);
}

template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::GetLayerorderTraversal(T_Tag first)
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::LayerorderTraversal, this);
}

template<class T_Val, class T_Tag>
const Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::GetLayerorderTraversal(T_Tag first) const
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::LayerorderTraversal, this);
}

template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::GetRandomTraversal()
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::RandomTraversal, this);
}

template<class T_Val, class T_Tag>
const Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::GetRandomTraversal() const
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::RandomTraversal, this);
}

template<class T_Val, class T_Tag>
const Iterator_Tree<T_Val, T_Tag> Tree<T_Val, T_Tag>::End() const
{
	return Iterator_Tree<T_Val, T_Tag>(Iterator_Tree::TraversalType::Unknown, this);
}


/******************************* Source : Iterator_Tree ******************************************************/


template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag>::Iterator_Tree(TraversalType type, const Tree <T_Val, T_Tag>&tree)
	:tree(&tree), nownode(tree.root)
{
	if(type == TraversalType::InorderTraversal || type == TraversalType::PostorderTraversal)
		while(nownode->GetFirstChild() != nullptr)
			nownode = nownode->GetFirstChild();
}

template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag>::Iterator_Tree(const Iterator_Tree<T_Val, T_Tag> & value)
	:tree(value.tree),nownode(value.nownode)
{
}

template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag> & Iterator_Tree<T_Val, T_Tag>::operator=(const Iterator_Tree<T_Val, T_Tag> & value)
{
	tree = value.tree;
	nownode = value.nownode;
}

template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag>::~Iterator_Tree()
{
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::Next()
{
	return Go(true);
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::Back()
{
	return Go(false);
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::IsBegin()
{
	switch(type)
	{
		case TraversalType::PreorderTraversal:
		case TraversalType::LayerorderTraversal:
			return nownode == tree->GetRoot();
		case TraversalType::InorderTraversal:
		case TraversalType::PostorderTraversal:
			{
				auto tmp = nownode;
				if(nownode->GetFirstChild() != nullptr)
					return false;
				while(nownode->GetParent() != tree->GetRoot())
					nownode = nownode->GetParent();
				return nownode == tree->GetRoot()->GetFirstChild();
			}
		case TraversalType::RandomTraversal:
		case TraversalType::Unknown:
			return false;
		default:
			Assert(type <= TraversalType::RandomTraversal);
			return false;
	}
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::IsEnd()
{
	switch(type)
	{
		case TraversalType::PreorderTraversal:
		case TraversalType::InorderTraversal:
		case TraversalType::LayerorderTraversal:
		case TraversalType::PostorderTraversal:
			return nownode == nullptr;
		case TraversalType::RandomTraversal:
		case TraversalType::Unknown:
			return false;
		default:
			Assert(type <= TraversalType::RandomTraversal);
			return false;
	}
}

template<class T_Val, class T_Tag>
Tree<T_Val, T_Tag>* Iterator_Tree<T_Val, T_Tag>::GetTree()
{
	return tree;
}

template<class T_Val, class T_Tag>
const Tree<T_Val, T_Tag>* Iterator_Tree<T_Val, T_Tag>::GetTree() const
{
	return tree;
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag>* Iterator_Tree<T_Val, T_Tag>::GetNode()
{
	return nownode;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag>* Iterator_Tree<T_Val, T_Tag>::GetNode() const
{
	return nownode;
}

template<class T_Val, class T_Tag>
TraversalType Iterator_Tree<T_Val, T_Tag>::GetTraversalType() const
{
	return type;
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::SetTraversalType(TraversalType type)
{
	if(type > TraversalType::RandomTraversal)
		return false;
	this->type = type;
	return true;

}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::Erase()
{
	if(tree == nullptr || nownode == nullptr)
		return false;
	if(nownode == tree->GetRoot() && nownode->GetParent() == nullptr)
		return tree->GetRoot()->ClearChildren() && tree->GetRoot()->SetValue();
	return nownode->RemoveFromParent();
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::operator==(std::nullptr_t)
{
	return IsEnd();
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::operator!=(std::nullptr_t)
{
	return !operator==(nullptr);
}

template<class T_Val, class T_Tag>
Iterator_Tree<T_Val, T_Tag>::operator bool()
{
	return operator==(nullptr);
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::operator!()
{
	return operator!=(nullptr);
}

template<class T_Val, class T_Tag>
TreeNode<T_Val, T_Tag>& Iterator_Tree<T_Val, T_Tag>::operator*()
{
	return nownode;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag>& Iterator_Tree<T_Val, T_Tag>::operator*() const
{
	return nownode;
}

template<class T_Val, class T_Tag>
const TreeNode<T_Val, T_Tag>* Iterator_Tree<T_Val, T_Tag>::operator->() const
{
	return nownode;
}

template<class T_Val, class T_Tag>
bool Iterator_Tree<T_Val, T_Tag>::Go(bool isNext)
{
	if(tree == nullptr || nownode == nullptr)
		return false;
	switch(type)
	{
		case TraversalType::PreorderTraversal: // �������,������ȱ���
			if(isNext)
			{
				if(nownode->GetFirstChild() != nullptr)
					nownode = nownode->GetFirstChild();
				else if(nownode != tree->root)
				{
					while(nownode->GetParent()->GetNextChild(nownode->tag) == nullptr)
					{
						if(nownode == tree->root)
						{
							nownode = nullptr;
							break;
						}
						nownode = nownode->GetParent();
					}
					nownode = nownode->GetParent()->GetNextChild(nownode->tag);
				}
				else
					nownode = nullptr;
			}
			else
			{
				if(nownode == tree->root)
					return false;
				if(nownode->GetParent()->GetBackChild(nownode->GetTag()) != nullptr)
				{
					nownode = nownode->GetParent()->GetBackChild(nownode->GetTag());
					while(nownode->GetLastChild() != nullptr)
						nownode = nownode->GetLastChild();
				}
				else
					nownode = nownode->GetParent();
			}
			break;
		case TraversalType::PostorderTraversal: // �������,�������
			if(isNext)
			{
				if(nownode == tree->root)
					nownode = nullptr;
				else if(nownode->GetParent()->GetNextChild(nownode->tag) != nullptr)
				{
					nownode = nownode->GetParent()->GetNextChild(nownode->tag);
					while(nownode->GetFirstChild() != nullptr)
						nownode = nownode->GetFirstChild();
				}
				else
					nownode = nownode->GetParent();
			}
			else
			{
				if(nownode->GetLastChild() != nullptr)
					nownode = nownode->GetLastChild();
				else if(nownode != tree->root)
				{
					while(nownode->GetParent()->GetBackChild(nownode->tag) == nullptr)
					{
						if(nownode == tree->root)
						{
							return false;
							break;
						}
						nownode = nownode->GetParent();
					}
					nownode = nownode->GetParent()->GetBackChild(nownode->tag);
				}
				else
					return false;
			}
			break;
		case TraversalType::LayerorderTraversal: // ������,������ȱ���
			{
				//�Ȳ������ͬ��Ԫ��
				int depth = 0;
				auto ptr = nownode;
				while(ptr != tree->root)
				{
					depth++;
					ptr = ptr->GetParent();
				}
				const TreeNode<T_Val, T_Tag>* firstC = tree->root;
				std::vector<TreeNode<T_Val, T_Tag>*> coll;
				int nowdep = 0;
				while(firstC->GetFirstChild() != nullptr)
				{
					firstC = firstC->GetFirstChild();
					nowdep++;
				}
				while(firstC != tree->root)
				{
					if(nowdep == depth)
						coll.push_back(firstC);
					if(firstC->GetParent()->GetNextChild(firstC->tag) != nullptr)
					{
						firstC = firstC->GetParent()->GetNextChild(firstC->tag);
						while(firstC->GetFirstChild() != nullptr)
						{
							firstC = firstC->GetFirstChild()
								nowdep++;;
						}
					}
					else
					{
						firstC = firstC->GetParent();
						nowdep--;
					}
				}
				for(int i = 1; i < coll.size() - 1; i++)
				{
					if(nownode == coll[i])
					{
						nownode = coll[isNext ? (i + 1) : (i - 1)];
						return true;
					}
				}
				Assert(nownode != coll[coll.size() - 1] && nownode != coll[0]);
				nownode = nullptr;
				if(isNext)
				{
					if(nownode == coll[0])
						nownode = coll[0];
					else for(int i = 0; i < coll.size(); i++)
					{
						if(coll[i]->GetFirstChild() != nullptr)
						{
							nownode = coll[i]->GetFirstChild();
							break;
						}
					}
				}
				else
				{
					if(nownode == coll[coll.size() - 1])
						nownode = coll[coll.size() - 1];
					else if(nownode == tree->GetRoot())
						return false;
					else nownode = nownode->GetParent();
				}
			}
			break;
		case TraversalType::RandomTraversal: // �������,�������,�������޹�
			{
				const TreeNode<T_Val, T_Tag>* firstC = tree->root;
				std::vector<TreeNode<T_Val, T_Tag>*> coll;
				while(firstC->GetFirstChild() != nullptr)
				{
					firstC = firstC->GetFirstChild();
				}
				while(firstC != tree->root)
				{
					coll.push_back(firstC);
					if(firstC->GetParent()->GetNextChild(firstC->tag) != nullptr)
					{
						firstC = firstC->GetParent()->GetNextChild(firstC->tag);
						while(firstC->GetFirstChild() != nullptr)
							firstC = firstC->GetFirstChild();
					}
					else
						firstC = firstC->GetParent();
				}
				srand(time(nullptr));
				auto ret = rand() % coll.size();
				nownode = coll[ret];
			}
			break;
		case TraversalType::Unknown:
			nownode = nullptr;
			break;
		default:
			return false;
	}
	return true;
}

} // ArmyAnt

#endif