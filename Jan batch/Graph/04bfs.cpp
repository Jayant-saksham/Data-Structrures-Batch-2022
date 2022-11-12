#include<bits/stdc++.h>
using namespace std;
// Continuous graphs
vector<int> BFS(vector<int> adj[], int V, int S) {
    vector<bool> vis(V+1, false);
    vis[S] = true;
    queue<int> q;
    q.push(S);
    vector<int> bfs;
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        bfs.push_back(front);
        for(auto v : adj[front]) {
            if(!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    return bfs;
}

void _BFS(vector<int> adj[], int S, vector<bool> &vis) {
    queue<int> q;
    vis[S] = true;
    q.push(S);
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        cout<<front<<" ";
        for(auto v : adj[front]) {
            if(!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

// Discountinous graphs will also be printed 
void BFS_start_not_given(vector<int> adj[], int V) {
    vector<bool> vis(V+1, false);
    for(int i=0;i<V;i++) {
        if(!vis[i]) {
            _BFS(adj, i, vis);
        }
    }
}

int count_discountinous(vector<int> adj[], int V) {
    vector<bool> vis(V+1, false);
    int count = 0;
    for(int i=0;i<V;i++) {
        if(!vis[i]) {
            count++;
            _BFS(adj, i, vis);
        }
    }
    return count;
}

int main() {
    
    return 0;
}