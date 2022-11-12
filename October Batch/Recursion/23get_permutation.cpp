#include<bits/stdc++.h>
using namespace std;
vector<string> get_permutation(string s) {
    if(s.size() == 0) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    vector<string> ans;
    for(int i=0;i<s.size();i++) {
        char ch = s[i];
        string rem = s.substr(0, i) + s.substr(i+1);
        vector<string> smallAns = get_permutation(rem);
        for(string str : smallAns) {
            string add = ch + str; 
            ans.push_back(add);
        }    
    }
    return ans;
}

int main() {
    string s;
    cin>>s;
    vector<string> v = get_permutation(s);
    for(string str : v) {
        cout<<str<<endl;
    }
    return 0;
}