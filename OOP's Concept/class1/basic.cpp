#include<iostream>
using namespace std;

class Animal{
    private:
        string name;
        int age;
        public:
        Animal()
        {
            cout<<"Hello i am called"<<endl;
        }
        Animal(const Animal & obj)
        {
            cout<<"Hello i am copy called"<<endl;
        }
        void pets()
        {
            cout<<"meow"<<endl;
        }
};
int main(){  
    Animal a;
    Animal b = a;
    a.pets();
    return 0;
}