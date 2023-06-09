//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int l=0,r=0;
        while(r<prices.size())
        {
            if(prices[l]<prices[r])
            {
                maxp=max(maxp,prices[r]-prices[l]);
            }
            else
            l=r;
            r++;
        }
        return maxp;
    }
};