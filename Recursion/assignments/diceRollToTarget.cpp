#include<iostream>
using namespace std;
int numRollsToTarget(int n, int k, int target)
{
    // base case
    if(target < 0)
    {
        return 0;
    }

    if(n == 0 && target == 0)
    {
        return 1;
    }

    if(n == 0 && target != 0)
    {
        return 0;
    }

    if(n != 0 && target == 0)
    {
        return 0;
    }

    int ans = 0;
    for(int i=1; i<=k; i++)
    {
        ans = ans + numRollsToTarget(n - 1, k, target - i);
    }
    return ans;
}
int main()
{
    int n = 5;
    int k = 7;
    int target = 15;
    cout << "Number of rolls to reach the target: " << numRollsToTarget(n, k, target)<<endl;
    return 0;
}