#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int start=0;
    int end=9;
    cout<<"Enter array elements : ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    while(start < end)
    {
        if(arr[start]%2==0)
        {
            start++;
        }
        else if(arr[end]%2!=0)
        {
            end--;
        }
        else if(arr[start]%2!=0)
        {
            swap(arr[start],arr[end]);
            end--;
        }
        else if(arr[end]%2==0)
        {
            swap(arr[end],arr[start]);
            start++;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}