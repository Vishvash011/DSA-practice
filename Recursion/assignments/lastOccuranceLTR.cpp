#include<iostream>
using namespace std;
void lastOccuranceLTR(string& s, char x, int i, int& ans)
{
    //base case
    if(i >= s.size()){
        return ;
    }
    // ek case solve
    if(s[i] == x){
        ans = i;
    }
    //remaining recursion sambhal lega
    lastOccuranceLTR(s, x, i+1, ans);
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
    lastOccuranceLTR(s, x, 0, ans);
    cout<<ans<<endl;
    return 0;
}