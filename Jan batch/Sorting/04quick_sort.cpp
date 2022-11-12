#include<bits/stdc++.h>
using namespace std;
int partition(int *A, int n, int start, int end) {
    int pivot = A[end];
    int ans = start;
    for(int i=start;i<end;i++) {
        if(A[i]<pivot) {
            ans++;
            swap(A[ans], A[i]);
        }
    }
    swap(A[ans], A[end]);
    return ans;
}

void quickSort(int *A, int n, int start, int end) {
    if(end>start) {
        int pIndex = partition(A, n, start, end);
        quickSort(A, n, start, pIndex-1);
        quickSort(A, n, pIndex+1, end);
    }
}
int main(){
    
    return 0;
}