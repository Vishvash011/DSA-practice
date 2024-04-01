#include<iostream>
#include<limits.h>
using namespace std;
void findMax(int arr[], int n, int i, int& maxi)
{
    if(i >= n)
    {
        return;
    }

    if(arr[i] > maxi)
    {
        maxi = arr[i];
    }

    findMax(arr,n,i+1,maxi);
}

void findMin(int arr[], int n, int i, int& min)
{
    if(i >= n)
    {
        return;
    }

    if(arr[i] < min)
    {
        min = arr[i];
    }

    findMin(arr,n,i+1,min);
}
int main()
{
    int arr[] = {10,30,21,44,32,17,19,66};
    int n = 8;
    int i = 0;
    int maxi = INT_MIN;
    int min = INT_MAX;

    cout<<"maximum number is : ";
    findMax(arr,n,i,maxi);
    cout<<maxi<<endl;
    cout<<"minimum number is : ";
    findMin(arr,n,i,min);
    cout<<min<<endl;

    return 0;
}