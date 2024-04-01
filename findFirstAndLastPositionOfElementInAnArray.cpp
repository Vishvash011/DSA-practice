#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    int startingPosition = -1;
    int endingPosition = -1;
    int n = nums.size();

    for(int i=0; i<n; i++)
    {
        if(nums[i] == target)
        {
            startingPosition = i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(nums[i] == target)
        {
           endingPosition = i;
           break;
        }
    }
    return {startingPosition , endingPosition};
}
int main()
{
    vector<int>arr{1,3,5,7,7,7,7,7,8,9,10};
    int target = 7;
    vector<int>ans = searchRange(arr,target);
    for(int i=0 ; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}