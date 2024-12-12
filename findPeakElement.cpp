#include<iostream>
#include<vector>
using namespace std;
int findPeakElement(vector<int>arr , int size)
{
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start < end)
    {
        if(arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else 
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    vector<int>arr{1,5,7,9,56,65,34,25,10};
    int size = 9;
    int index = findPeakElement(arr,size);
    cout<<"index "<<index<<" is the peak element!";
    return 0;
}