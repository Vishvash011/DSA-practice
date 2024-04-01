#include <iostream>
#include <string>
#include <limits.h>
#include<algorithm>
#include<vector>
using namespace std;
int findMinDifference(vector<string> &timePoints)
{
    // step 1 : convert string to integer
    vector<int> minutes;
    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];

        int hours = stoi(curr.substr(0, 2));
        int minut = stoi(curr.substr(3, 2));
        int totalMinutes = hours * 60 + minut;
        minutes.push_back(totalMinutes);
    }
    // step 2 : sort
    sort(minutes.begin(), minutes.end());

    // step 3 : difference and calculate min difference
    int mini = INT_MAX;
    int n = minutes.size();

    for (int i = 0; i < n - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }

    // something misssing : This is the GAME
    int lastDiff1 = (minutes[0] + 1440) - minutes[n - 1];
    int lastDiff2 = minutes[n - 1] - minutes[0];
    int lastDiff = min(lastDiff1, lastDiff2);
    mini = min(mini, lastDiff);

    return mini;
}
int main()
{
    vector<string>timePoints{"12:56" , "19:48" , "00:15" , "23:49" , "11:54"};
    cout<<"minimum time difference is : "<<findMinDifference(timePoints)<<" Minutes"<<endl;
    return 0;
}