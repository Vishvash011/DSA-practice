#include<iostream>
#include<string.h>
using namespace std;
void replaceAllSpaces(char name[30])
{
    int i = 0;
    int j = strlen(name);
    while(i<j)
    {
        if(name[i] == ' ')
        {
            name[i] = '@';
        }
        i++;
    }
    // cout<<name<<endl;  
}
int main()
{
    char name[30];
    cin.getline(name , 30);
    // cout<<name<<endl;

    replaceAllSpaces(name);
    cout<<name<<endl;
    return 0;
}