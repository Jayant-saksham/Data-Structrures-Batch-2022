#include<bits/stdc++.h>
using namespace std;
int minCost(vector<vector<int>> &v, int n, int m) {
    int **dp = new int*[n];
    for(int i=0;i<n;i++) {
        dp[i] = new int[m];
    }
    for(int i=(n-1);i>=0;i--) {
        for(int j=(m-1);j>=0;j--) {
            if(i == (n-1) && j == (m-1)) {
                dp[i][j] = v[i][j];
            }
            else if(i == n-1) {
                dp[i][j] = v[i][j] + dp[i][j+1];
            }
            else if(j == m-1) {
                dp[i][j] = v[i][j] + dp[i+1][j];
            }
            else {
                dp[i][j] = v[i][j] + min(dp[i+1][j], dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
}
int main() {
    
    return 0;
}