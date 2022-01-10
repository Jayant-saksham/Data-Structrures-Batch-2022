#include<bits/stdc++.h>
using namespace std;
void print_maze_path(int n, int m, int i, int j, string ans) {
    if(i ==n-1 && j == m-1) {
        cout<<ans<<endl;
        return;
    }
    if(i<n) {
        print_maze_path(n, m, i+1, j, ans + "v");
    }
    if(j<m) {
        print_maze_path(n, m, i, j+1, ans + "h");
    }
}
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    print_maze_path(n, m, 0,0,"");
    return 0;
}