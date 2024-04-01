#include<iostream>
#include<time.h>
using namespace std;
int firstOccurance(int arr[] , int size , int target)
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
int main()
{
    time_t start , end;
    time(&start);
    int arr[] = {1,2,3,4,4,4,4,4,5,6,7,8,9};
    int size = 13;
    int target = 4;
    int found = firstOccurance(arr , size , target);
    if(found == -1)
    {
        cout<<"Not found the element"<<endl;
    }
    else{
        cout<<"Element found at index : "<<found<<endl;
    }
    time(&end);
    cout << "Time taken by function is :" << difftime(end, start)<< endl ;
    return 0;
}