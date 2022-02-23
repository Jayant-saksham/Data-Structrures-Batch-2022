/*
 * @lc app=leetcode id=575 lang=cpp
 *
 * [575] Distribute Candies
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(int i : candyType) {
            s.insert(i);
        }
        int diff_candies = s.size();
        return min(diff_candies, n/2);
        
    }
};
// @lc code=end

