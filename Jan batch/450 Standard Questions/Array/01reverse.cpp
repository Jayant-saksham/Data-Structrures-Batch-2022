#include<bits/stdc++.h>
using namespace std;
void solve(int *A, int n) {
    int start = 0;
    int end = n-1;
    while(end>start) {
        swap(A[start], A[end]);
        start++;
        end--;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        int A[n];
        for(int i=0;i<n;i++) {
            cin>>A[i];
        }
        reverse(A, A+n);
    }
    return 0;
}