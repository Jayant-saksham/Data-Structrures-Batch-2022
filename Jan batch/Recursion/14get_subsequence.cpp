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
    for(string str : smallAns) {
        ans.push_back(ch + str);
        ans.push_back("" + str);
    }
    return ans;
} 
int main() {
    string s;
    cin>>s;
    vector<string> v = get_subsequence(s);
    for(string str : v) {
        cout<<str<<endl;
    }
    return 0;
}

// Number of subsequence = 2^n
// n = lenght of string 
