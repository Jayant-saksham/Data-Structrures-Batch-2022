#include<bits/stdc++.h>
using namespace std;
int climb_stairs_steps(int n) {
    vector<int> dp(n+1,-1);
    dp[0] = 1;
    for(int i=1;i<=n;i++) {
        if(i == 1) {
            dp[i] = dp[i-1];
        }
        else {
            dp[i] = dp[i-1] + dp[i-2];
        }
    }
    return dp[n];
}
int main() {
    
    return 0;
}