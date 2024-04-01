#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProductDiff(vector<int>&nums)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    return (nums[n-1]*nums[n-2] - nums[0]*nums[1]);
}
int main()
{
    vector<int>nums{5,6,2,7,4};
    cout<<"The maximum product difference is : "<<maxProductDiff(nums);
    return 0;
}