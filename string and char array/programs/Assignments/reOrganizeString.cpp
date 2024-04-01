#include<iostream>
#include<string.h>
#include<limits.h>
using namespace std;
string reorganizeString(string &s)
{
    int hash[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i] - 'a']++;
    }

    char max_freq_char;
    int max_count = INT_MIN;

    for(int i=0; i<26; i++)
    {
        if(hash[i] > max_count)
        {
            max_count = hash[i];
            max_freq_char = 'a' + i;
        } 
    }

    int index = 0;
    while(max_count > 0 && index < s.size())
    {
        s[index] = max_freq_char;
        max_count--;
        index+=2;
    }

    if(max_count != 0)
    {
        return "";
    }

    hash[max_freq_char - 'a'] = 0;

    // let's place other characters

    for(int i=0;i<26;i++)
    {
        while(hash[i] > 0)
        {
            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index+=2;
        }
    }
    return s;
}
int main()
{
    string s = "aaabbcde";
    cout << reorganizeString(s)<<endl;
    return 0;
}