#include<iostream>
#include<vector>
using namespace std;
int findMissing(vector<int>arr , int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start<=end) 
    {
        if(arr[mid] != mid + arr[0])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start + arr[0];
}
int main()
{
    vector<int>arr{7,8,9,11,12,13,14,15,16};
    int size = 9;
    cout<<findMissing(arr,size);
    return 0;
}