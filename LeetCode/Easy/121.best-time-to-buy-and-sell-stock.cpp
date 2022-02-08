/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int minPrice = INT_MAX;
        int n = prices.size();
        for(int i=0;i<n;i++) {
            minPrice = min(minPrice, prices[i]);
            max_profit = max(max_profit, prices[i] - minPrice);
        }
        return max_profit;
    }
};
// @lc code=end

