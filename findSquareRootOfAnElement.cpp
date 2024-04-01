#include<iostream>
// #include<vector>
using namespace std;
int findSqrt(int n)
{
    int target = n;
    int start = 0;
    int end = n;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(mid*mid == target)
        {
            return mid;
        }
        if(mid*mid > target)
        {
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    int n , precision;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter the number of floating digits in precisions : "<<endl;
    cin>>precision;
    int ans = findSqrt(n);
    double step = 0.1;
    double finalAns = ans;
    for(double i = 0; i<precision; i++)
    {
        for(double j = finalAns; j*j<=n; j = j + step)
        {
            finalAns = j;
        }
        step = step/10;
    }
    cout<<finalAns<<endl;
    return 0;
}