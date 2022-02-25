/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k;
        int l;
        for(k = (n-2);k>=0;k--) {
            if(nums[k] < nums[k+1]) {
                break;
            }            
        }
        if(k<0) {
            reverse(nums.begin(), nums.end());
        }
        else {
            for(l = (n-1);l>k;l--) {
                if(nums[l] > nums[k]) {
                    break;
                }
            }
            swap(nums[k], nums[l]);
            reverse(nums.begin() + k+1, nums.end());
        }
        
    }
};
// @lc code=end

