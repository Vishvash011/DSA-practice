#include<iostream>
#include<limits.h>
using namespace std;
int findMissingArrayNo(int arr[] , int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    // find minimum
    for(int i = 0; i<size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    int answer;
    answer = max - min;
    return answer;
    // int result;
    // result = answer - (size - 2) - 1;
    // return result;
}
int main()
{
    int arr[] = {3,6,9,15};
    int size;
    size = 4;
    cout<<findMissingArrayNo(arr , size);
    return 0;
}