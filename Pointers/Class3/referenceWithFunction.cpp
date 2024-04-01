#include<iostream>
using namespace std;
void solve(int&b)
{
    b = 35;
    b++;
}
int main()
{
    int a = 10;
    cout<<"value of a before : "<<a<<endl;

    solve(a);
    
    cout<<"value of a after : "<<a<<endl;
    return 0;
}