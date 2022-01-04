#include<bits/stdc++.h>
using namespace std;
void printDI(int n) {
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printDI(n-1);
    cout<<n<<endl;
}
int main() {
    int n;
    cin>>n;
    printDI(n);
    return 0;
}


// 5
// 5 4 3 2 1 2 3 4 5

// 8
// 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 