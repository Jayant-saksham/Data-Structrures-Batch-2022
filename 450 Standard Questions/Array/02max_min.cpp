#include<bits/stdc++.h>
using namespace std;
void solve(int *A, int n) {
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++) {
        if(A[i]>max) {
            max = A[i];
        }
        if(A[i]<min) {
            min = A[i];
        }
    }
    cout<<"MAX "<<max<<endl;
    cout<<"MIN "<<min<<endl;
}

void solve2(int *A, int n) {
    int max, min;
    if(n == 1) {
        max = A[0];
        min = A[0];
    }
    else {
        if(A[0]>A[1]) {
            max = A[0];
            min = A[1];
        }
        else {
            max = A[1];
            min = A[0];
        }
        for(int i=2;i<n;i++) {
            if(A[i]>max) {
                max = A[i];
            }
            if(A[i]<min) {
                min = A[i];
            }
        }
    }
    cout<<"MAX "<<max<<endl;
    cout<<"MIN "<<min<<endl;
}

void solve3(int *A, int n) {
    int max, min;
    int i;
    if(n%2==0) {
        if(A[0] > A[1]) {
            max = A[0];
            min = A[1];
        }
        else {
            max = A[1];
            min = A[0];
        }
        i = 2;
    }
    else {
        max = A[0];
        min = A[0];
        i = 1;
    }
    while(i<(n-1)) {
        if(A[i]>A[i+1]) {
            if(A[i]>max) {
                max = A[i];
            }
            if(A[i+1]<min) {
                min = A[i+1];
            }
        }
        else {
            if(A[i+1]>max) {
                max = A[i+1];
            }
            if(A[i]<min) {
                min = A[i];
            }
        }
        i += 2;
    }
    cout<<"MAX "<<max<<endl;
    cout<<"MIN "<<min<<endl;

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