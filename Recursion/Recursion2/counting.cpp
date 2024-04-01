#include<iostream>
#include<string.h>
using namespace std;
void countChar(string& str, int& n, int i, char& ch, int& count)
{
    if(i >= n)
    {
        return; 
    }
    if(str[i] == ch)
    {
        count++;
    }

    return countChar(str, n, i+1, ch, count);

}
int main()
{
    string str = "vishvash";
    char ch = 'v';
    int i = 0;
    int size = str.length();
    int count = 0;
    cout<<"how many "<<ch<<" are available in string : ";
    countChar(str,size,i,ch,count);
    cout<<count<<endl;
    return 0;
}