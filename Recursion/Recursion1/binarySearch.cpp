#include<iostream> 
using namespace std;
int bs(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;

    if(arr[mid] == target)
    {
        return mid;
    }
    else if(target > arr[mid])
    {
        return bs(arr, mid + 1, end, target);
    }
    else{
        return bs(arr, start, mid-1, target);
    }
}
int main()
{
    int arr[] = {5,10,15,20,25,30,35,40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    int target = 25;

    cout<<"the target element indexing is : "<<bs(arr,start,end,target)<<endl;
    return 0;

}