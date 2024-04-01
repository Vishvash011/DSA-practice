#include<iostream>
#include<vector>
using namespace std;
int findElement(vector<int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter the size of the vector : ";
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

    int uniqueElement = findElement(arr);
    cout<<"Unique element is  : "<<uniqueElement<<endl;

    return 0;
}