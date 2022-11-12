/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;
        for(int i=(n-1);i>=0;i--) {
            int num = digits[i] + carry;
            digits[i] = num%10;
            carry = num/10;
        }
        if(carry > 0) {
            digits.push_back(0);
            for(int i=(n-1);i>=0;i--) {
                digits[i] = digits[i-1];
            }
            digits[0] = carry;
        }
    return digits;
    }
};
// @lc code=end

