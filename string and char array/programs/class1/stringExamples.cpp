#include<iostream>
#include<string>
using namespace std;
bool stringComparision(string a, string b)
{
    if(a.length() != b.length())
    {
        return false;
    }
    else{
        for(int i=0; i<a.length(); i++)
        {
            if(a[i] != b[i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    // string str;
    // cout<<"enter the string : ";
    // getline(cin,str);
    // cout<<str<<endl;

    // cout<<"length : "<<str.length()<<endl;
    // cout<<"isEmpty : "<<str.empty()<<endl;

    // str.push_back('N');
    // cout<<str<<endl;

    // str.pop_back();
    // cout<<str<<endl;

    // cout<<str.substr(1 , 3) << endl;

    // string a = "Nikki";
    // string b = "Nikkii";
    // int ans = stringComparision(a,b);
    // cout<<ans<<endl;
    // if(a.compare(b) == 0)
    // {
    //     cout<<"Same"<<endl;
    // }
    // else{
    //     cout<<"Not Same"<<endl;
    // }
    // string x = "cbcd";
    // string y = "bcda";
    // cout<<x.compare(y)<<endl;
    // string target = "hello";
    // if(str.find(target) == string::npos)
    // {
    //     cout<<"Not found"<<endl;
    // }

    string str = "This is my first message";
    string word = "Nikki";

    str.replace(11,5,word);
    cout<<str<<endl;
    str.erase(8,2);
    cout<<str<<endl;
    return 0;
}