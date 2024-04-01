#include<iostream>
using namespace std;
// void solve(int** ptr)
// {
//     ptr = ptr + 1;
// }
// void solve(int** ptr)
// {
//     *ptr = *ptr + 1;
// }
void solve(int** ptr)
{
    **ptr = **ptr + 1;
}

int main()
{
    int a = 12;
    int* p = &a;
    int** q = &p;

    cout<<"Before--> "<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
  
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<&q<<endl;

    solve(q);

    cout<<endl;

    cout<<"After--> "<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<&q;

    return 0;
}