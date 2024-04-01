#include<iostream>
using namespace std;
int getLength(char name[50])
{
    int count = 0;
    for(int i=0;i<20;i++)
    {
        if(name[i] == '\0')
        {
            break;
        }
        count++;
    }
    return count;
}
int reverseString(char name[50])
{
    int start = 0;
    int end = getLength(name) - 1;
    while(start < end)
    {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++,end--;
    }
    cout<<name<<endl;
}
int main()
{
    char name[50];
    cout<<"Enter your name : ";
    cin.getline(name,50);
    reverseString(name);
    return 0;
}