// Fibonacci series 
// 0 1 1 2 3 5 8 13 
#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);    
}
int main() {
    cout<<fib(6)<<endl;
    return 0;
}