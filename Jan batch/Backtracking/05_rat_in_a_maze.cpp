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
void print_path(vector<vector<int>> v, int i, int j, int n,  vector<vector<int>> solution) {
    if(i<0 || j<0 || i>=n || j>=n || v[i][j] == 0 || solution[i][j] == 1) {
        return;
    }
    if(i == n-1 && j==n-1) {
        solution[i][j] = 1;
        display(solution, n);
        solution[i][j] = 0;
        return;
    }
    solution[i][j] = 1;
    print_path(v, i+1, j, n, solution);
    print_path(v, i, j+1, n, solution);
    print_path(v, i-1, j, n, solution);
    print_path(v, i, j-1, n, solution);
    solution[i][j] = 0;
}
int main() {
    vector<vector<int>> v = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1},
    };
    int n=4;
    vector<vector<int>> solution(n, vector<int> (n));
    print_path(v, 0, 0, n, solution);
    return 0;
}

// Path finding algorithm 