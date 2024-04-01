#include<iostream>
#include<algorithm>
using namespace std;
void addRE(string& num1, int p1, string& num2, int p2, int carry, string& ans)
{
    //base case
    if(p1 < 0 && p2 < 0)
    {
        if(carry != 0)
        {
            ans.push_back(carry + '0');
        }
        return ;
    }
    //ek case solve
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
    int sum = n1 + n2 + carry;
    int digit = sum % 10;
    carry = sum / 10;
    //add the current digit to answer
    ans.push_back(digit + '0');
    //recursively call for next digits
    addRE(num1, p1-1, num2, p2-1, carry, ans);
}
string addStrings(string& num1, string& num2)
{
    string ans = "";
    addRE(num1, num1.size()-1, num2, num2.size()-1, 0, ans);
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string num1 = "143";
    string num2 = "88";
    string result = addStrings(num1,num2);
    cout<<result<<endl;
    return 0;
}