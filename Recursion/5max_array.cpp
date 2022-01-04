#include<bits/stdc++.h>
using namespace std;
int max_array_rec(int A[], int n) {
    if(n==1) {
        return A[0];
    }
    int ans1 = max_array_rec(A, n-1);
    int ans2 = A[n-1];
    return max(ans1, ans2);    
}
int main() {
    int A[] = {1,4,7,8,25,2,63,6,89,84};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<max_array_rec(A, n)<<endl;
    return 0;
}