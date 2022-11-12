#include<bits/stdc++.h>
using namespace std;
// Left
void solve(int *A, int n) {
    int j = -1;
    for(int i=0;i<n;i++) {
        if(A[i]<0) {
            j++;
            swap(A[i], A[j]);
        }
    }
}
// Right
void solve2(int *A, int n) {
    int j = n;
    for(int i=0;i<n;i++) {
        if(A[i]<0) {
            j--;
            swap(A[i], A[j]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    return 0;
}