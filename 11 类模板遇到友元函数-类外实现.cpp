//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
#include <string>
using namespace std;

template<class T1,class T2> class Person11;
template<class T1,class T2> void PrintPerson(Person11<T1,T2> &p);

template<class T1,class T2>
class Person11
{
    //友元函数类外实现
    //不写PrintPerson后面的<>编译器认为是普通函数,所以必须加<>强制调用模板函数
    friend void PrintPerson<>(Person11<T1,T2> &p);
public:
    Person11(T1 name,T2 age)
    {
        this->name=name;
        this->age=age;
    }
    T1 name;
    T2 age;
};

//模板函数的实现
template<class T1,class T2>
void PrintPerson(Person11<T1,T2> &p)
{
    cout<<"name:"<<p.name<<"   age: "<<p.age<<endl;
}

void test1101()
{
    Person11<string,int> p(" \b大熊猫",99);
    PrintPerson(p);
}

int main11()
{
    test1101();
    return 0;
}

