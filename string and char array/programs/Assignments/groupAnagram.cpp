#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<map>
#include<array>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>>mp;
    for(auto str : strs)
    {
        string s = str;
        sort(s.begin(),s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>>ans;
    for(auto it = mp.begin(); it!=mp.end() ; it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}
int main()
{
    vector<string> strs{"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    // print the result
    for(auto i : result)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
    }
    return 0;
}