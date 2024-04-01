#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int* p = &a;
    int** q = &p;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl; //value present at location stored in p
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<&q<<endl;
    cout<<**q<<endl; //value present at location storen in *q
    return 0;
}