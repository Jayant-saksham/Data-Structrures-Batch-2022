#include<bits/stdc++.h>
using namespace std;
vector<string> get_subsequence(string s) {
    if(s.size() == 0) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch = s[0];
    string rem = s.substr(1);
    vector<string> smallAns = get_subsequence(rem);
    vector<string> ans;
    for(int i=0;i<smallAns.size();i++) {
        string add = ch + smallAns[i];
        ans.push_back(add);
        ans.push_back(smallAns[i]);
    }
    return ans;
} 
int main() {
    string s;
    cin>>s;
    vector<string> v = get_subsequence(s);
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<endl;
    }
    return 0;
}

// Number of subsequence = 2^n
// n = lenght of string 
