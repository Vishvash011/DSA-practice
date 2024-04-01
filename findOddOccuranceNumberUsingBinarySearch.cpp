#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(start == end)
        {
            // single element
            return start;
        }
        // 2nd case -> mid - even or mid - odd
        if(mid % 2 == 0)
        {
            if(arr[mid]== arr[mid+1])
            {
                start = mid + 2;
            }
            else{
                end = mid;
            }
        }
        else{
            if(arr[mid] == arr[mid-1])
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int>arr{1,1,1,2,2,3,3,4,4,5,5,6,6,15,15};
    int ans = solve(arr);
    if(ans == -1)
    {
        cout<<"Odd occurance number is not available in this array!"<<endl;
    }
    else{
        cout<<"index is : "<<ans<<endl;
        cout<<"value is : "<<arr[ans]<<endl;
    }
    return 0;
}