#include<bits/stdc++.h>
using namespace std;
void target_sum_subset(int A[], int n, int idx, int target, int sum,  string set) {
    if(idx == n) {
        if(sum == target) {
            cout<<set<<endl;
        }
        return;
    }
    
    target_sum_subset(A, n, idx+1, target, sum + A[idx], set + to_string(A[idx]) + " ");
    target_sum_subset(A, n, idx+1, target, sum, set);
}
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int target;
    cin>>target;
    target_sum_subset(A, n, 0, target, 0, "");
    return 0;
}
