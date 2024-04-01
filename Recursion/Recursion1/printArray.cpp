#include<iostream>
using namespace std;
void printArray(int arr[] , int size)
{
    if(size == 0)
    {
        return;
    }
    cout<<*arr<<" ";
    printArray(arr+1, size - 1);
}
int main()
{ 
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"the array is : ";
    printArray(arr,size);
    return 0;
}