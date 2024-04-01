#include<iostream>
using namespace std;
int climbStairs(int n)
{
    // if(n==0 || n==1)
    // {
    //     return 1;
    // }
    // int ans = climbStairs(n-1) + climbStairs(n - 2);
    // return ans;
    long int ways = 1;

    for (int i = 1; i <= n / 2; i++) {
        double sum = 1;

        for (int j = i; j < 2 * i; j++) {
            sum *= (double)(n - j) / (j - i + 1);
        }

        ways +=sum;
    }

    return ways;
}
int main()
{
    int n;
    cout<<"Enter the highest stairs number : ";
    cin>>n;

    int ans = climbStairs(n);
    cout<<"total steps to reach the stair :  "<<ans;
    return 0;
}