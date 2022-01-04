#include<bits/stdc++.h>
using namespace std;
void print_array_rev(int A[], int n) {
    if(n==1) {
        cout<<A[0]<<endl;
        return;
    }
    cout<<A[n-1]<<endl;
    print_array_rev(A, n-1);
}
int main() {
    int A[] = {1,4,7,8,25,2,63,6,89,84};
    int n = sizeof(A)/sizeof(A[0]);
    print_array_rev(A, n);
    return 0;
}