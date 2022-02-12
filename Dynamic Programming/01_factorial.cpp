#include<bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    int fact1 = factorial(n-1);
    return n * fact1;
}
int factorial_tabular(int n) {
    vector<int> dp(n+1, -1);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++) {
        dp[i] = dp[i-1] * i;
    }
    return dp[n];
}
int main() {
    int n;
    cin>>n;
    cout<<factorial_tabular(n)<<endl;
    return 0;
}