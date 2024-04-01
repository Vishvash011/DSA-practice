#include<iostream>
using namespace std;

int fastExponentiation(int num, int pow)
{
    int ans = 1;
    while(pow > 0)
    {
        if(pow & 1)
        {
            // odd number
            ans = ans * num;
        }
        num = num * num;
        pow >>=  1;
    }
    return ans;
}
int main()
{
    int num = 5;
    int pow = 3;
    cout<<num<<" to the power of , "<<pow << " is : "<<fastExponentiation(num,pow)<<endl;
    return 0;
}