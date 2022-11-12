#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int *A, int n) {
    for(int i=0;i<n;i++) {
        bool flag = false;
        for(int j=0;j<(n-i-1);j++) {
            if(A[j]>A[j+1]) {
                swap(A[j], A[j+1]);
                flag = true;
            }
        }
        if(!flag) {
            return;
        }
    }
}
int main() {
    
    return 0;
}