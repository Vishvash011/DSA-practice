#include<iostream>
#include<limits.h>
using namespace std;
int findMax(int arr[][3] , int row , int col){
    int max = INT_MIN;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout<<"maximum value of matrix is : "<<max<<endl;
}
int main()
{
    int arr[3][3] = {{1,2,3} , {4,50,6} , {7,8,9}};
    int row = 3;
    int col = 3;
    findMax(arr,row,col);
    return 0;

}