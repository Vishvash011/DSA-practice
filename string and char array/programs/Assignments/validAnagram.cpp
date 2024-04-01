#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int sortSolution(string s, string t)
{
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s == t) 
    {
        return 1;
    }
    return 0;
}
bool validAnagram(string s, string t)
{
    int freqTable[256] = {0};
    // increment the count of character in first string
    for(int i=0; i<s.size(); i++)
    {
        freqTable[s[i]]++;
    }
    for(int i=0; i<t.size(); i++)
    {
        freqTable[t[i]]--;
    }
    /* If all characters are used correctly then checkSum will be zero
    * if there is a character that is not used correctly then checkSum will be -ve */
    for(int i=0; i<256; i++)
    {
        if(freqTable[i] != 0)
        {
            return false;
        } 
    }
    return true;
}
int main()
{
    string s = "anagram";
    string t = "nagaram";
    int ans = validAnagram(s,t);
    int sortAns = sortSolution(s,t);
    if(sortAns == 1)
    {
        cout<<"Yes it is anagram"<<endl;
    }
    else{
        cout<<"No it's not"<<endl;
    }
    cout<<ans<<endl;
    return 0;
}