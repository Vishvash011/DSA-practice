#include<iostream>
using namespace std;
void solve(int* p, int* q)
{
    *p = *p + 1;
    *q = *q + 1;
}
int main()
{
    int a = 10;
    int b = 20;

    cout<<"Before value of a & b is : "<<a<<" , "<<b<<endl;

    solve(&a,&b);

    cout<<"After value of a & b is : "<<a<<" , "<<b<<endl;

    return 0;
}