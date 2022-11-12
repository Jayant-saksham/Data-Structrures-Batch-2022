#include<bits/stdc++.h>
using namespace std;
vector<int> pie_table(string s) {
    int i=0;
    int j=1;
    int n=s.size();
    vector<int> PIE(n);
    while(j<n) {
        if(s[i] == s[j]) {
            PIE[j] = i+1;
            i++;
            j++;
        }
        else {
            if(i == 0) {
                PIE[j] = 0;
                j++;
            }
            else {
                i = PIE[i-1];
            }
        }
    }
    return PIE;
}
int main() {
    string s = "ababaca";
    vector<int> PIE = pie_table(s);
    for(int i=0;i<PIE.size();i++) {
        cout<<PIE[i]<<" ";
    }
    return 0;
}