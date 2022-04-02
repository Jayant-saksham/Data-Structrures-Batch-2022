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
    
    return 0;
}