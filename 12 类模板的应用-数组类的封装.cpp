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

    MyArray operator[](int index)
    {
        return this->address[index];
    }

    void pushBack(T &value)
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

//template <class T>
//ostream& operator<<(ostream&cout,T &myArray)
//{
//    cout<<myArray<<endl;
//}

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

int main()
{
    test1201();
    return 0;
}

