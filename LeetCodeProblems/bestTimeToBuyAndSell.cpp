#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int buy = INT_MAX;
    int buyDay;
    for(int i=0; i<prices.size(); i++)
    {
        if(prices[i] < buy)
        {
            buy = prices[i];
            buyDay = i;
        }
    }
    int sell = INT_MIN;
    int sellDay;
    for(int i=buyDay; i<prices.size(); i++)
    {
        if(prices[i] > sell)
        {
            sell = prices[i];
            sellDay = i;
        }
        else{
            if(prices[i] > buy)
            {
                int minsell = prices[i];
            }
            else{
                return 0;
            }
        }
    }
    return prices[sellDay] - prices[buyDay];
}
int main()
{
    vector<int>prices{7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}