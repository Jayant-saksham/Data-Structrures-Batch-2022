/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        for(;i<n;i++) {
            if(nums[i]!=0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }        
    }
};

// Jab bhi i non zero pe kadam rakh raha hai tab swap it with nums[j] and j++

// @lc code=end

