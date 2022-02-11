/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string result1 = "";
        string result2 = "";
        for(int i=0;i<s.size();i++) {
            if(s[i]>='a' && s[i]<='z') {
                result1 += s[i];
            }
            else if(!result1.empty()) {
                result1.pop_back();
            }
        }
        for(int i=0;i<t.size();i++) {
            if(t[i]>='a' && t[i]<='z') {
                result2 += t[i];
            }
            else if(!result2.empty()) {
                result2.pop_back();
            }
        }
        if(result1.compare(result2) == 0) {
            return true;
        }        
        return false;
    }
};
// @lc code=end

