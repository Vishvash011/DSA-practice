#include<iostream>
using namespace std;
string reverseString(string& s, int start, int end)
{
    if(start >= end)
    {
        return s;
    }
    swap(s[start],s[end]);
    reverseString(s, start + 1, end - 1);
}
int main()
{
    string s;
    cout<<"enter a string : ";
    cin>>s;
    cout<<"original string is : "<<s<<endl;
    reverseString(s, 0, s.size()-1);
    cout<<"reversed string is : "<<s<<endl;
    return 0;
}