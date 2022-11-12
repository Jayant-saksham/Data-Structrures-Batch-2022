#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001] = {-1};
int lcs(string a, string b, int n, int m) {
    if(n == 0 || m == 0) {
        return 0;
    }
    if(a[n-1] == b[m-1]) {
        return 1 + lcs(a, b, n-1, m-1);
    }
    return max(lcs(a, b, n-1, m), lcs(a, b, n, m-1));
}

int lcs_DP(string a, string b, int n, int m) {
    if(n == 0 || m == 0) {
        return 0;
    }
    if(dp[n][m]>0) {
        return dp[n][m];
    }
    if(a[n-1] == b[m-1]) {
        dp[n][m] = 1 + lcs_DP(a, b, n-1, m-1);
        return dp[n][m];
    }
    dp[n][m] = max(lcs_DP(a, b, n-1, m), lcs_DP(a, b, n, m-1));
    return dp[n][m];
}

int lcs_tab(string a, string b, int n, int m) {
    int dp[1+n][1+m];
    for(int i=0;i<=n;i++) {
        dp[i][0] = 0;
    }
    for(int j=0;j<=m;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main() {
    int dp[1001][1001];
    memset(dp, -1, sizeof(dp));

    return 0;
} 