#include<bits/stdc++.h>
using namespace std;
void DFSRec(vector<int> adj[], int S, vector<bool> &vis) {
    vis[S] = true;
    cout<<S<<" ";
    for(auto i : adj[S]) {
        if(!vis[i]) {
            DFSRec(adj, i, vis);
        }
    }
}
void DFS(vector<int> adj[], int V) {
    vector<bool> vis(V+1, false);
    for(int i=0;i<V;i++) {
        if(!vis[i]) {
            DFSRec(adj, i, vis);
        }
    }
}
int main() {
    
    return 0;
}