#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,0,0,2,1,0,2,1,0};
    int l,m,h;
    l=m=0;
    int size = 10;
    h = size-1;
    while(m<=h)
    {
        if(arr[m]==0)
        {
            swap(arr[m],arr[l]);
            l++,m++;
        }
        else if(arr[m]==1)
        {
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}