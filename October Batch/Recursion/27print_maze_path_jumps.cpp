#include<bits/stdc++.h>
using namespace std;
void mazePath(int i, int j, int n, int m, string psf) {
    if(i == n && j == m) {
        cout<<psf<<endl;
        return;
    }
    for(int x=1;x<=(m-j);x++) {
        mazePath(i, j+x, n, m, psf + "h"+ to_string(x));
    }
    for(int y=1;y<=(n-i);y++) {
        mazePath(i+y, j, n, m, psf + "v" + to_string(y));
    }
    for(int z=1;z<=(n-i) && z<=(m-j);z++) {
        mazePath(i+z, j+z, n, m, psf + "d" + to_string(z));
    }
}
int main() {
    mazePath(0,0,3,3,"");
    return 0;
}