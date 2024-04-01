#include<iostream>
#include<string.h>
using namespace std;
void convertIntoLowerCase(char arr[])
{
    int n = strlen(arr);
    for(int i=0; i<n; i++)
    {
        if(arr[i] >= 65 && arr[i] <= 90)
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}
void convertIntoUpperCase(char arr[])
{
    int n = strlen(arr);
    for(int i=0; i<n; i++)
    {
        if(arr[i] >= 97 && arr[i] <= 122)
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}
int main()
{
    char arr[100] = "VIShVASH";
    char brr[100] = "hellO";
    convertIntoLowerCase(arr);
    convertIntoUpperCase(brr);
    cout<<arr<<endl;
    cout<<brr<<endl;
    return 0;
}