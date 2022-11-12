#include<bits/stdc++.h>
using namespace std;
int longest_common_substring(string a, string b) {
    int n = a.size();
    int m = b.size();
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
                dp[i][j] = 0;
            }
        }
    }
    return dp[n][m];
}
int main() {
    
    return 0;
}