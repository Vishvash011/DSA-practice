#include<iostream>
using namespace std;
class Person{
    public:
    Person()
    {
        cout<<"Hello i am in!"<<endl;
    }
    ~Person()
    {
        cout<<"Now i am going!"<<endl;
    }
};
int main()
{
    Person p;
    Person* b = new Person();
    delete b; 
    return 0;
}