/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maximum_one = 0;
        int count = 0;
        for(int i=0;i<n;i++) {
            if(nums[i] == 1) {
                count++;
            }
            else {
                count = 0;
            }
            maximum_one = max(maximum_one, count);
        }
        return maximum_one;
    }
};
// @lc code=end

