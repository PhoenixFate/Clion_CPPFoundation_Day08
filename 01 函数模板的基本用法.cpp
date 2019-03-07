#include <iostream>
using namespace std;

void mySwapInt(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

template<class T>
void mySwap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}


void test101()
{
    int a=10;
    int b=20;
    mySwapInt(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    mySwap(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    mySwap<int>(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    double d= static_cast<double>(a);
}



int main1() {
    test101();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}