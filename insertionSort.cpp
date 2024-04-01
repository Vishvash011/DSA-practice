#include<iostream>
#include<vector>
using  namespace std;
int main()
{
    vector<int>arr{5,7,4,12,9,2,45,1};
    int n = arr.size();

    for(int i=1; i<n; i++)
    {
        int val = arr[i];
        int j;
        for(j=i-1; j>=0; j--)
        {
            if(arr[j] > val)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = val;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}