#include<iostream>
using namespace std;
int GCD(int a, int b)
{
    if(a == 0) return b;
    if(b == 0) return a;

    while(a > 0 && b > 0)
    {
        if(a > b)
        {
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a == 0 ? b : a;
}
int LCM(int a, int b)
{
    int ans = (a*b) / GCD(a,b);
    return ans;
}
int main()
{
    int a , b;
    cout << "Enter the value of 'a' : ";
    cin >> a ;
    cout << "\nEnter the value of 'b' : ";
    cin >> b ;
    cout<<"\nLCM of a and b is : "<<LCM(a,b)<<endl;
    return 0;
}