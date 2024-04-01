#include<iostream>
using namespace std;
int sumOddInteger(int arr[] , int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
int main()
{
    int arr[] = {1,6,8,11,13,12,17,20,19,81,100,27};
    int n = 12;
    cout<<"Sum of odd integer value in array is : "<<sumOddInteger(arr , n)<<endl;
    return 0;
}