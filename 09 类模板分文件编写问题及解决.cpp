//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
#include "Person.hpp"
#include <string>
using namespace std;

//模板类不分文件编写，都统一写在.hpp中
void test901()
{
    Person<string,int> p(" \b沙僧",190);
    p.showPerson();
}

int main()
{
    test901();
    return 0;
}
