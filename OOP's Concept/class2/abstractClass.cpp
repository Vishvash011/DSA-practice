#include<iostream>
using namespace std;

class Vehicle{
    public:
    virtual void brandName() = 0;
};
class Car : public Vehicle{
    public:
    void brandName()
    {
        cout<<"this is audi"<<endl;
    }
};
class Bike : public Car{
    public:
    void brandName(){
        cout<<"This is TVS Raider!"<<endl;
    }
};

int main()
{
    Vehicle* b = new Bike();
    Vehicle* c = new Car();
    b->brandName();
    c->brandName();

    return 0;

}