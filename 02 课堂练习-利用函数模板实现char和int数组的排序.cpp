//
// Created by phoenix on 3/8/2019.
//
#include <iostream>
using  namespace std;

template <class T>
void mySort2(T arr[],int length)
{
    for(int i=0;i<length;++i)
    {
        int max=i;
        for(int j=i+1;j<length;++j)
        {
            if(arr[max]>arr[j])
            {
                max=j;
            }
        }
        if(max!=i)
        {
            T temp=arr[max];
            arr[max]=arr[i];
            arr[i]=temp;
        }
    }
}

template<class T>
void printArray2(T arr[],int len)
{
    for(int i=0;i<len;++i)
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<"  ";
    }
    cout<<endl;
}

void test201()
{
    char charArray[]="edcba";
    int num=sizeof(charArray)/sizeof(charArray[0]);
    mySort2(charArray,num);
    printArray2(charArray,num);

    int intArray[]={6,2,5,7,8,1};
    int num2= sizeof(intArray)/ sizeof(intArray[0]);
    mySort2(intArray,num2);
    printArray2(intArray,num2);

}

int main2()
{
    test201();
    return 0;
}