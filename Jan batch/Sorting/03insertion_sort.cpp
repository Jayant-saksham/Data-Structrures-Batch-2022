#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int *A, int n) {
    for(int i=1;i<n;i++) {
        int j = i-1;
        int key = A[j+1];
        while(j>=0 && key<A[j]) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
int main(){
    
    return 0;
}