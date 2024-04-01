#include<iostream>
#include<vector>
using namespace std;
bool isMatchFinder(string& s, int si, string& p, int pi){
    //base case
    if(si == s.size() && pi == p.size())
    {
        return true;
    }

    if((si == s.size()) && (pi < p.size()))
    {
        while(pi < p.size())
        {
            if(p[pi] != '*')
            {
                return false;
            }
            pi++;
        }
        return true;
    }

    //single character matching

    if(s[si] == p[pi] || '?' == p[pi])
    {
        return isMatchFinder(s, si+1, p, pi + 1);
    }

    if(p[pi] == '*')
    {
        //treat '*' as a empty or null
        bool caseA = isMatchFinder(s, si, p, pi + 1);

        //let '*' consume one char
        bool caseB = isMatchFinder(s, si + 1, p, pi);

        return caseA || caseB;
    }

    //char doesn't match
    return false;
}
bool isMatch(string s, string p) {
    int si = 0; //pointer index for s string
    int pi = 0; //pointer index for p string

    return isMatchFinder(s, si, p, pi);
}
int main()
{
    string s =  "aa";
    string p = "a*a";
    
    cout << isMatch(s, p)<<endl;
	return 0;
}