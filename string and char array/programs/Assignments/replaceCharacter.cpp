#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string :";
    cin>>str;
    int n=str.length();
    cout<<"do you want to replace any character from the string ? (yes/no): ";
    string s;
    cin>>s;
    if(s == "yes")
    {
        char c;
        cout<<"enter the character  which you want to replace: ";
        cin>>c;
        int d;
        cout<<"enter the index where you want replace the character: ";
        cin>>d;
        str[d] = c;
        cout<<"new string : "<<str<<endl;
    }
    else{
        cout<<"Thank  You!!"<<str<<endl;
    }
    return 0;
}