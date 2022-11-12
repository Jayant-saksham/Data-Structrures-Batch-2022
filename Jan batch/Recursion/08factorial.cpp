#include<bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    int smallAns = factorial(n-1);
    return n * smallAns;
}
int main() {
    cout<<factorial(6)<<endl;
    return 0;
}


// 5! = 5 x 4 x 3 x 2 x 1 = 5 x 4!
// 1 
// 2
// 3
// 4
// 5
