#include<bits/stdc++.h>
using namespace std;
vector<int> NGER(int A[], int n) {
    stack<int> s;
    vector<int> v;
    for(int i=(n-1);i>=0;i--) {
        if(s.empty()) {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()>A[i]) {
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()<A[i]) {
            while(!s.empty() && s.top()<=A[i]) {
                s.pop();
            }
            if(!s.empty()) {
                v.push_back(s.top());
            }
            else {
                v.push_back(-1);
            }
        }
        s.push(A[i]);
    }
    reverse(v.begin(), v.end());
    return v;
}
int main() {
    int A[] = { 11, 13, 21, 3 };
    int n = 4;
    vector<int> v = NGER(A, n);
    for(int i : v) {
        cout<<i<<" ";
    }
    return 0;
}