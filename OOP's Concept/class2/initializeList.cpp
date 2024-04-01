#include<iostream>
using namespace std;

class Abc{
    int x;
    string y;

    public:
    Abc(int _x , string _y) : x(_x), y(_y){}
    void setX(int val)
    {
        x = val;
    }
    void setY(string name)
    {
        y = name;
    }
    int getX()
    {
        return x;
    }
    string getY()
    {
        return y;
    }
};

int main()
{
    Abc* a = new Abc(15 , "vishvash");
    a->setX(10);
    a->setY("Nikki");
    cout << "Value of X is: "<<a->getX()<<endl;
    cout << "Name of Y is: "<<a->getY();
    return 0;
}