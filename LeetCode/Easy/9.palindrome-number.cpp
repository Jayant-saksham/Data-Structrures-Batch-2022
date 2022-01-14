/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }    
        long int num = 0;
        int y = x;
        while(x > 0) {
            int last = x%10;
            num = num*10 + last;
            x /= 10;
        }
        if(num == y) {
            return true;
        }
        return false;
    }
};
// @lc code=end

