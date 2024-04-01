#include<iostream>
#include<vector>
using namespace std;
void printSubArrays(vector<int>&arr, int start, int end)
{
    if(end == arr.size())
    {
        return;
    }

    for(int i=start; i<=end; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    printSubArrays(arr,start, end + 1);
}
void increaseStart(vector<int>&arr)
{
    for(int start = 0; start<arr.size();start++)
    {
        int end = start;
        printSubArrays(arr, start, end);
    }
}
int main()
{
    vector<int>arr{1,2,3,4,5};
    int start = 0;
    int end = 0;
    increaseStart(arr);
    return 0;
}