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
int main()
{
    vector<int>arr{12,14,6,8,9,10};
    int ans = findPivot(arr);

    if(ans == -1)
    {
        cout<<"kuch to gadbad hai vishvash program me🤔?"<<endl;
    }
    else{
        cout<<"Ans is at index : "<<ans<<endl;
        cout<<"Value of ans is : "<<arr[ans]<<endl;
    }

    return 0;
}