#include<iostream>
using namespace std;
int main()
{
    int* ptr = new int;
    *ptr = 42;
    delete ptr;
    cout<<*ptr<<endl;
    return 0;
}