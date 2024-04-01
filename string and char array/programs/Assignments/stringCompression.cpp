#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int compress(vector<char>& s) {
    int index = 0, count = 1;
    char prev = s[0];

    for(int i=1; i<s.size(); ++i)
    {
        if(s[i] == prev)
        {
            count++;
        }
        else{
            s[index++] = prev;
            cout<<"prev :"<<prev<<endl; 
            cout<<"index :"<<index<<endl;
            if(count > 1)
            {
                int start = index;
                while(count)
                {
                    s[index++] = (count % 10) + '0';
                    cout<<"index :"<<index<<endl;
                    count/=10; 
                }
                reverse(s.begin() + start, s.begin() + index);
            }
            prev = s[i];
            cout<<"prev :"<<prev<<endl;
            count = 1;
            // cout<<"count :"<<count<<endl;
        }
    }
    s[index++] = prev;
    cout<<"index :"<<index<<endl;
    if(count > 1)
    {
        int start = index;
        while(count)
        {
            s[index++] = (count % 10) + '0';
            cout<<"index :"<<index<<endl;
            count/=10; 
        }
        reverse(s.begin() + start, s.begin() + index);
    }
    return index;
}
int main()
{
    vector<char> s{'a','a','b','b','c','d'};
    cout<<"Before compression: ";
    for(auto c : s)
    cout<<c<<" ";
    cout<<endl;
    int n = compress(s);
    cout<<"After compression: ";
    for(int i=0; i<n; ++i)
    cout<<s[i];
    cout<<endl;
    return 0;  
}