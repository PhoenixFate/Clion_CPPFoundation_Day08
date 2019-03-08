//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:
    explicit MyArray(int capacity) //防止MyArray m=10;
    {
        this->capacity=capacity;
        this->size=0;
        this->address=new T[capacity];
    }
    MyArray(const MyArray & myArray)
    {
        this->capacity=myArray.capacity;
        this->size=myArray.size;
        for(int i=0;i<myArray.size;++i)
        {
            this->address[i]=myArray[i];
        }
    }
    ~MyArray()
    {
        if(this->address!=NULL)
        {
            delete[] this->address;
            this->address=NULL;
        }
    }
    MyArray&operator=(MyArray &myArray)
    {
        if(this->address!=NULL)
        {
            delete[] this->address;
            this->address=NULL;
        }
        this->capacity=myArray.capacity;
        this->size=myArray.size;
        for(int i=0;i<myArray.size;++i)
        {
            this->address[i]=myArray[i];
        }
    }

    T& operator[](int index)
    {
        return this->address[index];
    }

    void pushBack(T& value)
    {
        this->address[this->size]=value;
        ++this->size;
    }

    int getSize()
    {
        return this->size;
    }

    int getCapacity()
    {
        return this->capacity;
    }

private:
    T * address;//指向堆区的指针
    int capacity;
    int size;
};


void test1201()
{
    MyArray<int> myArray(10);
    for(int i=0;i<10;i++)
    {
        myArray.pushBack(i);
    }
    for(int i=0;i<10;++i)
    {
        cout<<myArray[i]<<endl;
    }
}

class Person12
{
public:
    Person12(){};
    Person12(string name,int age):name(name),age(age)
    {

    }
    string name;
    int age;
};


void printPersonArray(MyArray<Person12> &arr)
{
    for(int i=0;i<arr.getSize();++i)
    {
        cout<<arr[i].name<<"  "<<arr[i].age<<endl;
    }
}

void test1202()
{
    Person12 p1("a",1);
    Person12 p2("b",2);
    Person12 p3("c",3);
    Person12 p4("d",4);

    MyArray<Person12> arr(10);
    arr.pushBack(p1);
    arr.pushBack(p2);
    arr.pushBack(p3);

    printf("%p\n",&p1);
    printf("%p\n",&arr[0]);

    printPersonArray(arr);
}

int main()
{
    test1201();
    test1202();
    return 0;
}

