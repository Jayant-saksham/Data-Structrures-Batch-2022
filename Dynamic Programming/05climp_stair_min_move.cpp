#include<bits/stdc++.h>
using namespace std;
int min_jumps(int A[], int n) {
    int *dp = new int[n+1];
    for(int i=0;i<=n;i++) {
        dp[i] = NULL;
    }
    dp[n] = 0;
    for(int i=(n-1);i>=0;i--) {
        if(A[i]>0) {
            int minimum = INT_MAX;
            for(int j=1;j<=A[i] && i+j<=n ;i++) {
                minimum = min(minimum, dp[i+j]);
            }
            if(minimum!=INT_MAX) {
                dp[i] = 1 + minimum;
            }
            else {
                dp[i] = 0;
            }
        }
    }
    return dp[0];
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    return 0;
}