#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    int size = sizeof(arr)/sizeof(int);
    cout<<size<<endl;

    cout<<arr.size()<<endl;
   
    cout<<arr.capacity()<<endl;

    arr.push_back(5);
    arr.push_back(21);
    arr.push_back(176);

    arr.pop_back();
    for (auto i : arr){
        cout <<i<<" ";
    }

    return 0;
}