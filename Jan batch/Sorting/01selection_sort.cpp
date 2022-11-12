#include<bits/stdc++.h>
using namespace std;
void selection_sort(int *A, int n) {
    for(int i=0;i<(n-1);i++) {
        int minIndex = i;
        for(int j=(i+1);j<n;j++) {
            if(A[minIndex]>A[j]) {
                minIndex = j;
            }
        }
        swap(A[i], A[minIndex]);
    }
}
int main(){
    int A[] = {5,2,1,4,7,8,96,3,0,2};
    int n = sizeof(A)/sizeof(A[0]);
    selection_sort(A,n);
    for(int i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }
    return 0;
}