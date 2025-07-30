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
	CListIterator() : m_current(), m_list(nullptr) {};

private:
	TNode* m_current;
	CList* m_list;
};

// * STL List 구현
template <typename T>
class CList
{
public:
	// 생성자
	CList<T>() : m_headNode(nullptr), m_tailNode(nullptr), m_iterator(nullptr) {};

	// 복사 생성자
	CList<T>(const CList& list) : m_headNode(nullptr), m_tailNode(nullptr), m_iterator(nullptr)
	{
		m_headNode = list.m_headNode;

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


private:
	TNode* m_headNode;
	TNode* m_tailNode;

	CListIterator* m_iterator;
};

#endif