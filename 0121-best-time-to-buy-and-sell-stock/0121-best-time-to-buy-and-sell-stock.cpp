class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX; // Initialize to a large value

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // Update the minimum price
            } else {
                // Calculate the profit if selling at the current price
                int profit = price - minPrice;
                if (profit > maxProfit) {
                    maxProfit = profit; // Update the maximum profit
                }
            }
        }

        return maxProfit;
    }
};
