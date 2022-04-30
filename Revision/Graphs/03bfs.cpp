#include<bits/stdc++.h>
using namespace std;
vector<int> BFS(vector<int> adj[], int V, int src) {
    vector<bool> vis(1+V, false);
    vis[src] = true;
    queue<int> q;
    q.push(src);
    vector<int> bfs;
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        bfs.push_back(front);
        for(auto f : adj[front]) {
            if(!vis[f]) {
                vis[f] = true;
                q.push(f);
            }
        }
    }
    return bfs;
}

void _BFS(vector<int> adj[], int src, vector<bool> &vis) {
    vis[src] = true;
    queue<int> q;
    q.push(src);
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        cout<<front<<" ";
        for(auto f : adj[front]) {
            if(!vis[f]) {
                vis[f] = true;
                q.push(f);
            }
        }
    }
}

void BFS_disconnected(vector<int> adj[], int V) {
    vector<bool> vis(1+V, false);
    for(int i=0;i<=V;i++) {
        if(!vis[i]) {
            _BFS(adj, i, vis);
        }
    }
}

int main() {
    
    return 0;
}