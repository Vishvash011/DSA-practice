#include<iostream>
#include<strings.h>
using namespace std;
bool isoMorphicString(string s, string t)
{
    int hash[256] = {0};
    bool istCharMapped[256] = {0};

    for(int i=0; i<s.size(); i++)
    {
        if(hash[s[i]] == 0 && istCharMapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];
            istCharMapped[t[i]] = true;
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        if(char(hash[s[i]]) != t[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "abc";
    string t = "ded";
    cout << (isoMorphicString(s, t) ? "Yes" : "No")<<endl;
    return 0;
}