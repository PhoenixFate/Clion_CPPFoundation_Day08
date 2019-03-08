//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
using  namespace std;

template <class T1,class T2=int>//类模板可以有默认类型
class Person6
{
public:
    Person6(T1 name,T2 age):name(name),age(age)
    {
    }
    void showPerson()
    {
        cout<<"name: "<<this->name<<endl;
        cout<<"age: "<<this->age<<endl;
    }
    T1 name;
    T2 age;
};

//1.指定传入类型
void doWork(Person6<string,int> &p)
{
    p.showPerson();
}

void test601()
{
    Person6<string,int> p(" \b猪八戒",20);
    doWork(p);
}

//2.参数模块化
template<class T1,class T2>
void doWork2(Person6<T1,T2> &p)
{
    cout<< typeid(T1).name()<<endl;
    cout<< typeid(T2).name()<<endl;
    p.showPerson();
}

void test602()
{
    Person6<string,int> p(" \b沙和尚",80);
    doWork2(p);
}

//3.整体模板化
template<class T>
void doWork3(T &p)
{
    cout<< typeid(T).name()<<endl;
    p.showPerson();
}

void test603()
{
    Person6<string,int> p(" \b白龙马",100);
    doWork3(p);
}

int main()
{
    test601();
    test602();
    test603();
    return 0;
}
