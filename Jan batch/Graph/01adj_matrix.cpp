#include<bits/stdc++.h>
using namespace std;
int main() {
    int v;
    cin>>v;
    int adj[1+v][1+v];
    memset(adj, 0, sizeof(adj));
    int e;
    cin>>e;
    for(int i=0;i<e;i++) {
        int f, s;
        cin>>f>>s;
        adj[f][s] = 1;
        adj[s][f] = 1;
    }
    for(int i=0;i<=v;i++) {
        for(int j=0;j<=v;j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}