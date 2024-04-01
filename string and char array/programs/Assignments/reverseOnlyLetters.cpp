#include<iostream>
#include<string>
using namespace std;
string reverseOnlyLetters(string s) {
    int l = 0;
    int h = s.size() - 1;
    while(l<h)
    {
        if(isalpha(s[l]) && isalpha(s[h]))
        {
            swap(s[l] , s[h]);
            l++;
            h--;
        }
        else if(!isalpha(s[l]))
        {
            // not alphabetic letter
            l++;
        }
        else{
            // not alphabetic letter
            h--;
        }
    }
    return s;
}
int main()
{
    string s = "vishu-ame=pratham_bhai";
    cout<<reverseOnlyLetters(s);
    return 0;
}