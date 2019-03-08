//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
#include <string>
using namespace std;

template<class T1,class T2>
class Person10
{
    //友元函数类内实现
    //友元函数类内实现默认为全局函数
    friend void PrintPerson(Person10<T1,T2> &p)
    {
        cout<<"name:"<<p.name<<"   age: "<<p.age<<endl;
    }
public:
    Person10(T1 name,T2 age)
    {
        this->name=name;
        this->age=age;
    }
    T1 name;
    T2 age;
};

void test1001()
{
    Person10<string,int> p(" \b大熊猫",99);
    PrintPerson(p);
}

int main10()
{
    test1001();
    return 0;
}

