#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // string name ;
    // cout<<"Enter your name : ";
    // cin>>name;
    // ofstream out("sample.txt");
    // out<<"my name is :"<<name;

    ifstream in("sample.txt");
    string str;
    getline(in,str);
    cout<<str;
    return 0;
    
}