#include<bits/stdc++.h>
using namespace std;
void print_keypad_combination(string s,string ans, string codes[]) {
    if(s.size() == 0) {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string rem = s.substr(1);
    string code = codes[ch - '0']; 
    for(int i=0;i<code.size();i++) {
        print_keypad_combination(rem, ans + code[i], codes);
    }  
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
    print_keypad_combination(s, "", codes);
    return 0;
}