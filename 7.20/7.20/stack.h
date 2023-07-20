#pragma once
#include <stack>
#include <deque>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

namespace tao
{
    template<class T, class container=deque<T>>
    //container容量适配器可以是vector可以是list可以是deque
    class stack
    {
    public:
        void push(const T& val)//入栈
        {
            _con.push_back(val);
        }
        void pop()//出栈
        {
            _con.pop_back();
        }
        T& top()//获取栈顶元素
        {
            return _con.back();
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
        //对容器进行封装
    };
    void test1()
    {
        stack<int, vector<int>> s;
        //用数组构成的栈
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;

        //用链表构成的栈
        stack<int, list<int>> l;
        l.push(1);
        l.push(2);
        l.push(3);
        l.push(4);
        l.push(5);
        while (!l.empty())
        {
            cout << l.top() << " ";
            l.pop();
        }
        cout << endl;

    }
    void test2()
    {
        stack<int> s;
        //用数组构成的栈
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;

        //用链表构成的栈
        stack<int> l;
        l.push(1);
        l.push(2);
        l.push(3);
        l.push(4);
        l.push(5);
        while (!l.empty())
        {
            cout << l.top() << " ";
            l.pop();
        }
        cout << endl;
    }
};
