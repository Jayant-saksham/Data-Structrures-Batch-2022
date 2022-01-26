/*
 * @lc app=leetcode id=52 lang=cpp
 *
 * [52] N-Queens II
 */

// @lc code=start
class Solution {
private:
    bool isValid(int row, int col, int n, vector<vector<int>> &nqueen) {
        for(int i=0;i!=row;i++) {
            if(nqueen[i][col] == 1) {
                return false;
            }
        }
        for(int i=row-1, j=col-1;i>=0 && j>=0;i--,j--) {
            if(nqueen[i][j] ==1) {
                return false;
            }
        }
        for(int i=row-1, j=col+1;i>=0 && j<n;i--, j++) {
            if(nqueen[i][j] == 1) {
                return false;
            }
        }
        return true;
    }
    void _nqueen(int n, int row, int &ans, vector<vector<int>> &v) {
        if(row>=n) {
            ans++;
            return;
        }
        for(int col=0;col<n;col++) {
            if(isValid(row, col, n, v)) {
                v[row][col] = 1;
                _nqueen(n, row+1, ans, v);
                v[row][col] = 0;
            }
        }
    }
public:
    int totalNQueens(int n) {
        vector<vector<int>> v(n, vector<int> (n));
        int ans = 0;
        _nqueen(n, 0, ans, v);
        return ans;        
    }
};
// @lc code=end

