#include<bits/stdc++.h>
using namespace std;
bool target_sum_subset(int A[], int n, int target) {
    bool dp[1+n][1+target];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=target;j++) {
            if(i==0 && j==0) {
                dp[i][j] = true;
            }
            else if(i==0) {
                dp[i][j] = false;
            }
            else if(j == 0) {
                dp[i][j] = true;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=target;j++) {
            if(j>=A[i-1]) {
                dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target];
}
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int target;
    cin>>target;
    cout<<target_sum_subset(A, n, target)<<endl;
    return 0;
}