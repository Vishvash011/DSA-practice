#include<iostream>
using namespace std;
class FuncOverRide{
    public:
   virtual void speaking()
    {
        cout<<"speaking"<<endl;
    }
};
class Dog : public FuncOverRide 
{
    public:
    void speaking() override
    {
        cout<<"Barking"<<endl;
    }
};
int main()
{
    // Dog* d = new Dog();
    // d->speaking(); 
    // FuncOverRide* f = new FuncOverRide();
    // f->speaking();

    Dog d;
    // FuncOverRide f;
    // f.speaking();
    d.speaking();
    return 0;
}



// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     virtual void speaking()
//     {
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog : public Animal{
//     public:
//     void speaking()
//     {
//         cout<<"Barking"<<endl;
//     }
// };
// class Cat : public Animal{
//     public:
//     void speaking()
//     {
//         cout<<"Meow!"<<endl;
//     }
// };
// int main()
// {
//     Animal* a = new Animal();
//     Animal* d = new Dog();
//     Animal* c = new Cat();
//     a->speaking();
//     d->speaking();
//     c->speaking();
//     return 0;
// }