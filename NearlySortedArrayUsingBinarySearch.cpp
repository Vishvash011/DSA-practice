#include<iostream>
#include<vector>
using namespace std;
int NearSortedBinarySearch(vector<int>arr , int size , int target)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;

    while(start<=end)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(mid-1 >= 0 && arr[mid-1] == target)
        {
            return mid-1;
        }
        else if(mid + 1 <arr.size() &&  arr[mid+1] == target)
        {
            return mid+1;
        }
        else if(arr[mid]<target)
        {
            start  = mid + 2;
        }
        else {
            end = mid -2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int>arr{10,3,40,20,50,80,70};
    int size = arr.size();
    int target = 3;
    int ans = NearSortedBinarySearch(arr,size,target);
    if(ans == -1)
    {
        cout<<"Element is not found!"<<endl;
    }
    else{
        cout<<target<<" found at "<<ans<<" index"<<endl;
    }
    return 0;
}