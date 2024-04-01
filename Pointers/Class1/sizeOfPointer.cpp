#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int* atr = &a;

    char c = 'a';
    char* ctr = &c;

    double d = 5.05;
    double* dtr = &d;

    cout<<"size of int pointer : "<<sizeof(atr)<<endl;
    cout<<"size of char pointer : "<<sizeof(ctr)<<endl;
    cout<<"size of double pointer : "<<sizeof(dtr)<<endl;

    int b = 6;
    int* btr = &b;
    cout<<"value of b : "<<b<<endl;
    cout<<"address of b is : "<<btr<<endl;

    b = b + 1;
    *btr = *btr + 1;
    cout<<"value of b : "<<b<<endl;
    cout<<"address of b is : "<<btr<<endl;


    int* ptr = nullptr;
    cout<<*ptr;
    return 0;
}