cmake_minimum_required(VERSION 3.13)
project(Clion_CPPFoundation_Day08)

set(CMAKE_CXX_STANDARD 14)

add_executable(Clion_CPPFoundation_Day08 "01 函数模板的基本用法.cpp" "02 课堂练习-利用函数模板实现char和int数组的排序.cpp" "03 函数模板和普通函数的区别及调用规则.cpp" "04 模板的局限性以及解决.cpp" 05类模板的基本使用.cpp "06 类模板作函数的参数.cpp" "07 类模板遇到继承的问题.cpp" "08  类模板类外实现成员函数.cpp" "09 类模板分文件编写问题及解决.cpp" Person.hpp Person.cpp "10 类模板遇到友元函数-类内实现.cpp" "11 类模板遇到友元函数-类外实现.cpp" "12 类模板的应用-数组类的封装.cpp")