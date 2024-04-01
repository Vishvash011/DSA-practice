#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int row = 3;
    int col = 3;
    int transpose[3][3];
    cout<<"Printing a matrix before transpose :"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transpose a matrix
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    cout<<"Printing a matrix After transpose :"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}