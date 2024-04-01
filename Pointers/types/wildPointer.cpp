#include<iostream>
using namespace std;
int main()
{
    //scenario 1st
    // int* ptr;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;

    //Scenario 2nd
    int* ptr = new int;
    delete ptr;
    cout<<*ptr<<endl;

    //Scenario 3rd
    // int* ptr;
    // ptr = &x;
    // cout<<*ptr<<endl;    
    return 0;
}