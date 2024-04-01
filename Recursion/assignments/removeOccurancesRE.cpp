#include<iostream>
#include<algorithm>
using namespace std;
void removeOccRE(string& s, string& part)
{
    int found = s.find(part);
    if(found != string::npos)
    {
        //part strign has been located
        //now remove it
        string left_part = s.substr(0,found);
        string right_part = s.substr(found + part.size(),s.size());

        s = left_part + right_part;

        removeOccRE(s,part);
    }
    else{
        return;
    }
}
string removeOccurances(string& s, string& part)
{
    removeOccRE(s,part);
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    string result = removeOccurances(s,part);
    cout<<s<<endl;
    return 0;
}