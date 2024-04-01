#include<iostream>
#include<string>
using namespace std;
int expandAroundIndex(string s , int i , int j)
{
    int count = 0;
    int n = s.length();
    while(i >=0 && j < n && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubString(string s , int i , int j)
{
    int count = 0 ;
    int n = s.length();
    for(i=0; i<n; i++)
    {
        int oddKaAns = expandAroundIndex(s,i,i);
        count = count + oddKaAns;
        int evenKaAns = expandAroundIndex(s,i,i+1);
        count = count + evenKaAns;
    }
    return count;
}
int main()
{
    string s = "noon";
    int i = 0;
    int j = 0;
    cout<<countSubString(s , i , j);
    return 0;
}