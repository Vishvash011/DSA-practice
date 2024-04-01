#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,4,10,6,78,95,48,100};
    int start = 0;
    int size = 8;
    int end = size-1;
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}