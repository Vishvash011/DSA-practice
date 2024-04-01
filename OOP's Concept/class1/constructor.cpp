#include<iostream>
using namespace std;
class Animal{
    public:
    Animal()
    {
        cout<<"Hello did you call me ?"<<endl;
    }
};
int main()
{
    Animal a;
    Animal* b = new Animal();
    return 0;
}