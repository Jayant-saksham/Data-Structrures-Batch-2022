#include<bits/stdc++.h>
using namespace std;
int count_sets_target(int A[], int n, int target) {
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

int countWays(int A[], int n, int target) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += A[i];
    }
    int subset = (target + sum) / 2;
    return count_sets_target(A, n, subset);
}

int main() {
    int A[] = {1,1,1,1,1};
    int n = sizeof(A)/sizeof(A[0]);
    int target = 3;
    cout<<countWays(A, n, target)<<endl;
    return 0;
}