#include<iostream>
using namespace std;
int solveDivide(int dividend , int divisor)
{
    int start = 0;
    int end = abs(dividend);

    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end)
    {
        // perfect  solution
        if(abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        // not perfect solution
        else if(abs(mid * divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))
    {
        return ans;
    }
    else {
        return -ans;
    }
}
int main()
{
    int dividend;
    int divisor;
    cout<<"Enter the dividend value : ";
    cin>>dividend;
    cout<<"Enter the divisor value : ";
    cin>>divisor;
    double ans = solveDivide(dividend , divisor);
    // cout<<ans<<endl;
    double precision;
    cout<<"Enter how many precisions you want in your answer : ";
    cin>>precision;
    double step = 0.1;
    if(ans > 0)
    {
        for(double i=0; i<precision; i++)
        {
            for(double j=ans; j*divisor<=dividend; j+=step)
            {
                ans = j;
            }
            step/=10;
        }
    }
    if(ans<0){
        for(double i=0; i<precision; i++)
        {
            for(double j=ans; j*divisor>=dividend; j+=step)
            {
                ans = j;
            }
            step/=10;
        }
    }
    cout<<dividend<<" is divided by "<<divisor<<" : "<<ans<<endl;
    return 0;
}