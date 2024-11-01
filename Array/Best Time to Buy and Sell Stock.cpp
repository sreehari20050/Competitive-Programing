class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost, n = prices.size() , mini = prices[0];
        int profit = 0;
        for(int i = 1 ; i < n ; i++){
            cost = prices[i] - mini;
            profit = max(cost,profit);
            mini = min(mini,prices[i]);
        }
        return profit;
    }
};
