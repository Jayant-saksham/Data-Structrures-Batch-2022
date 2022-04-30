#include<bits/stdc++.h>
using namespace std;
int main() {
    int v, e;
    cin>>v>>e;
    vector<int> adj[1+v];
    for(int i=0;i<e;i++) {
        int x;
        cin>>x;
        int y;
        cin>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    return 0;
}