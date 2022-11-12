#include<bits/stdc++.h>
using namespace std;
int knapSack(int V[], int W[], int n, int capacity) {
    int dp[1+n][1+capacity];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=capacity;j++) {
            if(i==0 || j==0) {
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=capacity;j++) {
            if(j>=W[i-1]) {
                dp[i][j] = max(dp[i-1][j], V[i-1] + dp[i-1][j-W[i-1]]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][capacity];
}
int main() {
    
    return 0;
}