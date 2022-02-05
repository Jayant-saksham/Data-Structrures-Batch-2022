#include<bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if(n == 1 || n == 0) {
        return 1;
    }
    int fac1 = factorial(n-1);
    return n * fac1;
}
int main() {
    
    return 0;
}