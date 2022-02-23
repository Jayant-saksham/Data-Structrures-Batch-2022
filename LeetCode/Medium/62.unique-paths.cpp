/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int countPathRecursion(int i, int j, int m, int n) {
        if(i==(m-1) && j == (n-1)) {
            return 1;
        }
        if(i>=m || j>=n) {
            return 0;
        }
        int downCount = countPathRecursion(i+1, j, m, n);
        int rightCount = countPathRecursion(i, j+1, m, n);
        return downCount + rightCount;
    }
    
    int countPathDP(int i, int j, int m, int n, vector<vector<int>> &dp) {
        if(i==(m-1) && j == (n-1)) {
            return 1;
        }
        if(i>=m || j>=n) {
            return 0;
        }
        if(dp[i][j]!=-1) {
            return dp[i][j];
        }
        int downCount = countPathDP(i+1, j, m, n, dp);
        int rightCount = countPathDP(i, j+1, m, n, dp);
        dp[i][j] =  downCount + rightCount;
        return downCount + rightCount;                           
    }
    
    int countPathTab(int m, int n) {
        int dp[m][n];
        for(int i=0;i<m;i++) {
            dp[i][0] = 1;
        }
        for(int j=0;j<n;j++) {
            dp[0][j] = 1;
        }
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
    
    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m , vector<int> (n, -1));
        return countPathTab(m ,n);
    }
};
// @lc code=end

