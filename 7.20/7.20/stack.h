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
    //container����������������vector������list������deque
    class stack
    {
    public:
        void push(const T& val)//��ջ
        {
            _con.push_back(val);
        }
        void pop()//��ջ
        {
            _con.pop_back();
        }
        T& top()//��ȡջ��Ԫ��
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
        //���������з�װ
    };
    void test1()
    {
        stack<int, vector<int>> s;
        //�����鹹�ɵ�ջ
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

        //�������ɵ�ջ
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
        //�����鹹�ɵ�ջ
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

        //�������ɵ�ջ
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
