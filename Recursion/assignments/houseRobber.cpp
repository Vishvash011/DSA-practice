#include<iostream>
#include<vector>
using namespace std;
int rob(vector<int>& nums) {
    int rob = 0;
    int norob = 0;
    for (int i = 0; i < nums.size(); i++) {
        int newRob = norob + nums[i];
        int newNoRob = max(norob, rob);
        rob = newRob;
        norob = newNoRob;
    }
    return max(rob, norob);
}
int main()
{
    vector<int>nums{2,7,9,3,1};
    int result = rob(nums);
    cout<<result<<endl;
    return 0;
}