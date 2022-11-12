#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    int fib1 = fib(n-1);
    int fib2 = fib(n-2);
    int ans = fib1 + fib2;
    return ans;
}

// Memorization Technique
int fib_memorize(int n, vector<int> &memory) {
    if(n == 0 || n == 1) {
        return n;
    }
    if(memory[n]!=-1) {
        return memory[n];
    }
    int fib1 = fib_memorize(n-1, memory);
    int fib2 = fib_memorize(n-2, memory);
    int ans = fib1 + fib2;
    memory[n] = ans;
    return ans;
}

// Tabular Method
// Storage and meaning 
// Direction identify 
// Travel and solve
int fib_tabular(int n) {
    vector<int> memory(n+1, -1);
    memory[0] = 0;
    memory[1] = 1;
    for(int i=2;i<=n;i++) {
        memory[i] = memory[i-1] + memory[i-2];
    }
    return memory[n];
}
int main() {
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    vector<int> memory(n+1, -1);
    memory[0] = 0;
    memory[1] = 1;
    cout<<fib_tabular(n)<<endl;
    return 0;
}