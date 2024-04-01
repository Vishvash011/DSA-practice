#include<iostream>
#include<algorithm>
using namespace std;
string additionTwoArrays(int arr[] , int brr[])
{
    string ans;
    int i = 3;
    int j = 2;
    int carry = 0;

    while(i>=0 && j>=0)
    {
        int x = arr[i] + brr[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--, j--;
    }

    while(i>=0)
    {
        int x = arr[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }

    while(j>=0)
    {
        int x = 0 + brr[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }

    if(carry != 0)
    {
        ans.push_back(carry);
    }

    reverse(ans.begin() , ans.end());

    return ans;
}
int main()
{
    int arr[] = {3,1,4,7};
    int brr[] = {9,9,6};
    cout<<additionTwoArrays(arr,brr);
    return 0;
}
