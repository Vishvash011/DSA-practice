#include<iostream>
using namespace std;
int rowSum(int arr[][3] , int row, int col);
int main()
{
    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int row = 3;
    int col = 3;
    rowSum(arr,row,col);
    return 0;
}
int rowSum(int arr[][3] , int row, int col){
    for(int i=0; i<row; i++)
    {
        int sum = 0;
        for(int j=0; j<col; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}