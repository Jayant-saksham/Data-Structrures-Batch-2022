#include<bits/stdc++.h>
using namespace std;
int palindrome_deletion(string a) {
    int n = a.size();
    string b = a;
    reverse(b.begin(), b.end());
    int dp[1+n][1+n];
    for(int i=0;i<=n;i++) {
        dp[i][0] = 0;
    }
    for(int j=0;j<=n;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int lcs = dp[n][n];
    return n - lcs;
}

int main() {
    
    return 0;
}