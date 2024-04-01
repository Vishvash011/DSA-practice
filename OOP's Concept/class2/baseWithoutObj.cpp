#include<iostream>
using namespace std;
class Base{
    public:
    static void show()
    {
        cout<<"hi friends";
    }
};
int main()
{
    Base::show();
    return 0;
}