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
	CListIterator<T>() : m_current(), m_list(nullptr) {};

private:
	TNode<T>* m_current;
	CList<T>* m_list;
};

// * STL List ����
template <typename T>
class CList
{
public:
	// ������
	CList<T>() : m_headNode(nullptr), m_tailNode(nullptr), m_iterator(nullptr) {};
	CList<T>(int count)
	{
		while (count--)
		{

		}
	}
	CList<T>(TNode<T> node, int count)
	{
		while (count--)
		{

		}
	}

	// ���� ������
	CList<T>(const CList& list)
	{
		m_headNode = new TNode<T>(list.m_headNode);
		while (m_iterator->m_current)
		{

		}
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

	void assign(int count, TNode<> node)
	{

	};

private:
	TNode<T>* m_headNode;
	TNode<T>* m_tailNode;

	CListIterator<T>* m_iterator;
};

#endif