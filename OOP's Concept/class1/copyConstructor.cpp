#include<iostream>
using namespace std;
class A{
    public:
    int x;
    A(int a)
    {
        x = a;
    }
    A(A &obj)
    {
        x = obj.x;
    }
};
int main()
{
    A a(20);
    A b(a);
    cout<<b.x<<endl;
    cout<<a.x<<endl;
    return 0;
}