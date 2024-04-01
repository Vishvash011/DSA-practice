#include<iostream>
using namespace std;
int main()
{
    //Scenario 1st
    // void* ptr;
    // int x = 10;
    // ptr = &x;
    // int* intPtr = static_cast<int*>(ptr);
    // cout<<*intPtr<<endl;

    //Scenario 2nd
    int* ptr = new int;
    void* voidPtr = ptr;
    int* intPtr = static_cast<int*>(voidPtr);
    *intPtr = 10;
    cout<<*ptr<<endl;
    return 0;
}