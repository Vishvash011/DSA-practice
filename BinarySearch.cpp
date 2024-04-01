#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(int arr[] , int target , int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        int element = arr[mid];
        if(element == target)
        {
            return mid;
        }
        else if(target < element){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int arr[]= {5,7,9,12,18,56,78,92,100};
    int target = 5;
    int size = 9;
    int found = BinarySearch(arr , target , size);
    if(found == -1)
    {
        cout<<"Element is not present in the array!"<<endl;
    }
    else{
        cout<<"Element is found at index : "<<found<<endl;
    }
    return 0;
}