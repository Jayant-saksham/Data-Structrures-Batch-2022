#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int MCM(int A[], int n, int i, int j) {
    if(i>=j) {
        return 0;
    }
    int ans = INT_MAX;
    for(int k=i;k<j;k++) {
        int cost1 = MCM(A, n, i, k);
        int cost2 = MCM(A, n, k+1, j);
        int cost_mat = A[i-1] * A[k] * A[j];
        int total_cost = cost1 + cost2 + cost_mat;
        ans = min(ans, total_cost);
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
    dp[i][j] = INT_MAX;
    for(int k=i;k<j;k++) {
        dp[i][j] = min(MCM_DP(A, n, i, k) + MCM_DP(A, n, k+1, j) + A[i-1] * A[k] * A[j], dp[i][j]);
    }
    return dp[i][j];
}

int MCM_DP_More_Optimized(int A[], int n, int i, int j) {
    if(i>=j) {
        return 0;
    }
    if(dp[i][j]!=-1) {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for(int k=i;k<j;k++) {
        int left;
        if(dp[i][k]!=-1) {
            left = dp[i][k];
        }
        else {
            left = MCM_DP_More_Optimized(A, n, i, k);
            dp[i][k] = left;
        }
        int right;
        if(dp[k+1][j]!=-1) {
            right = dp[k+1][j];
        }
        else {
            right = MCM_DP_More_Optimized(A, n, k+1, j);
            dp[k+1][j] = right;
        }
        int mat_mul_cost = A[i-1] * A[k] * A[j];
        int temp = left + right + mat_mul_cost;
        dp[i][j] = min(temp, dp[i][j]);
    }
    return dp[i][j];

}
int main(){
    int A[] =  {4, 10, 3, 12, 20, 7};
    int n = sizeof(A)/sizeof(A[0]);
    memset(dp, -1, sizeof(dp));
    cout<<MCM(A, n, 1, n-1)<<endl;    
    return 0;
}