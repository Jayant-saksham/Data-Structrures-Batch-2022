#include<bits/stdc++.h>
using namespace std;
int power(int a, int b) {
    if(b == 0) {
        return 1;
    }
    return a * power(a, b-1);
}
int power2(int a, int b) {
    if(b==0) {
        return 1;
    }
    int ans = power2(a, b/2);
    ans = ans * ans;
    if(b%2!=0) {
        ans *= a;
    }
    return ans;
}
int main() {
    cout<<power2(2,3)<<endl;
    return 0;
}