// Leet- 121- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int maxProfit = 0, bestBuy= prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i]> bestBuy)
        {
            maxProfit = max(maxProfit, prices[i]- bestBuy);
        }
        bestBuy= min(bestBuy, prices[i]);   
    }
    cout<< maxProfit;
}

//https://lmarena.ai/c/06c64ce4-12f7-482a-b2f4-21e1032041d6