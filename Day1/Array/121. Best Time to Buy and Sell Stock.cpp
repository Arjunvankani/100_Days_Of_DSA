class Solution {
public:
     int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=INT_MAX;
        int maxPrice=0;
        for(int i=0;i<n;i++)
        {
            buy=min(buy,prices[i]);
            maxPrice=max(maxPrice,prices[i]-buy);
        }
        return maxPrice;
    }
};
