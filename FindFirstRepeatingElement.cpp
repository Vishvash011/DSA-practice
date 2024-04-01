#include<iostream>
using namespace std;
int findFirstRepeatingNumber(int arr[] , int size)
{
    int find;
    for(int i=0; i<size; i++)
    {
        find = arr[i];
        for(int j=i+1; j<size; j++)
        {
            if(find == arr[j])
            {
                return find;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,5,3,4,3,5,6};
    int size = 7;
    int find;
    cout<<"First repeating number is : "<<findFirstRepeatingNumber(arr,size)<<" ";
    return 0;
}