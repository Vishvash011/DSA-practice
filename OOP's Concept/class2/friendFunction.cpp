// #include<iostream>
// using namespace std;

// class A{
//     private:

//         int x;
//     public:
//         A(int _val) : x(_val) {}

//         int getX() const{
//             return x;
//         }
//         int setX(int _val)
//         {
//             x = _val;
//         }

//         friend class B;
// };
// class B{
//     public:
//         void print(const A&a)
//         {
//             cout<<a.x<<endl;
//         }
// };

// int main()
// {
//     A a(5);
//     B b;
//     b.print(a);
//     return 0;
// }




#include<iostream>
using namespace std;

// class A;
// class B{
//     private:
//         int data1;
//     public:
//         B()
//         {
//             data1 = 100;
//         }
//         friend void accessOne(B);
//         friend void accessBoth(B,A);
// };

// class A{
//     private:
//         int data2;
//     public:
//         A()
//         {
//             data2 = 200;
//         }
//         friend void accessBoth(B,A);
// };

// void accessOne(B x)
// {
//     cout<<x.data1<<endl;
// }
// void accessBoth(B y , A x)
// {
//     cout<<y.data1 + x.data2<<endl;
// }
// int main()
// {
//     B a;
//     A b;
//     accessOne(a);
//     accessBoth(a,b);
//     return 0;
// }

class Demo{
    int a;
    int b;
    public:
        Demo(int x,int y)
        {
            a= x;
            b = y;
        }
        friend void yaar(Demo);      
};
void yaar(Demo d)
{
    int c = d.a;
    int e = d.b;
    cout<<c<<" "<<e;
}
int main()
{
    Demo d(10,20);
    yaar(d);
    return 0;
}