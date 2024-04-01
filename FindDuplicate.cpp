#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>arr , int size)
{
    for(int i=0; i<arr.size(); i++)
    {
        int c = arr[i];
        for(int j=0; j<arr.size(); j++)
        {
            if(c == arr[j+1]){
                return c;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int>arr{1,5,6,5,0,9,8,4,2};
    int size = sizeof(arr)/sizeof(int);
    cout<<findDuplicate(arr,size);
    return 0;
}