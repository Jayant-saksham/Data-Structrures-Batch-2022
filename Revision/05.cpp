#include<bits/stdc++.h>
using namespace std;
int max_array(int A[], int n) {
    if(n == 1) {
        return A[0];
    }
    int ans1 = max_array(A, n-1);
    int ans2 = A[n-1];
    return max(ans1, ans2);
}
int main() {
    
    return 0;
}