#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int* ptr = &a;

    cout<<"value of a : " <<a<<endl;
    cout<<"address of a : "<<&a<<endl;
    cout<<"value of ptr : "<<ptr<<endl;
    cout<<"value of ptr : "<<*ptr<<endl; //value present at location stored in ptr
    cout<<"address of ptr is : "<<&ptr<<endl;
    return 0;
}