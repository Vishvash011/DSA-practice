#include<iostream>
using namespace std;
class Dost{
    private:
    int length;
    public:
    Dost():length(0){}
    friend int printLength(Dost);
};
int printLength(Dost d)
{
    d.length+=10;
    return d.length;
}
int main()
{
    Dost d;
    cout<<"length is : "<<printLength(d)<<endl;
    return 0;
}