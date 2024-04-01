#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int count = 0;
int solve(vector<int>& arr, int target)
{
    if(target == 0)
        return 0;
    if(target < 0)
        return INT_MAX;
    
    int min = INT_MAX;
    for(int i=0; i<arr.size(); i++)
    {
        cout<<"call"<<count<<endl;
        count++;
        int ans = solve(arr, target - arr[i]);
        if(ans != INT_MAX && ans + 1 < min)
            min = ans + 1;
    }
    return min;
}
int main()
{
    vector<int>arr{1,2,3,4,5};
    int target = 10;

    int ans = solve(arr,target);

    cout<<"answer is : "<<ans<<endl;
    return 0;
}