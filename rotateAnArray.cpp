#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateArray(int arr[] , int n, int k)
{
    vector<int>ans;
    if(k>n)
    {
        k = k%n;
    }

    for(int i=0; i<k; i++)
    {
        int val = arr[n-k+i];
        ans.push_back(val);
    }
    int index = 0;
    for(int i=k; i<n; i++)
    {
        int val = arr[index++];
        ans.push_back(val);
    }
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int k = 2;
    rotateArray(arr,n,k);
    return 0;
}