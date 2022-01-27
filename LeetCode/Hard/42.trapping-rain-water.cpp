/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int left= 0;
        int right = height.size() - 1;
        int ans = 0;
        int lmax = -1;
        int rmax = -1;
        while(right>left) {
            if(height[left]<height[right]) {
                if(height[left]>=lmax) {
                    lmax = height[left];
                }
                else {
                    ans = ans + lmax-height[left];
                }
                left++;
            }
            else {
                if(height[right]>=rmax) {
                    rmax = height[right];
                }
                else {
                    ans = ans + rmax-height[right];
                }
                right--;
            }
        } 
        return ans;   
    }
};
// @lc code=end

