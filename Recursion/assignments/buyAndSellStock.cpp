#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int buyAndSellStockIterative(vector<int>&prices)
{
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(auto price : prices)
    {
        minPrice = min(minPrice,price);
        maxProfit = max(maxProfit, price - minPrice);
    }
    return maxProfit;
}

void buyAndSellStockRecursive(vector<int>&prices, int& minPrice, int& maxProfit , int i = 0)
{
    if(i == prices.size())
    {
        return ;
    }
    minPrice = min(minPrice,prices[i]);
    maxProfit = max(maxProfit, prices[i] - minPrice);

    buyAndSellStockRecursive(prices, minPrice, maxProfit, i + 1);
}
int main()
{
    vector<int>prices{7,1,5,3,6,4};
    int ans = buyAndSellStockIterative(prices);
    cout<<ans<<endl;
    int minPrice = INT_MAX;
    int maxProfits = 0;
    buyAndSellStockRecursive(prices, minPrice, maxProfits);
    cout<<maxProfits<<endl;
    return 0;
}