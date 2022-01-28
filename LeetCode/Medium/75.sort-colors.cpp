/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Approach 1
        // sort(nums.begin(), nums.end());
        
        // Approach 2
        // int count0= 0 ;
        // int count1 = 0;
        // int count2 = 0;
        // for(int i=0;i<nums.size();i++) {
        //     if(nums[i] == 0) {
        //         count0++;
        //     }
        //     else if(nums[i] == 1) {
        //         count1++;
        //     }
        //     else {
        //         count2++;
        //     }
        // }
        // for(int i=0;i<count0;i++) {
        //     nums[i] = 0;
        // }
        // for(int i=count0;i<(count0+count1);i++) {
        //     nums[i] = 1;
        // }
        // for(int i=(count0+count1);i<(count0+count1+count2);i++) {
        //     nums[i] = 2;
        // }
        
        
        
        
        // Approach 3
        
        int l = 0;
        int m = 0;
        int n = nums.size();
        int h = n-1;
        while(m<=h) {
            int x = nums[m];
            if(x == 0) {
                swap(nums[l], nums[m]);
                m++;
                l++;
            }
            else if(x == 1) {
                m++;
            }
            else {
                swap(nums[m], nums[h]);
                h--;
            }
        }
        
        
        
    }
};
// @lc code=end

