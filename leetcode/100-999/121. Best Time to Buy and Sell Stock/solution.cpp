class Solution {
    public:
        int maxProfit(vector<int>& prices) 
        {
            int profit = 0;
            int minimum = prices[0];

            for (int i = 0; i < prices.size(); ++i)
            {
                int curr = prices[i];
                minimum = min(curr, minimum);
                profit = max(curr - minimum, profit);
            } 

            return profit;
        }
};