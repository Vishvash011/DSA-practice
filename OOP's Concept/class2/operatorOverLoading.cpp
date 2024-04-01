#include<iostream>
using namespace std;
class OperatorOverload{
    public:
    int val;

    void operator+(OperatorOverload & obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<(value1 - value2)<<endl;
    }
};
int main()
{
    OperatorOverload obj1 , obj2;
    obj1.val = 7;
    obj2.val = 2;

    obj1 + obj2;
}