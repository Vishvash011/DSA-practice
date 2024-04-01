#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
string convert(string s, int numRows) {
    if(numRows == 1)
    {
        return s;
    }

    vector<string>zigzag(numRows);

    int i = 0, rows = 0;
    bool direction = 1;

    while(true)
    {
        if(direction)
        {
            while(rows < numRows && i < s.size())
            {
                zigzag[rows++].push_back(s[i++]);
            }
            rows = numRows-2;
        }
        else{
            while(rows >= 0 && i < s.size())
            {
                zigzag[rows--].push_back(s[i++]);
            }
            rows = 1;
        }
        if(i >= s.size())
        {
            break;
        }
        direction = !direction;
    }
    string ans = "";
    for(int i=0; i<zigzag.size(); i++)
    {
        ans += zigzag[i];
    }
    return ans;
}
int main()
{
    string s = "ABCDEFGHIJ";
    int numRows = 3;
    cout<<"Zigzag string : "<<convert(s,numRows);
    return 0;
}