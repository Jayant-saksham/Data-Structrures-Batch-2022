#include<bits/stdc++.h>
using namespace std;
vector<int> all_index(int A[], int n, int key, int idx, int count) {
    if(idx == n) {
        vector<int> base(count);
        return base;
    }
    vector<int> ans;
    if(A[idx] == key) {
        ans = all_index(A, n, key, idx+1, count+1);
        ans[count] = idx;
    }
    else {
        ans = all_index(A, n, key, idx+1, count);
    }
    return ans;
}
int main(){
    
    return 0;
}