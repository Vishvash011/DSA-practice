#include<iostream>
#include<string.h>
using namespace std;
bool checkKey(string& str, int& i, int& n, char& key)
{
    if(i >= n)
    {
        return false;
    }
    
    if(str[i] == key)
    {
        return true;
    }
    int newi = i + 1;
    return checkKey(str, newi, n, key);
}
int main()
{
    string str = "vishvash";
    int n = str.length();

    char key = 'o';

    int i = 0;

    bool ans = checkKey(str, i, n, key);
    cout<<"answer is : "<<ans;
    return 0;       
}