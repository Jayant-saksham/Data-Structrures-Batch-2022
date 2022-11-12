#include<bits/stdc++.h>
using namespace std;
vector<int> NSL(int A[], int n) {
    vector<int>v;
    stack<pair<int,int>> s;
    for(int i=0;i<n;i++) {
        if(s.empty()) {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top().first<A[i]) {
            v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first>A[i]) {
            while(!s.empty() && s.top().first>=A[i]) {
                s.pop();
            }
            if(s.empty()) {
                v.push_back(-1);
            }
            else {
                v.push_back(s.top().second);
            }
        }
        s.push({A[i], i});
    }
    return v;
}

vector<int> NSR(int A[], int n) {
    vector<int>v;
    stack<pair<int,int>> s;
    for(int i=(n-1);i>=0;i--) {
        if(s.empty()) {
            v.push_back(n);
        }
        else if(!s.empty() && s.top().first<A[i]) {
            v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first>A[i]) {
            while(!s.empty() && s.top().first>=A[i]) {
                s.pop();
            }
            if(s.empty()) {
                v.push_back(n);
            }
            else {
                v.push_back(s.top().second);
            }
        }
        s.push({A[i], i});
    }
    reverse(v.begin(), v.end());
    return v;
}

int max_area_histogram(int A[], int n) {
    vector<int> left =  NSL(A, n);
    vector<int> right = NSR(A, n);
    
    vector<int> width;
    for(int i=0;i<left.size();i++) {
        int w = right[i] - left[i] - 1;
        width.push_back(w);
    }
    int ans = INT_MIN;
    vector<int> areas;
    for(int i=0;i<width.size();i++) {
        int area = width[i] * A[i];
        areas.push_back(area);
    }
    for(int area : areas) {
        ans = max(ans, area);
    }
    return ans;
}

int main() {
    int A[] = {2, 1, 5, 6, 2, 3};
    int n = 6;
    cout<<max_area_histogram(A, n)<<endl;
    return 0;
}