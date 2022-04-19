#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int egg_drop(int e, int f) {
    if(f == 0 || f == 1)  {
        return f;
    }
    if(e == 1) {
        return f;
    }
    if(dp[e][f]!=-1) {
        return dp[e][f];
    }
    int ans = INT_MAX;
    for(int k=1;k<=f;k++) {
        int breaks_min_attempt = egg_drop(e-1, k-1);
        int not_breaks_min_attempt = egg_drop(e, f-k);
        int temp = max(breaks_min_attempt, not_breaks_min_attempt) + 1;
        ans = min(temp, ans);
        dp[e][f] = ans;
    }    
    return dp[e][f];
} 

int egg_drop(int e, int f) {
    if(f == 0 || f == 1)  {
        return f;
    }
    if(e == 1) {
        return f;
    }
    int ans = INT_MAX;
    for(int k=1;k<=f;k++) {
        int breaks_min_attempt = egg_drop(e-1, k-1);
        int not_breaks_min_attempt = egg_drop(e, f-k);
        int temp = max(breaks_min_attempt, not_breaks_min_attempt) + 1;
        ans = min(temp, ans);
    }    
    return ans;
}
int main() {

    return 0;
} 