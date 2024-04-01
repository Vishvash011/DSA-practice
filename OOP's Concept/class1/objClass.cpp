#include<iostream>
using namespace std;
class Person{
    public:
    int age;
    string name;

    void run()
    {
        cout<<"Vishvash is walking!"<<endl;
    }
};

int main()
{
    Person a;
    a.age = 21;
    a.name = "Vishvash";
    cout<<a.name<<" age is : "<<a.age<<endl;
    a.run();
    return 0;
}