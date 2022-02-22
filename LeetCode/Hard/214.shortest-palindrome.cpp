/*
 * @lc app=leetcode id=214 lang=cpp
 *
 * [214] Shortest Palindrome
 */

// @lc code=start
class Solution {
public:
    int pie_table(string s) {
        int n = s.size();
        int PIE[n];
        PIE[0] = 0;
        int i = 0;
        int j = 1;
        while(j<n) {
            if(s[i] == s[j]) {
                PIE[j] = i+1;
                i++;
                j++;
            }
            else {
                if(i == 0) {
                    PIE[j] = 0;
                    j++;
                }
                else {
                    i = PIE[i-1];
                }
            }
        }

        return PIE[n-1];
    }
    string shortestPalindrome(string s) {
        string temp = s;
        int n = s.size();
        reverse(temp.begin(), temp.end());
        string newString = s + "-" + temp;
        int common =  pie_table(newString); 
        int to_taken = n - common;
        return temp.substr(0, to_taken) + s;
    }
};
// @lc code=end

