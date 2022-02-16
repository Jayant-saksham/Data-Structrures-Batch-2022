#include<bits/stdc++.h>
using namespace std;
int climb_stairs_var_jump(int A[], int n) {
    vector<int> dp(n+1, 0);
    dp[n] = 1;
    for(int i=(n-1);i>=0;i--) {
        for(int j=1;j<=A[i] && i+j<=n;j++) {
            dp[i] = dp[i] + dp[i+j];
        }
    }
    return dp[0];
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<climb_stairs_var_jump(A, n)<<endl;    
    return 0;
}