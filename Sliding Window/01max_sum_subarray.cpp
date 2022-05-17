#include<bits/stdc++.h>
using namespace std;
int max_sum_brute_force(int A[], int n, int k) {
    int m = INT_MIN;
    for(int i=0;i<n;i++) {
        int sum = 0;
        for(int j=i;j<(i+k);j++) {
            sum += A[j];
        }
        m = max(m, sum);
    }
    return m;
}

int max_sum_subarray(int A[], int n, int k) {
    int i=0;
    int j=0;
    int sum = 0, maxi = INT_MIN;
    while(j<n) {
        sum += A[j];
        if(j-i+1 == k) {
            maxi = max(maxi, sum);
            sum -= A[i];
            i++;   
        }
        j++;
    }
    return maxi;
}
int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    cout<<max_sum_subarray(arr, n, k)<<endl;
    return 0;
} 