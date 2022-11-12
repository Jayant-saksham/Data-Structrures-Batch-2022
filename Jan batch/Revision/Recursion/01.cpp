#include<bits/stdc++.h>
using namespace std;
void print_array(int A[], int n) {
    for(int i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void print_array_R(int A[], int n) {
    if(n == 1) {
        cout<<A[0]<<" ";
        return;
    }
    if(n<=0) {
        return;
    }
    print_array_R(A, n-1);
    cout<<A[n-1]<<" ";
}
int main() {
    int A[] = {1,2,34,5,6,5};
    int n=sizeof(A)/sizeof(A[0]);
    print_array_R(A, n);
    return 0;
}