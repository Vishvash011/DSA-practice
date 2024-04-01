#include<iostream>
using namespace std;
class Animal{
    public:
    int age ;
    string name;
    Animal()
    {
        cout<<"I am default bro!"<<endl;
    }
    Animal(int age , string name)
    {
        this -> age = age;
        this -> name = name;
        cout<<"Hello did you call me ?"<<endl;
    }
};
int main()
{
    Animal a;
    Animal* b = new Animal(21 , "Vishvash Ame");
    cout<<b->age<<endl;
    cout<<b->name<<endl;
    return 0;
}