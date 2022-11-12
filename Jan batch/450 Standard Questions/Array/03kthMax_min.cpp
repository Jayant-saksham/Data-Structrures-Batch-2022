#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    sort(A, A+n);
    int k;
    cin>>k;
    cout<<"Kth min "<<A[k-1]<<endl;
    cout<<"Kth max "<<A[n-k]<<endl;
    return 0;
}