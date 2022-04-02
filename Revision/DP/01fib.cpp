#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int fib_memorized(int n, int *dp) {
    if(n == 0 || n == 1) {
        return n;
    }
    if(dp[n]!=-1) {
        return dp[n];
    }
    int ans = fib(n-1) + fib(n-2);
    dp[n] = ans;
    return ans;
}

int fib_tab(int n) {
    int dp[1+n];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    
    return 0;
}