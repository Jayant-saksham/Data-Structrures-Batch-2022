#include<bits/stdc++.h>
using namespace std;
int climb_stairs(int n) {
    if(n == 0) {
        return 1;
    }
    else if(n<0) {
        return 0;
    }
    int ans1 = climb_stairs(n-1);
    int ans2 = climb_stairs(n-2);
    int ans3 = climb_stairs(n-3);
    return ans1 +ans2 + ans3;
}
int climb_stairs_memorize(int n, int *dp) {
    if(n == 0) {
        return 1;
    }
    else if(n<0) {
        return 0;
    }
    if(dp[n]!=-1) {
        return dp[n];
    }
    int ans1 = climb_stairs(n-1);
    int ans2 = climb_stairs(n-2);
    int ans3 = climb_stairs(n-3);
    dp[n] =  ans1 +ans2 + ans3;
    return dp[n];
}

int climb_stairs_TAB(int n) {
    int dp[n+1];
    dp[0] = 1;
    for(int i=1;i<=n;i++) {
        if(i == 1) {
            dp[i] = dp[i-1];
        }
        else if(i == 2) {  
            dp[i] = dp[i-1] + dp[i-2];
        }
        else {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
    }
    return dp[n];
}
int main() {
    
    return 0;
}