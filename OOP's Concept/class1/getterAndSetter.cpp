#include<iostream>
using namespace std;
class Animal{
    private:
    int age,weight;
    string name;

    public:
    int getAge()
    {
        return age;
    }
    int getWeight()
    {
        return weight;
    }
    void setAgeWeight(int age , int weight)
    {
        this->age = age;
        this -> weight = weight;
    }
};
int main()
{
    Animal a;
    a.setAgeWeight(15 , 150);
    cout<<a.getAge()<<endl;
    cout<<a.getWeight()<<endl;;
    return 0;
}