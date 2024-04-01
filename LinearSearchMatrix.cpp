#include<iostream>
using namespace std;
bool findKey(int arr[][3] , int item , int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j] == item)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int key;
    int row = 3, col = 3;
    cout<<"Enter a key element : ";
    cin>>key;
    cout<<findKey(arr , key , row , col);
    return 0;
}