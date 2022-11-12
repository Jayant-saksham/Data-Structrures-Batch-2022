#include<bits/stdc++.h>
using namespace std;
void _DFS(vector<int> adj[], vector<bool> &vis, int src) {
    vis[src] = true;
    cout<<src<<" ";
    for(auto f : adj[src]) {
        if(!vis[f]) {
            _DFS(adj, vis, f);
        }
    }
}
void DFS(vector<int> adj[], int V) {
    vector<bool> vis(1+V, false);
    for(int i=0;i<=V;i++) {
        if(!vis[i]) {
            _DFS(adj, vis, i);
        }
    }
}

void DFS_IT(vector<int> adj[], int V, int src) {
    vector<bool> vis(1+V, false);
    stack<int> s;
    vis[src] = true;
    s.push(src);
    while(!s.empty()) {
        int top = s.top();
        s.pop();
        cout<<top<<" ";
        for(auto f : adj[top]) {
            if(!vis[f]) {
                vis[f] = true;
                s.push(f);
            }
        }
    }
}

int main() {
    
    return 0;
}