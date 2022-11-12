#include<bits/stdc++.h>
using namespace std;
void flood_fill(vector<vector<int>> v, int n, int m,int i, int j, string ans, vector<vector<bool>> visited) {
    if(i<0 || j<0 || i>=n || j>=m || v[i][j] == 1 || visited[i][j] == true) {
        return;
    }
    if(i == n-1 && j == m-1) {
        cout<<ans<<endl;
        return;
    }
    visited[i][j] = true;
    flood_fill(v, n, m, i+1, j, ans+"d", visited);
    flood_fill(v, n, m, i, j+1, ans+"r", visited);
    flood_fill(v, n, m, i-1, j, ans+"u", visited);
    flood_fill(v, n, m, i, j-1, ans+"l", visited);
}
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>> v(n, vector<int> (m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>v[i][j];
        }
    }
    vector<vector<bool>> visited(n, vector<bool> (m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            visited[i][j] = false;
        }
    }
    flood_fill(v, n, m, 0,0,"", visited);
    return 0;
} 