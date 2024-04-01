#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> addTwoArray(vector<int>&arr, vector<int>&brr, vector<int>&ans, int n, int m, int carry)
{
    // Add the two array and store in ans[]
    while(n >= 0 && m >= 0)
    {
        int sum = arr[n] + brr[m] + carry;
        int digit = sum % 10;
        carry = sum / 10;
        ans.push_back(digit);
        n--;
        m--;
    }

    while(n >= 0 && m < 0)
    {
        int sum = arr[n] + 0 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        ans.push_back(digit);
        n--;
    }
       while(m >= 0 && n < 0)
    {
        int sum = 0 + brr[m] + carry;
        int digit = sum % 10;
        carry = sum / 10;
        ans.push_back(digit);
        m--;
    }
    if (carry != 0){
    	ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
   return ans;
}

vector<int> addTwoArrayRE(vector<int>&arr, vector<int>&brr, vector<int>&result, int& n, int& m, int& carry)
{
     if (n < 0 && m < 0 && carry == 0) {
        return result;
    }
    // Add the two array and store in ans[]
    if(n >= 0 && m >= 0)
    {
        int sum = arr[n] + brr[m] + carry;
        int digit = sum % 10;
        carry = sum / 10;
        result.push_back(digit);
        n--;
        m--;
    }

    if(n >= 0 && m < 0)
    {
        int sum = arr[n] + 0 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        result.push_back(digit);
        n--;
    }
    if(m >= 0 && n < 0)
    {
        int sum = 0 + brr[m] + carry;
        int digit = sum % 10;
        carry = sum / 10;
        result.push_back(digit);
        m--;
    }
    if(carry != 0){
    	result.push_back(carry);
    }
    addTwoArrayRE(arr,brr,result,n,m,carry);
    return result;
}

int main()
{
    vector<int>arr{8,5};
    vector<int>brr{1,3};

    vector<int>ans; 
    int n = arr.size()-1;
    int m = brr.size()-1;
    addTwoArray(arr,brr,ans,n,m,0);
    for(auto i: ans)
       cout<<i<<" ";
    cout<<endl;
    vector<int>result;
    int carry=0;
    addTwoArrayRE(arr,brr,result,n,m,carry);
    reverse(result.begin(), result.end());
    for(auto j:result)
    {
        cout<<j<<" ";
    }
    return 0;
}