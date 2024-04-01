#include<iostream>
using namespace std;

class MethodOverLoading{
    public:
    void display(int a)
    {
        cout<<"hello dost!"<<endl;
    }
    void display(int a, string b)
    {
        cout<<"hello "<<b<<endl;
    }
};
int main()
{
    MethodOverLoading hi;
    hi.display(5);
    hi.display(10,"Shrishti");
    return 0;
}