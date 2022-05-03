#include<bits/stdc++.h>
using namespace std;
// DAG 
vector<int> topological_sort(vector<int> adj[], int V) {
    vector<int> ans;
    queue<int> q;
    vector<int> inDegree(V, 0);
    for(int i=0;i<V;i++) {
        vector<int> data = adj[i];
        for(auto x : data) {
            inDegree[x]++;
        }
    }
    for(int i=0;i<V;i++) {
        if(inDegree[i] == 0) {
            q.push(i);
        }
    }
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        ans.push_back(u);
        for(auto j : adj[u]) {
            inDegree[j]--;
            if(inDegree[j] == 0) {
                q.push(j);
            }
        }
    }
    return ans;
}
int main() {
    
    return 0;
}