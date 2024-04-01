#include<iostream>
#include<string.h>
using namespace std;
bool palindromString(char str[])
{
    int i = 0;
    int n = strlen(str);
    int j = n - 1;
    while(i <= j)
    {
        if(str[i] != str[j])
        {
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char str[10];
    cin>>str;
    cout<<str<<endl;
    bool ans = palindromString(str);
    if(ans == true)
    {
        cout<<"It's palindrome"<<endl;
    }
    else{
        cout<<"It's not palindrome"<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = 20; 
//     cout<<"a : "<<a<<" B : "<<b<<endl;
//     a = a ^ b;
//     b = a^b;
//     a = a^b;
//     cout<<"a : "<<a<<" B : "<<b<<endl;
//     return 0;
// }
