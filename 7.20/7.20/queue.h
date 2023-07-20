#pragma once
#include <vector>
#include <list>
#include <deque>
#include <iostream>

using namespace std;

namespace tao
{
	template<class T,class container=deque<T>>
	class queue
	{
	public:
		void push(const T& val)//�����
		{
			_con.push_back(val);
		}
		void pop()//������
		{
			_con.pop_front();
		}
		T& top()//��ȡ��ͷ����
		{
			return _con.front();
		}
		size_t size()
		{
			return _con.size();
		}
		bool empty()
		{
			return _con.empty();
		}
	private:
		container _con;
	};
	void test3()
	{
		queue<int, list<int>> q;
		q.push(1);
		q.push(2);
		q.push(3);
		q.push(4);
		while (!q.empty())
		{
			cout << q.top() << " ";
			q.pop();
		}
		cout << endl;
	}
};