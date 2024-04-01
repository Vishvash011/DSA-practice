#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
static bool myComp(string a, string b)
{
    string t1 = a + b;
    string t2 = b + a;
    return t1 > t2;
}
string largestNumber(vector<int>& nums) {
    vector<string>snums;
    for(auto n : nums)
    {
        snums.push_back(to_string(n));   
    }

    sort(snums.begin() , snums.end() , myComp);
    if(snums[0] == "0"){
        return "0";
    }

    string ans = "";
    for(auto str : snums)
    {
        ans += str;
    }
    return ans;
}
int main()
{
    vector<int>nums{10,5,12,98,121,3,4,7,83,2};
    cout<<largestNumber(nums)<<endl;
    return 0;
}