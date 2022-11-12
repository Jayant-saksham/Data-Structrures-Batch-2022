#include<bits/stdc++.h>
using namespace std;
vector<int> NSER(int A[], int n) {
    stack<int> s;
    vector<int> v;
    for(int i=(n-1);i>=0;i--) {
        if(s.empty()) {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()<A[i]) {
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()>A[i]) {
            while(!s.empty() && s.top() >=A[i]) {
                s.pop();
            }
            if(s.empty()) {
                v.push_back(-1);
            }
            else {
                v.push_back(s.top());
            }
        }
        s.push(A[i]);
    }
    reverse(v.begin(), v.end());
    return v;
}
int main() {
    
    return 0;
}