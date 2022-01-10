#include<bits/stdc++.h>
using namespace std;
void print_stair_path(int n, string ans) {
    if(n==0) {
        cout<<ans<<endl;
        return;
    }
    if(n<0) {
        return;
    }
    print_stair_path(n-1, ans + "1");
    print_stair_path(n-2, ans+"2");
    print_stair_path(n-3, ans+"3");
}
int main() {
    int n;
    cin>>n;
    print_stair_path(n, "");
    return 0;
}
// 3
// 111 
// 12
// 21
// 3
