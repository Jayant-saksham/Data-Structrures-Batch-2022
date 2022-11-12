/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxii = INT_MIN;
        int cur_sum = 0;
        for(int i=0;i<nums.size();i++) {
            cur_sum += nums[i];
            maxii = max(maxii, cur_sum);
            if(cur_sum < 0) {
                cur_sum = 0;
            }
        }
        return maxii;
    }
};
// @lc code=end

