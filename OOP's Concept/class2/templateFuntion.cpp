#include<iostream>
using namespace std;

template <class T>
T myMin(T a, T b)
{
    return (a<b)? a:b;
}
int main()
{
    int i=10,j=20;
    cout<<myMin(i, j)<<endl;
    float c = 5.14f , d = 8.50f;
    cout<<myMin(c,d)<<endl;
    char A = 'a' , B = 'b';
    cout<<myMin(A,B)<<endl;
    return 0;
}