#include<bits/stdc++.h>
using namespace std;
int target_sum_subset(int A[], int n, int idx, int target, int sum, int count) {
    if(idx == n) {
        if(sum == target) {
            count++;
        }
        return count;
    }
    count = target_sum_subset(A, n, idx+1, target, sum+A[idx], count);
    count = target_sum_subset(A, n, idx+1, target, sum, count);
    return count;
}
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    int target;
    cin>>target;
    cout<<target_sum_subset(A, n, 0, target, 0, 0)<<endl;
    return 0;
}