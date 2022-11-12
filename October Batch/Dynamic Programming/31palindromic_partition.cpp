#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
bool isPalindrome(string s, int i, int j) {
    if(i==j) {
        return true;
    }
    if(i>j) {
        return true;
    }
    while(i<j) {
        if(s[i]!=s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int palindrome_partition(string s, int n, int i, int j) {
    if(i>=j) {
        return 0;
    }
    if(isPalindrome(s, i, j)) {
        return 0;
    }
    int ans = INT_MAX;
    for(int k=i;k<j;k++) {
        int p1 = palindrome_partition(s, n, i, k);
        int p2 = palindrome_partition(s, n, k+1, j);
        ans = min(ans, p1+p2+1);
    }
    return ans;
}
int palindrome_parition_DP(string s, int n, int i, int j) {
    if(i>=j) {
        return 0;
    }
    if(isPalindrome(s, i, j)) {
        return 0;
    }
    if(dp[i][j]!=-1) {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for(int k=i;k<j;k++) {
        int left;
        if(dp[i][k]!=-1) {
            left = dp[i][k];
        }
        else {
            left = palindrome_parition_DP(s, n, i, k);
            dp[i][k] = left;
        }
        int right;
        if(dp[k+1][j]!=-1) {
            right = dp[k+1][j];
        }
        else {
            right = palindrome_parition_DP(s, n, k+1, j);
            dp[k+1][j] = right;
        }
        dp[i][j] = min(dp[i][j], right + left + 1);
    }
    return dp[i][j];
}

int main() {
    
    return 0;
}