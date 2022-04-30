#include<bits/stdc++.h>
using namespace std;
int main() {
    int V;
    cin>>V;
    int e;
    cin>>e;
    int adj[1+V][1+V];
    memset(adj, 0, sizeof(adj));
    for(int i=0;i<e;i++) {
        int x;
        cin>>x;
        int y;
        cin>>y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }


    return 0;
}