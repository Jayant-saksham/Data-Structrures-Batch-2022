/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        if(n == 0) {
            return ans;
        }
        long long nn = n;
        if(nn < 0) {
            nn = nn*-1;
        }
        while(nn > 0) {
            if(nn%2 == 1) {
                ans = ans *x;
                nn = nn -1;
            }
            else {
                x = x * x;
                nn = nn>>1;
            }
        }
        if(n<0) {
            ans = (double)(1.0) / (double) (ans);
        }
        return ans;
    }
};
// @lc code=end

