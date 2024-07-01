class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_profit = 0;
        int buy_stock = INT_MAX;
        
        for(int i=0;i<prices.size();i++){
            buy_stock = min(buy_stock,prices[i]);
            max_profit = max(max_profit,prices[i] - buy_stock);
        }
    
        return max_profit;
    }
};