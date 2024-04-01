#include<iostream>
using namespace std;

class Abc{
    public:
    static int a,b;
    void print() const{
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
};

int Abc::a;
int Abc::b;

int main()
{
    Abc obj1;
    obj1.a = 5;
    obj1.b = 10;
    obj1.print();
    Abc obj2;
    obj2.a = 7;
    obj2.b = 8;
    obj1.print();
    obj2.print();

    return 0;
}