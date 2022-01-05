#include<bits/stdc++.h>
using namespace std;
vector<int> allIndex(int A[], int n, int key, int idx, int count) {
    if(idx == n) {
        vector<int> base(count);
        return base;
    }
    vector<int> ans;
    if(A[idx] == key) {
        ans = allIndex(A, n, key, idx+1, count+1);
        ans[count] = idx;
    }
    else {
        ans = allIndex(A, n, key, idx+1, count);
    }
    return ans;
}
int main() {
    int A[] = {2,3,4,1,2,1,1,1,9,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    int key = 1;
    vector<int> v = allIndex(A, n ,key, 0, 0);
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
