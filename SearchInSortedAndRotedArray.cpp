#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int>arr)
{
    int start = 0;
    int end = arr.size() - 1;
     
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(start == end)
        {
            //single element
            return start;
        }
        else if(arr[mid] > arr[mid+1] && mid <= end)
        {
            return mid;
        }
        else if(mid - 1 >= start && arr[mid-1] > arr[mid])
        {
            return mid-1;
        }
        else if(arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int binarySearch(vector<int>arr , int start , int end , int target)
{
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int search(vector<int>arr , int target)
{
    int pivotIndex = findPivot(arr);
    int ans = 0;
    if(target >= arr[0] && target <= arr[pivotIndex])
    {
        ans = binarySearch(arr , 0 , pivotIndex , target);
    }
    else {
        ans = binarySearch(arr , pivotIndex + 1 , arr.size() - 1 , target);
    }
    return ans;
}

int main()
{
    vector<int>arr{9,10,15,4,6,7,8};
    int target = 7;

    int find = search(arr , target);

    if(find == -1)
    {
        cout<<"Element is not found"<<endl;
    }
    else {
        cout<< "Element fount at index : "<<find<<endl;
    }
    return 0;
}