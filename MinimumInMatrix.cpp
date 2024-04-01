#include<iostream>
#include<limits.h>
using namespace std;
int findMin(int arr[][3] , int row , int col){
    int min = INT_MAX;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    cout<<"Minimum value of matrix is : "<<min<<endl;
}
int main()
{
    int arr[3][3] = {{1,-2,3} , {4,50,6} , {7,8,9}};
    int row = 3;
    int col = 3;
    findMin(arr,row,col);
    return 0;

}