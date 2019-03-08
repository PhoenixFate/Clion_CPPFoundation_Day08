//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
#include <string>
using  namespace std;

class Person4
{
public:
    Person4(string name,int age):name(name),age(age)
    {

    }

public:
    string name;
    int age;
};

template<class T>
bool myCompare(T &a,T &b)
{
    if(a==b)
    {
        return true;
    }
    return false;
}

//通过具体化自定义数据类型，解决上述问题
//如果具体化可以匹配，则优先具体化
template<>
bool myCompare<Person4>(Person4 &p1,Person4 &p2)
{
    if(p1.name==p2.name && p1.age==p2.age)
    {
        return true;
    }
    return false;

}
void test401()
{
    int a=10;
    int b=20;
    bool ret=myCompare(a,b);
    cout<<ret<<endl;
    Person4 p1("abc",50);
    Person4 p2("ttt",10);
    int ret2=myCompare(p1,p2);//优先匹配具体化的
    cout<<ret2<<endl;
    cout<<true<<endl;
}

int main4()
{
    test401();
    return 0;
}
