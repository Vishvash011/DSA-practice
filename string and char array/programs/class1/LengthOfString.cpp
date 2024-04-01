#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[20];
    cout<<"Enter the string : ";
    cin.getline(ch,20);
    cout<<ch<<endl;
    int count = 0;
    for(int i=0;i<20;i++)
    {
        if(ch[i] == '\0')
        {
            break;
        }
        count++;
    }
    cout<<"Length of string is : "<<count<<endl;
    cout<<"Length of string is : "<<strlen(ch)<<endl;

    return 0;
}