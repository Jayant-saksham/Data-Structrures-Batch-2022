#include<bits/stdc++.h>
using namespace std;
int unbounded_knapsack(int V[], int W[], int n, int capacity) {
    int dp[1+n][1+capacity];
    for(int i=0;i<=n;i++) {
        dp[i][0] = 0;
    }
    for(int j=0;j<=capacity;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=capacity;j++) {
            if(j>=W[i-1]) {
                dp[i][j] = max(V[i-1] + dp[i][j-W[i-1]], dp[i-1][j]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][capacity];
}
int main(){
    int val[] = {10, 40, 50, 70};
    int wt[]  = {1, 3, 4, 5};
    int n = 4;
    int cap = 8;
    cout<<unbounded_knapsack(val, wt, n, cap)<<endl;
    return 0;
}