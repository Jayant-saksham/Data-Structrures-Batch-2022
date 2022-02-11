/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
private:
    void mark_current(vector<vector<char>>& grid, int x, int y, int r, int c) {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!='1') {
            return;
        }
        grid[x][y] = '2';
        mark_current(grid, x+1, y, r, c);
        mark_current(grid, x, y+1, r, c);
        mark_current(grid, x-1, y, r, c);
        mark_current(grid, x, y-1, r, c);
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int num_of_island = 0;
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                if(grid[i][j] == '1') {
                    mark_current(grid, i, j, rows, cols); 
                    num_of_island += 1;
                }
            }
        }
        return num_of_island;
    }
};
// @lc code=end

