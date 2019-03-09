//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
#include <string>
using  namespace std;

template <class T1,class T2=int>//类模板可以有默认类型
class Person5
{
public:
    Person5(T1 name,T2 age):name(name),age(age)
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

void test501()
{
    //类模板不支持自动类型推导
    Person5<string,int> p(" \b孙悟空",100);
    p.showPerson();
}

class Person51
{
public:
    void showPerson1()
    {
        cout<<"showPerson1"<<endl;
    }
};

class Person52
{
public:
    void showPerson2()
    {
        cout<<"showPerson2"<<endl;
    }
};

template <class  T>
class MyClass
{
public:
    T obj;
    void fun1()
    {
        obj.showPerson1();
    }
    void fun2()
    {
        obj.showPerson2();
    }
};

void test502()
{
    MyClass<Person51> myClass;
    myClass.fun1();//成员函数在运行时才创建
}


int main5()
{
    test501();
    test502();
    return 0;
}

