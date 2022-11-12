/*
 * @lc app=leetcode id=164 lang=cpp
 *
 * [164] Maximum Gap
 */

// @lc code=start
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        // int n = nums.size();
        // if(n<2) {
        //     return 0;
        // }
        // sort(nums.begin(), nums.end());
        // int ans = 0;
        // for(int i=1;i<n;i++) {
        //     int gap = nums[i] - nums[i-1];
        //     if(gap > ans) {
        //         ans = gap;
        //     }
        // }
        // return ans;
        
        
        
        
        
        
        int n = nums.size();
        if(n < 2) {
            return 0;
        }
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        for(int i=0;i<n;i++) {
            if(nums[i] > maximum) {
                maximum = nums[i];
            }
            if(nums[i] < minimum) {
                minimum = nums[i];
            }
        }
        
        int interval = ceil((double)(maximum - minimum)/(double)(n-1));
        vector<int> bucketMax(n-1, INT_MIN);
        vector<int> bucketMin(n-1, INT_MAX);
        for(int i=0;i<n;i++) {
            int x = nums[i];
            if(x == maximum || x == minimum) {
                continue;
            }
            int idx = (nums[i] - minimum)/interval;
            bucketMax[idx] = max(bucketMax[idx], nums[i]);
            bucketMin[idx] = min(bucketMin[idx], nums[i]);
        }
        int prev = minimum;
        int ans = 0;
        for(int i=0;i<n-1;i++) {
            if(bucketMax[i] == INT_MIN && bucketMin[i] == INT_MAX) {
                continue;
            }
            int gap = bucketMin[i] - prev;
            ans = max(gap, ans);
            prev = bucketMax[i];
        }
        return max(ans, maximum - prev);
    }
};
// @lc code=end

