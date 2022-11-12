#include<bits/stdc++.h>
using namespace std;
void print_dec_rec(int n) {
    if(n == 1) {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    print_dec_rec(n-1);
}
int main() {
    int n;
    cin>>n;
    print_dec_rec(n);
    return 0;
}