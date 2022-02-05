#include<bits/stdc++.h>
using namespace std;
vector<string> getKeypad(string s, string codes[]) {
    if(s.size() == 0) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch = s[0];
    string rem = s.substr(1);
    vector<string> smallAns = getKeypad(rem , codes);
    vector<string> ans;
    string target = codes[ch - '0'];
    for(int i=0;i<target.size();i++) {
        char x = target[i];
        for(string str : smallAns) {
            ans.push_back(x + str);
        }
    }
    return ans;
}
int main() {
    string s;
    cin>>s;
    string codes[] = {
        ".;",
        "abc", 
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tu",
        "vwx",
        "yz"
    };
    return 0;
}
// 5678
// mp 
// mq 
// mr ms nq np nr ns op nq pr