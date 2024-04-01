#include<iostream>
using namespace std;
int lastOccuranceRTL(string& s, char x, int i, int& ans)
{
    //base case
    if(i < 0){
        return -1;
    }
    // ek case solve
    if(s[i] == x){
        ans = i;
        return ans;
    }
    //remaining recursion sambhal lega
    lastOccuranceRTL(s, x, i-1, ans);
}
int main()
{
    string s;
    cout<<"enter the string : ";
    cin>>s;
    char x;
    cout<<"enter the finding char : ";
    cin>>x;

    int ans = -1;
    ans = lastOccuranceRTL(s, x, s.size() - 1, ans);
    cout<<ans<<endl;
    return 0;
}