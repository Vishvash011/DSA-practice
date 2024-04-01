#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>& arr, int& n, int i)
{
    //base case
    if(i == n-1)
    {
        return true;
    }

    //1 case solve kardo
    if(arr[i+1] < arr[i])
    {
        return false;
    }

    //baki recursion sambhal lega
    return checkSorted(arr,n,i+1);
}
int main()
{
    vector<int>arr{10,20,30,40,50,60,30};
    int n = arr.size();

    int i = 0;
    int isSorted = checkSorted(arr,n,i);

    if(isSorted)
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}