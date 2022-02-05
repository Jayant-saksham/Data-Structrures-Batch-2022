#include<bits/stdc++.h>
using namespace std;
int last_index(int A[], int key, int n, int idx) {
    if(idx < 0) {
        return -1;
    }
    if(A[idx] == key) {
        return idx;
    }
    return last_index(A, key, n, idx-1);
}
int main() {
    
    return 0;
}