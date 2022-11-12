/*
 * @lc app=leetcode id=37 lang=cpp
 *
 * [37] Sudoku Solver
 */

// @lc code=start
class Solution {
public:
    bool isValid(vector<vector<char>>& board, int i, int j, char val) {
        for(int x=0;x<9;x++) {
            if(board[x][j] == val) {
                return false;
            }
        }
        for(int y=0;y<9;y++) {
            if(board[i][y] == val) {
                return false;
            }
        }
        int start_x = 3*(i/3);
        int start_y = 3*(j/3);
        for(int x=0;x<3;x++) {
            for(int y=0;y<3;y++) {
                if(board[x+start_x][y+start_y] == val) {
                    return false;
                }
            }
        }
        return true;
    }
    bool _solveSudoko(vector<vector<char>>& board, int i, int j) {
        if(i == 9) {
            return true;
        }
        if(j == 9) {
            return _solveSudoko(board, i+1, 0);
        }
        if(board[i][j]!='.') {
            return _solveSudoko(board, i, j+1);
        }
        else {
            for(char c = '1';c<='9';c++) {
                if(isValid(board, i, j, c)) {
                    board[i][j] = c;
                    if(_solveSudoko(board, i, j+1)) {
                        return true;
                    }
                    board[i][j] = '.';
                }
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        _solveSudoko(board, 0, 0);
    }
};
// @lc code=end

