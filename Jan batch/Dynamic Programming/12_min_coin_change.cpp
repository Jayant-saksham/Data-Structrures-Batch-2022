#include<bits/stdc++.h>
using namespace std;
int min_coin(int pay, int coin[], int n, int *dp) {
    if(pay == 0) {
        return 0;
    }
    if(dp[pay]!=0) {
        return dp[pay];
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++) {
        if(pay - coin[i] >=0) {
            int smallAns = min_coin(pay - coin[i], coin, n, dp);
            ans = min(ans, smallAns + 1);
        }
    }
    dp[pay] =  ans;
    return ans;
}

int min_coin_change_TAB(int pay, int coin[], int n) {
    int *dp = new int[pay+1];
    dp[0] = 0;
    for(int i=0;i<=pay;i++) {
        for(int j=0;j<n;j++) {
            if(i-coin[j]>=0) {
                dp[i] = min(dp[i], dp[i-coin[j]]);
            }
        }
    }
    return dp[pay];
}

int main() {
    int A[] = {1,7,10};
    int pay = 16;
    int dp[pay+1] = {0};
    cout<<min_coin(pay, A, 3, dp)<<endl;
    return 0;
}