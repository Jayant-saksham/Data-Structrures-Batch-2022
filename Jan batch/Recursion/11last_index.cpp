#include<bits/stdc++.h>
using namespace std;
int last_index(int A[], int n, int key, int idx) {
    if(idx<0) {
        return -1;
    }
    if(A[idx] == key) {
        return idx;
    }
    return last_index(A, n, key, idx-1);
}
int main() {
    int A[] = {2,3,4,1,2,1,1,1,9,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    int key = 1;
    cout<<last_index(A, n, key, n-1)<<endl;
    return 0;
}