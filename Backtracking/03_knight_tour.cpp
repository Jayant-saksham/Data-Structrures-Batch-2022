#include<bits/stdc++.h>
using namespace std;
void display(vector<vector<int>> v, int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void print_knight_tour(vector<vector<int>> v, int n, int r, int c, int move) {
    if(r < 0 || c<0 || r>=n || c>=n || v[r][c] > 0) {
        return;
    }
    if(move == n*n) {
        v[r][c] = move;
        display(v, n);
        v[r][c] = 0;
        return;
    }
    v[r][c] = move;
    print_knight_tour(v, n, r-2, c+1, move+1);
    print_knight_tour(v, n, r-1, c+2, move+1);
    print_knight_tour(v, n, r+1, c+2, move+1);
    print_knight_tour(v, n, r+2, c+1, move+1);
    print_knight_tour(v, n, r+2, c-1, move+1);
    print_knight_tour(v, n, r+1, c-2, move+1);
    print_knight_tour(v, n, r-1, c-2, move+1);
    print_knight_tour(v, n, r-2, c-1, move+1);
    v[r][c] = 0;
}
int main() {
    int n;
    cin>>n;
    int r;
    cin>>r;
    int c;
    cin>>c;
    int move = 1;
    vector<vector<int>> v(n, vector<int> (n));
    print_knight_tour(v, n, r, c, move);
    return 0;
}
