#include<bits/stdc++.h>
using namespace std;

int minDifference(int A[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += A[i];
    }
    bool dp[1+n][1+sum];
    for(int j=0;j<=sum;j++) {
        dp[0][j] = false;
    }
    for(int i=0;i<=n;i++) {
        dp[i][0] = true;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=sum;j++) {
            if(j>=A[i-1]) {
                dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    int i = n;
    int s1 = 0;
    for(int j=(sum/2);j>=0;j--) {
        if(dp[i][j] == true) {
            s1 = j;
            break;
        }
    }
    int diff = sum - 2 * s1;
    return diff; 
}

int main() {
    
    return 0;
}