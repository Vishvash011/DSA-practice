#include <iostream>
#include <string>
using namespace std;
string removeOccurrences(string s, string part)
{
    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}
int main()
{
    string s = "axxxxyyyyb";
    string part = "xy";
    cout<<removeOccurrences(s , part);
    return 0;
}