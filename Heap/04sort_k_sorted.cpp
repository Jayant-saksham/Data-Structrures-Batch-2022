#include<bits/stdc++.h>
using namespace std;
vector<int> sort_k_sorted(int A[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> minh;
    vector<int> v;
    for(int i=0;i<n;i++) {
        minh.push(A[i]);
        if(minh.size() > k) {
            int top = minh.top();
            minh.pop();
            v.push_back(top);
        }
    }
    while(!minh.empty()) {
        int top = minh.top();
        minh.pop();
        v.push_back(top);
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int k;
    cin>>k;

    
    return 0;
}