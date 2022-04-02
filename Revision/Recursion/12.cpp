#include<bits/stdc++.h>
using namespace std;
int power(int a, int b) {
    if(b == 0) {
        return 1;
    }
    if(a == 0) {
        return 0;
    }
    return a* power(a, b-1);
}
int power2(int a, int b) {
    if(b==0){
        return 1;
    }
    if(a == 0) {
        return 0;
    }
    int ans = power2(a, b/2);
    ans = ans * ans;
    if(b%2!=0) {
        ans *= a;
    }
    return ans;
}
int main(){
    
    return 0;
}