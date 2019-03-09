//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
using namespace std;
template<class T1,class T2>
class Person8
{
public:
    Person8(T1 name, T2 age);
//    {
//        this->name=name;
//        this->age=age;
//    }

    void showPerson() const;
//    {
//        cout<<"name: "<<this->name<<endl;
//        cout<<"age: "<<this->age<endl;
//    }
    T1 name;
    T2 age;
};

//类外实现成员函数
template <class T1,class T2>
Person8<T1,T2>::Person8(T1 name, T2 age)
{
    this->name=name;
    this->age=age;
}

template <class T1,class T2>
void Person8<T1,T2>::showPerson() const
{
    cout<<"name: "<<this->name<<endl;
    cout<<"age: "<<this->age<<endl;
}

void test801()
{
    Person8<string,int> p(" \b外星人",100);
    p.showPerson();
}


int main8()
{
    test801();
    return 0;
}
