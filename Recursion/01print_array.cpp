#include<bits/stdc++.h>
using namespace std;
void print(int A[], int n) {
    for(int i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }
}
void printRec(int A[], int n) {
    if(n == 1) {
        cout<<A[0]<<endl;
        return;
    }
    printRec(A, n-1);
    cout<<A[n-1]<<endl;
}
int main() {
    int A[] = {1,4,7,8,25,2,63,6,89,84};
    int n = sizeof(A)/sizeof(A[0]);
    printRec(A, n);
    return 0;
}