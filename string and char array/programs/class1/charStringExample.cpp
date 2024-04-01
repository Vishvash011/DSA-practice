#include<iostream>
using namespace std;
int main()
{
    char ch[20];
    cout<<"enter name :";
    // cin>>ch;
    cin.getline(ch,20);
    cout<<ch;
    return 0;
}