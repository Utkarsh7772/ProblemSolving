class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minim=prices[0];
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            minim=min(minim,prices[i]);
            int profit = prices[i]-minim;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};