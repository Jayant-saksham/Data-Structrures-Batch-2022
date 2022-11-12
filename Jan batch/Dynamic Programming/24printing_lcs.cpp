#include<bits/stdc++.h>
using namespace std;
string lcs(string a, string b) {
    int n = a.size();
    int m = b.size();
    int dp[1+n][1+m];
    for(int i=0;i<=n;i++ ) {
        dp[i][0] = 0;
    }
    for(int j=0;j<=m;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }
    int i=n;
    int j=m;
    string s;
    while(i>0 && j>0) {
        if(a[i-1] == b[j-1]) {
            s.push_back(a[i-1]);
            i--;
            j--;
        }
        else {
            if(dp[i][j-1]>dp[i-1][j]) {
                j--;
            }
            else {
                i--;
            }
        }
    }
    reverse(s.begin(), s.end());
    return s;
}
int main() {
    string a = "abcdef";
    string b = "a0c$f";
    cout<<lcs(a, b)<<endl;

    return 0;
}