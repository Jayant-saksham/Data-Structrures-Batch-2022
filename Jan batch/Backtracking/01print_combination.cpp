#include<bits/stdc++.h>
using namespace std;
void print_matrix_combination(vector<vector<int>> v, int n, string ans, int row) {
    if(row == n) {
        cout<<ans<<endl;
        return;
    }
    for(int col=0;col<n;col++) {
        v[row][col] = 1;
        print_matrix_combination(v, n, ans + to_string(row) + "-" + to_string(col) + ",", row+1);
        v[row][col] = 0;
    }    
}
int main() {
    int n;
    cin>>n;
    int A[n][n];
    vector<vector<int>> v(n, vector<int> (n));
    print_matrix_combination(v, n, "", 0);
    return 0;
}