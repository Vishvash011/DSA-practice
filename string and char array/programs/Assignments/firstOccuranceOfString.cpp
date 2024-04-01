#include<iostream>
#include<string.h>
using namespace std;
int findFirstOccuranceOfString(string& str1 , string& str2)
{
    int n = str1.size();
    int m = str2.size();
    for(int i=0 ; i<=n-m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(str2[j] != str1[i+j])
            {
                break;
            }
            if(j == m-1)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    string str1 = "vishvash";
    string str2 = "ash";
    cout<<findFirstOccuranceOfString(str1,str2)<<endl;
    return 0;
}