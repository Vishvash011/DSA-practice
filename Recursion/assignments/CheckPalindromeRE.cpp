#include<iostream>
using namespace std;
bool checkPalidrome(string& s, int start, int end)
{
    if(start >= end)
    {
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    checkPalidrome(s, start + 1, end - 1);
}
int main()
{
    string s;
    cout<<"enter a string : ";
    cin>>s;
    string copy = s;
    cout<<"original string is : "<<s<<endl;
    
    if(checkPalidrome(s, 0, s.size()-1))
    {
        cout<<"It is palindrome string"<<endl;
    }
    else{
        cout<<"It isn't palindrome string"<<endl;
    }
    return 0;
}