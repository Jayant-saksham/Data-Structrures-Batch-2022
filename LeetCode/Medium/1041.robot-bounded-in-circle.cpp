/*
 * @lc app=leetcode id=1041 lang=cpp
 *
 * [1041] Robot Bounded In Circle
 */

// @lc code=start
class Solution {
public:
    bool isRobotBounded(string instructions) {
        char current_direction = 'N';
        int x = 0;
        int y = 0;
        for(int i=0;i<instructions.length();i++) {
            // TO move
            if(instructions[i] == 'G') {
                y += current_direction == 'N' ? 1 : 0;
                y += current_direction == 'S' ? -1 : 0;
                x += current_direction == 'E' ? 1 : 0;
                x += current_direction == 'W' ? -1 : 0;
            }
            // To change the direction
            else {
                char incoming = instructions[i];
                if(current_direction == 'N') {
                    current_direction = incoming == 'L' ? 'W' : 'E';
                }
                else if(current_direction == 'W') {
                    current_direction = incoming == 'L' ? 'S' : 'N';
                }
                else if(current_direction == 'S') {
                    current_direction = incoming == 'L' ? 'E' : 'W';
                }
                else {
                    current_direction = incoming == 'L' ? 'N' : 'S';
                }

            }
        }
        if(x == 0 && y == 0 || current_direction!='N') {
            return true;
        }
        return false;
        
    }
};

// recurision + backtracking + leetcode (30) + revision 
// @lc code=end

