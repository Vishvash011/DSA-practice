#include<iostream>
#include<vector>
using namespace std;
int firstOccurance(vector<int>arr , int size , int target)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end)
    {
        int element = arr[mid];
        if(element == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(target < element)
        {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOccurance(vector<int>arr , int size , int target)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end)
    {
        int element = arr[mid];
        if(element == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(target < element)
        {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    vector<int>arr{1,2,5,5,5,5,5,5,5,5,5,8,9,10};
    int size = 14;
    int target = 5;
    int first = firstOccurance(arr,size,target);
    int last = lastOccurance(arr,size,target);

    int total = (last-first)+1;
    cout<<"total number of occurance "<<target<<" is : "<<total<<endl;
    return 0;
}