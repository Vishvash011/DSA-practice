#include<iostream>
#include<limits.h>
// #include<vector>
using namespace std;
int findMissingArrayNo(int arr[] , int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<size; i++)
    {
        // find maximum
        if(arr[i] > max)
        {
            max = arr[i];
        }
        // find minimum
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    int ans;
    int steps = (max - min) / size;
    
    for(int i=0; i<size-1; i++){
        if(arr[i] + steps != arr[i+1]){
            ans = arr[i] + steps;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {5,10,15,20,25,35};
    int size;
    size = 6;
    cout<<findMissingArrayNo(arr , size);
    return 0;
}