/*
 * @lc app=leetcode id=416 lang=cpp
 *
 * [416] Partition Equal Subset Sum
 */

// @lc code=start
class Solution {
public:
    bool targetSum(vector<int> &nums, int target) {
        int n = nums.size();
        bool dp[1+n][1+target];
        for(int j=0;j<=target;j++) {
            dp[0][j] = false;
        }
        for(int i=0;i<=n;i++) {
            dp[i][0] = true;
        }
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=target;j++) {
                if(j>=nums[i-1]) {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][target];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i : nums) {
            sum += i;
        }
        if(sum&1) {
            return false;
        }
        return targetSum(nums, sum/2);
        
                
    }
};
// @lc code=end

