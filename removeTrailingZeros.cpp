#include<iostream>
#include<string.h>
using namespace std;
 string removeTrailingZeros(string num) {
    int n = num.length()-1;
    while(n>=0)
    {
        if(num[n]!='0')
        {
            return num;
        }
        else{
            num.pop_back();
        }
        n--;
    }
    return num;
}
int main()
{
    string num = "1234560010";
    cout<<removeTrailingZeros(num);
    return 0;
}