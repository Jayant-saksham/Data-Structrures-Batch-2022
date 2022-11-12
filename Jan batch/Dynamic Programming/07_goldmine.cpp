#include<bits/stdc++.h>
using namespace std;
int goldMine(vector<vector<int>> &v, int n, int m) {
    int **dp = new int *[n];
    for(int i=0;i<n;i++) {
        dp[i] = new int[m];
    }
    for(int j=(m-1);j>=0;j--) {
        for(int i=0;i<n;i++) {
            if(j==(m-1)) {
                dp[i][j] = v[i][j];
            }
            else if(i == 0) {
                dp[i][j] = v[i][j] + max(dp[i][j+1], dp[i+1][j+1]);
            }
            else if(i == (n-1)) {
                dp[i][j] = v[i][j] + max(dp[i][j+1], dp[i-1][j+1]);
            }
            else {
                dp[i][j] = v[i][j] + max(dp[i][j+1], max(dp[i-1][j+1], dp[i+1][j+1]));
            }
        }
    }
    int ans = INT_MIN;
    int j=0;
    for(int i=0;i<n;i++) {
        ans = max(ans, dp[i][j]);
    }
    return ans;
}
int main() {
    
    return 0;
} 