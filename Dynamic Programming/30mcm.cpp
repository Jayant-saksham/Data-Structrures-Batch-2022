#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int MCM(int A[], int n, int i, int j, int ans) {
    if(i>=j) {
        return 0;
    }
    for(int k=i;k<j;k++) {
        int ans1 = MCM(A, n, i, k, ans);
        int ans2 = MCM(A, n, k+1, j, ans);
        int cost = A[i-1] * A[k] * A[j];
        int total_cost = ans1 + ans2 + cost;
        if(ans<total_cost) {
            ans = total_cost;
        }
    }
    return ans;
}

int MCM_DP(int A[], int n, int i, int j) {
    if(i>=j) {
        return 0;
    }
    if(dp[i][j]!=-1) {
        return dp[i][j];
    }
    int ans = INT_MAX;
    for(int k=i;k<j;k++) {
        int ans1 = MCM_DP(A, n, i, k);
        dp[i][k] = ans1;
        int ans2 = MCM_DP(A, n, k+1, j);
        dp[k+1][j] = ans2;
        int cost = A[i-1] * A[k] * A[j];
        int total_cost = ans1 + ans2 + cost;
        dp[i][j] = min(dp[i][j], total_cost);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    memset(dp, -1, sizeof(dp));
    return 0;
}