/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    int n = 9;
    bool _isValidSudoku(vector<vector<char>>& board, int row, int col) {
        for(int i=0;i<n;i++) {
            if(i!=row) {
                if(board[i][col] == board[row][col]) {
                    return false;
                }
            }
        }
        for(int j=0;j<n;j++) {
            if(j!=col) {
                if(board[row][j] == board[row][col]) {
                    return false;
                }
            }
        }
        int start_x = 3*(row/3);
        int start_y = 3*(col/3);
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                if(i+start_x!=row && j+start_y!=col) {
                    if(board[i+start_x][j+start_y] == board[row][col]) {
                        return false;
                    }
                }
            }
        }
        return true;

    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(board[i][j]!='.') {
                    if(!_isValidSudoku(board, i, j)) {
                        return false;
                    }
                }
            }
        }
        return true;        
    }
};
// @lc code=end

