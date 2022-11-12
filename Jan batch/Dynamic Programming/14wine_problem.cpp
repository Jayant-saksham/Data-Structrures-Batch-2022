#include<bits/stdc++.h>
using namespace std;
int profit(int wines[], int i, int j, int y, int dp[][100]) {
    if(i>j) {
        return 0;
    }
    if(dp[i][j]!=0) {
        return dp[i][j];
    }
    int op1 = wines[i]*y + profit(wines, i+1, j, y+1, dp);
    int op2 = wines[j]*y + profit(wines, i, j-1, y+1, dp);
    dp[i][j] = max(op1, op2);
    return max(op1, op2);
}

int main() {
    int A[] = {2,4,6,2,5};
    int n = sizeof(A)/sizeof(A[0]);
    int dp[100][100] = {0};
    cout<<profit(A, 0, 4, 1, dp);
    return 0;
}