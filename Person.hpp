//
// Created by phoenix on 3/8/2019.
//

#ifndef CLION_CPPFOUNDATION_DAY08_PERSON_H
#define CLION_CPPFOUNDATION_DAY08_PERSON_H
#include<iostream>
using namespace std;

template<class T1,class T2>
class Person
{
public:
    Person(T1 name,T2 age);
    void showPerson() const;
    T1 name;
    T2 age;
};

template <class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
    this->name=name;
    this->age=age;
}

template<class T1,class T2>
void Person<T1,T2>::showPerson() const
{
    cout<<"name: "<<this->name<<endl;
    cout<<"age: "<<this->age<<endl;
}


#endif //CLION_CPPFOUNDATION_DAY08_PERSON_H
