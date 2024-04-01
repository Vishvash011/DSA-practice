#include<iostream>
#include<string.h>
using namespace std;
string removeDigit(string number, char digit) {
    string res = "";
    for(int i=0; i<number.size(); i++){
        if(number[i] == digit){
            string temp = number.substr(0, i) + number.substr(i+1);
            res = max(res, temp);
        }
    }
    return res;
}
int main()
{
    string number = "123453";
    char digit = '3';
    cout << removeDigit(number, digit);

return 0;
}