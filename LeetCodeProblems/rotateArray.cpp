#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int>& nums, int k) {
    vector<int>ans;
    int n = nums.size();
    int rotate = n - k;
    for(int i = rotate; i < n; i++)
    {
        ans.push_back(nums[i]);
    }
    for(int i=0; i<rotate; i++)
    {
        ans.push_back(nums[i]);
    }
    return ans;
}
int main()
{
    vector<int>nums{1,2,3,4,5,6,7};
    int k = 3;
    vector<int>res = rotate(nums,k);
    cout<<"The rotated array is: ";
    for(auto x : res)
    {
        cout<<x<<" ";
        }
        return 0;
}