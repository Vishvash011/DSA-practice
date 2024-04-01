#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
int numSquareHelper(int n)
{
    //base case
    if(n == 0)
    {
        return 1;
    }
    if(n < 0)
    {
        return 0;
    }

    int ans = INT_MAX;
    int i = 1;
    int end = sqrt(n);

    while(i <= end)
    {
        int perfectSquare = i * i;
        int noOfPerfectSquare = 1 + numSquareHelper(n - perfectSquare);

        if(noOfPerfectSquare < ans){
            ans = noOfPerfectSquare;
        }
        ++i;
    }
    return ans;
}

int numSquares(int n)
{
    return numSquareHelper(n) - 1;
}

int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int result = numSquares(n);
    cout<<result;
    return 0;
}