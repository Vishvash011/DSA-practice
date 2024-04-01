#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>nums, int val) {
        int count = 0;
        int i = 0;
        for(i = 0; i<nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[count] = nums[i];
                count++;
            }
        }
        for(i = 0; i<count; i++)
        {
            cout<<nums[i]<<" ";
        }
        return count;
    }
int main()
{
    vector<int>arr{3,2,2,3};
    int val = 3;
    int ans = removeElement(arr , val);
    cout<<endl<<ans;
    return 0;
}