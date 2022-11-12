#include<bits/stdc++.h>
using namespace std;
string shortest_common_subsequence(string a, string b) {
    int n = a.size();
    int m = b.size();
    int dp[1+n][1+m];
    for(int i=0;i<=n;i++) {
        dp[i][0] = 0; 
    }
    for(int j=0;j<=m;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    string s;
    int i=n;
    int j=m;
    while(i>0 && j>0) {
        if(a[i-1] == b[j-1]) {
            s.push_back(a[i-1]);
            i--;
            j--;
        }
        else {
            if(dp[i][j-1]>dp[i-1][j]) {
                s.push_back(b[j-1]);
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1]) {
                s.push_back(a[i-1]);
                i--;
            }
        }
    }
    while(i>0) {
        s.push_back(a[i-1]);
        i--;
    }
    while(j>0) {
        s.push_back(b[j-1]);
        j--;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    
    return 0;
}