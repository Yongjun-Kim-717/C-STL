#include "TNode.h"

#ifndef STL_LIST_H
#define STL_LIST_H

using namespace std;

// 전방 선언
template <typename T>
class CList;

// * List Iterator 구현
template <typename T>
class CListIterator
{
public:
	CListIterator<T>() : m_current(), m_list(nullptr) {};

private:
	TNode<T>* m_current;
	CList<T>* m_list;
};

// * STL List 구현
template <typename T>
class CList
{
public:
	// 생성자
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

	// 복사 생성자
	CList<T>(const CList& list)
	{
		m_headNode = new TNode<T>(list.m_headNode);
		while (m_iterator->m_current)
		{

		}
	};

	// 이동 생성자
	CList<T>(CLIst&& list)
	{


	};

	// 소멸자
	~CList<T>()
	{

	};

	// 기능
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