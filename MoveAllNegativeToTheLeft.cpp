#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,-3,4,-5,6,-8,9};
    int size = 8;
    int start , end;
    start = 0 , end = size-1;
    while(start<end)
    {
        if(arr[start] < 0)
        {
            start++;
        }
        else if(arr[end] > 0)
        {
            end--;
        }
        else{
            swap(arr[start],arr[end]);
        }
    }
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}