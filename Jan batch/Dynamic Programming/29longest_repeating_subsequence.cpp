#include<bits/stdc++.h>
using namespace std;
int longest_repeating_subsequence(string a) {
    int n = a.size();
    string b = a;
    int dp[1+n][1+n];
    for(int i=0;i<=n;i++) {
        dp[i][0] = 0;
    }
    for(int j=0;j<=n;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(a[i-1] == b[j-1] && i!=j) {
                dp[i][j] = 1+ dp[i-1][j];
            }
            else {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }
    return dp[n][n];
}
int main(){
    
    return 0;
}