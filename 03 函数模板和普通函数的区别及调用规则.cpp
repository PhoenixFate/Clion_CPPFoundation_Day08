//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
using  namespace std;

//1.普通函数和函数模板的区别
template <class T>
T myPlus3(T a,T b)
{
    return a+b;
}

int myPlus32(int a,int b)
{
    return a+b;
}

void test301()
{
    int a=10;
    int b=20;
    myPlus3(a,b);//只能同类型，int和char不行
    char c='c';
    cout<<myPlus32(a,c)<<endl;//普通函数可以进行隐式类型转换
}

template<class T>
void myPrint2(T a,T b)
{
    cout<<"template print: "<<endl;
}

template<class T>
void myPrint2(T a,T b,T c)
{
    cout<<"template print with 3 parameters: "<<endl;
}


void myPrint2(int a,int b)
{
    cout<<"function print:"<<endl;
}

void test302()
{
    int a=10;
    int b=20;
    //如果出现重载，优先使用普通函数重载
    myPrint2(a,b);

    //如果向强制调用模板，可以使用空参数列表
    myPrint2<>(a,b);
    myPrint2<int>(a,b);

    int c=50;
    //函数模板也可以发生重载
    myPrint2(a,b,c);


    //4.如果函数模板可以产生更好的匹配，则优先调用函数模板
    char e='a';
    char f='b';
    myPrint2(e,f);

}

int main3()
{
    test301();
    test302();
    return 0;
}
