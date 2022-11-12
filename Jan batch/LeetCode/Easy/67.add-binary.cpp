/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;
        while(i >= 0 || j >= 0) {
            int sum = carry;
            if(i>=0) {
                sum = sum + (a[i] - '0');
                i--;
            }
            if(j>=0) {
                sum = sum + (b[j] - '0');
                j--;
            }
            carry = sum>1 ? 1 : 0;
            result += to_string(sum%2);
        }
        if(carry) {
            result += to_string(carry);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

