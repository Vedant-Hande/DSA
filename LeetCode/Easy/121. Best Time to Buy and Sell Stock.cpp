// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0 , bestBuy = prices[0];
        for ( int i =1; i <prices.size(); i++)
        {
            if (prices[i] > bestBuy)
            {
                mp = max(mp,prices[i]-bestBuy);
            }

            bestBuy = min(bestBuy, prices[i]); 
        }
        return mp;
    }
};