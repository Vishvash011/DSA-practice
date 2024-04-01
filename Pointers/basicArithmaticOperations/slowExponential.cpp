#include<iostream>
using namespace std;

int slowExponentiation(int num, int pow)
{
    int ans = 1;
    for(int i=0; i<pow; i++)
    {
        ans = ans * num;
    }
    return ans;
}
int main()
{
    int num = 5;
    int pow = 3;
    cout<<num<<" to the power of , "<<pow << " is : "<<slowExponentiation(num,pow)<<endl;
    return 0;
}