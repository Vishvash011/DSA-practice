#include<iostream>
#include<vector>
using namespace std;
void printSubsequnces(string str, string output, int i, vector<string>& ans)
{
    //base case
    if(i >= str.length())
    {
        ans.push_back(output);
        return;
    }

    //excluded

    printSubsequnces(str,  output, i+1, ans);
    
    //included
    output.push_back(str[i]);
    printSubsequnces(str, output, i + 1 ,ans);
}

int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    vector<string>ans;
    cout << "All possible subsequences of the given string are: \n";
    printSubsequnces(str, output, i, ans);
    for (auto x : ans)
        cout << x << " ";
    return 0;
}
