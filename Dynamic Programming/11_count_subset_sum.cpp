#include<bits/stdc++.h>
using namespace std;
int countSubset(int A[], int n, int target) {
    int dp[1+n][1+target];
    for(int j=0;j<=target;j++) {
        dp[0][j] = 0;
    }
    
    for(int i=0;i<=n;i++) {
        dp[i][0] = 1;
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=target;j++) {
            if(j>=A[i-1]) {
                dp[i][j] = dp[i-1][j] + dp[i-1][j-A[i-1]];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target];
}

int main() {
    
    return 0;
}