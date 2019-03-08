//
// Created by phoenix on 3/8/2019.
//

#include <iostream>
using  namespace std;

template <class T>
class Base1
{
public:
    int a;
};


//child 继承Base，必须告诉Base中T的类型，否则无法分配内存
class Child1:public Base1<int>
{
public:

};

//child2 也是模板类
template <class T1,class T2>
class Child2:public Base1<T2>
{
public:
    Child2()
    {
        cout<< typeid(T1).name()<<endl;
        cout<< typeid(T2).name()<<endl;
    }
    T1 b;
};

void test701()
{
    Child2<int ,double> c;//由用户指定类型
    cout<<c.b<<endl;
}

int main7()
{
    test701();
    return 0;
}