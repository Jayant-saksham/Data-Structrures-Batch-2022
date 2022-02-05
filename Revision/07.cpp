#include<bits/stdc++.h>
using namespace std;
void print_reverse(int A[], int n) {
    if(n == 1) {
        cout<<A[0]<<endl;
        return;
    }
    cout<<A[n-1]<<endl;
    print_reverse(A, n-1);
}
int main() {
    
    return 0;
}