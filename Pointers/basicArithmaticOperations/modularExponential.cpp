#include<iostream>
using namespace std;

long long int PowMod(long long int x,long long int n,long long int M)
    {
        long long int ans = 1;
        while(n>0)
        {
            if(n & 1)
            {
                ans = (ans * x) % M;
            }
            x = (x * x) % M;
            n >>= 1;
        }
        return ans % M;
    }
int main()
{
    long long int num = 505000;
    long long int pow = 303;
    cout<<num<<" to the power of , "<<pow << " is : "<<PowMod(num,pow,3)<<endl;
    return 0;
}