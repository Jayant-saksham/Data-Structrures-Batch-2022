#include<bits/stdc++.h>
using namespace std;
void print_increasing(int n) {
    for(int i=1;i<=n;i++) {
        cout<<i<<endl;
    }
}
void print_increasing_rec(int n) {
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    print_increasing_rec(n-1);
    cout<<n<<endl;    
}
int main() {
    int n;
    cin>>n;
    print_increasing_rec(n);
    return 0;
}