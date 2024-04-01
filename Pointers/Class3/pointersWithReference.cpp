#include<iostream>
using namespace std;

void solve(int*& q)
{
    *q = *q + 1;
}
int main(){
    int a = 10;
    int* p = &a;
    cout<<"Value of a : " << p << endl;  // before

    solve(p);

    cout<<"Value of a : " << a << endl; // After

    return 0;
}