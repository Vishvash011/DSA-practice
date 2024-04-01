#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
bool cmp(char first , char second)
{
    return first > second;
}
bool compare(int a , int b)
{
    return a > b;
}
bool cmpa(string& s1, string& s2)
{
    return s1.length()<s2.length();
}
int main()
{
    string s = "vishvash";
    sort(s.begin() , s.end() , cmp);
    cout<<s<<endl;
    vector<int>v{5,9,4,3,12,1};
    sort(v.begin(),v.end(), compare);
    for (auto i : v){
        cout <<i<<" ";
    }
    vector<string>str{"love","babbar","rahul","sandeep"};
    int n = str.size();
    sort(str.begin(),str.end(),cmpa);
    cout<<endl;
    for(auto i : str)
    {
        cout<<i<<endl;
    }
    return 0;
}