#include "TNode.h"

#ifndef STL_LIST_H
#define STL_LIST_H

using namespace std;

// ���� ����
template <typename T>
class CList;

// * List Iterator ����
template <typename T>
class CListIterator
{
public:
	CListIterator() : m_current(), m_list(nullptr) {};

private:
	TNode* m_current;
	CList* m_list;
};

// * STL List ����
template <typename T>
class CList
{
public:
	// ������
	CList<T>() : m_headNode(nullptr), m_tailNode(nullptr), m_iterator(nullptr) {};

	// ���� ������
	CList<T>(const CList& list) : m_headNode(nullptr), m_tailNode(nullptr), m_iterator(nullptr)
	{
		m_headNode = list.m_headNode;

	};

	// �̵� ������
	CList<T>(CLIst&& list)
	{


	};

	// �Ҹ���
	~CList<T>()
	{

	};

	// ���
	void push_front()
	{

	};

	void push_back()
	{

	};


private:
	TNode* m_headNode;
	TNode* m_tailNode;

	CListIterator* m_iterator;
};

#endif