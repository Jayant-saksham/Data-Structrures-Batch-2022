#include<bits/stdc++.h>
using namespace std;
int knapSack(int V[], int W[], int n, int target) {
    int dp[1+n][1+target];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=target;j++) {
            if(i==0 || j ==0){
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=target;j++) {
            if(j >= W[i-1]) {
                dp[i][j] = max(dp[i-1][j], V[i-1] + dp[i-1][j - W[i-1]]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target];
}
int main() {
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    cout<<knapSack(val, wt, 4, W)<<endl;
    return 0;
}