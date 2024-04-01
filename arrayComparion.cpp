#include<iostream>
using namespace std;
bool arrayComparision(int arr[], int brr[] , int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] != brr[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {1,5,10,15};
    int brr[] = {1,5,10,15};
    int size = 4;
    if(arrayComparision(arr , brr , size) == 1)
    {
        cout<<"Both are same!"<<endl;
    }
    else{
        cout<<"Both are different!"<<endl;
    }
    return 0;
}