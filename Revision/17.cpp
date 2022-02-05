#include<bits/stdc++.h>
using namespace std;
vector<string> get_maze_path(int n, int m, int i, int j) {
    if(i == n-1 && j == m-1) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    vector<string> ans;
    if(j<m){
        vector<string> ans1 = get_maze_path(n, m, i, j+1);
        for(string str : ans1) {
            ans.push_back("h" + str);
        }
    }
    if(i<n) {
        vector<string> ans2 = get_maze_path(n, m, i+1, j);
        for(string str : ans2) {
            ans.push_back("v" + str);
        }
    }
    return ans;
}

int main(){
    
    return 0;
}