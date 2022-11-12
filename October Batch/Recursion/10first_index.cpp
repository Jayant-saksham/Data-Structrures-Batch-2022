#include<bits/stdc++.h>
using namespace std;
int first_index(int A[], int n, int key, int idx) {
    if(idx == n) {
        return -1;
    }
    if(A[idx] == key) {
        return idx;
    }
    return first_index(A, n, key, idx+1);
}
int main() {
    int A[] = {2,3,4,1,2,1,1,1,9,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    int key = 1;
    cout<<first_index(A, n, key, 0)<<endl;
    return 0;
}

