#include<iostream>
using namespace std;
int main()
{
    int arr[4] = {12,14,16,18};
    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;

    // int* p = arr;
    // cout<<p<<endl;
    // cout<<&p<<endl;

    // cout<< *arr <<endl;
    // cout<< *arr+1 <<endl;
    // cout<< *(arr) + 1 <<endl;
    // cout<< *(arr + 1) <<endl;
    // cout<< *(arr+2) <<endl;
    // cout<< *(arr+3) <<endl;
    // cout<< 1[arr] << endl;
    // cout<< *(1 + arr) << endl;
    // cout << arr[1] << endl;
    // cout << *(arr + 1) << endl;


    // int* p = arr;
    // cout<< *(p+3) <<endl;


    int* p = arr;
    int* q = arr + 1;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    cout<< *(p)+1 <<endl;
    cout<< *(p) + 2 <<endl;
    cout<< *(q) + 3 <<endl;
    cout<< *(q + 4) <<endl;  

    cout<<sizeof(arr)<<endl;
    return 0; 
}