#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int buyChoco(vector<int>& prices, int money) {
    sort(prices.begin(),prices.end());
    int total = prices[0]+prices[1];
    if(total <= money)
    {
        return money - total;
    }
    else{
        return money;
    }
}
int main()
{
    vector<int>prices{1,2,2};
    int money = 3;
    cout<<buyChoco(prices,money);
    return 0;
}