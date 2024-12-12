#include<iostream>
using namespace std;
bool binarySearch(int arr[][4] , int rows , int cols , int target)
{
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        int rowIndex = mid/cols;
        int colsIndex = mid % cols;

        if(arr[rowIndex][colsIndex] == target)
        {
            cout<<"Found at index : "<<rowIndex<<" "<<colsIndex<<endl;
            return true;
        }
        else if(arr[rowIndex][colsIndex] < target)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}
int main()
{
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows = 5;
    int cols = 4;
    int target = 16;
    int ans = binarySearch(arr , rows , cols , target);
    if(ans)
    {
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}