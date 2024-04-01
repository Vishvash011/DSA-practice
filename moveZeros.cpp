#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0;
    for(int i=0 ; i<nums.size(); i++)
   {
       if(nums[i] != 0)
       {
            swap(nums[i] , nums[nonZeroIndex]);
            nonZeroIndex++;
       }
   }
   for(int i=0; i<nums.size(); i++)
   {
    cout<<nums[i]<<" ";
   }
}
int main()
{
    vector<int>arr{1,3,0,5,6,0,0,7,8,6};
    moveZeroes(arr);
    return 0;
}