#include<bits/stdc++.h>
using namespace std;;
int climb_stair(int n) {
    if(n == 0) {
        return 1;
    }
    else if(n < 0) {
        return 0;
    }
    int ans1 = climb_stair(n-1);
    int ans2 = climb_stair(n-2);
    int ans3 = climb_stair(n-3);
    int total = ans1 + ans2 + ans3;
    return total;
}
// Memorization
int climb_stair_memorize(int n, vector<int> &memory) {
    if(n == 0) {
        return 1;
    }
    else if(n < 0) {
        return 0;
    }
    if(memory[n]!=-1) {
        return memory[n];
    }
    int ans1 = climb_stair_memorize(n-1, memory);
    int ans2 = climb_stair_memorize(n-2, memory);
    int ans3 = climb_stair_memorize(n-3, memory);
    int total = ans1 + ans2 + ans3;
    memory[n] = total;
    return total;
}
// Tabulation
int climb_stair_tabulation(int n) {
    vector<int> dp(n+1 ,-1);
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
    int n;
    cin>>n;
    cout<<climb_stair_tabulation(n)<<endl;
    return 0;
}