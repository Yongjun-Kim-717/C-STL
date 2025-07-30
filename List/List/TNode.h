#ifndef NODE_H
#define NODE_H

using namespace std;

// * Node
template <typename T>
class TNode
{
public:
	TNode<T>() : m_data(), m_prev(nullptr), m_next(nullptr) {};
	TNode<T>(const TNode& node)
	{
		m_data = node.m_data;
		m_prev = node.m_prev;
		m_next = node.m_next;
	};

	TNode<T>(TNode&& node)
	{

	};

	~TNode<T>()
	{

	};

	// 대입 연산자 오버로딩
	TNode<T>& operator=(const TNode& node)
	{
		if (this != &node)
		{
			m_data = node.m_data;
			m_prev = node.m_prev;
			m_next = node.m_next;
		}
		return *this;
	}

private:
	T m_data;
	TNode<T>* m_prev;
	TNode<T>* m_next;
};

#endif