#include<bits/stdc++.h>
using namespace std;
int rod_cutting(int V[], int L[], int n, int length) {
    int dp[1+n][1+length];
    for(int i=0;i<=n;i++) {
        dp[i][0] = 0;
    }
    for(int j=0;j<=length;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=length;j++) {
            if(j>=L[i-1]) {
                dp[i][j] = max(dp[i-1][j], V[i-1] + dp[i][j-L[i-1]]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][length];
}
int main() {
    int l[] = {1 ,  2,   3 ,  4 ,  5 ,  6,   7 ,  8};
    int price[] = {1 ,  5 ,  8,   9,  10,  17,  17,  20};
    int n = 8;
    int len = 8;
    cout<<rod_cutting(price, l, n, len)<<endl;
    return 0;
}