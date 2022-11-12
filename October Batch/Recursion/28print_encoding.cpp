#include<bits/stdc++.h>
using namespace std;
void print_encoding(string ques, string psf) {
    if(ques.size() == 0) {
        cout<<psf<<endl;
        return;
    }
    else if(ques.size() == 1) {
        char ch = ques[0];
        if(ch == '0') {
            return;
        }
        else {
            int chv = ch - '0';
            char code = (char)('a' + chv - 1);
            psf += code;
            cout<<psf<<endl;
        }
    }
    else {
        char ch = ques[0];
        string rem = ques.substr(1);
        if(ch == '0') {
            return;
        }
        else {
            int chv = ch - '0';
            char code = (char) ('a' + chv - 1);
            print_encoding(rem, psf + code);
        }
        string first2 = ques.substr(0,2);
        string rems = ques.substr(2);
        int ch12v = stoi(first2);
        if(ch12v <= 26) {
            char code = (char)('a' + ch12v - 1);
            print_encoding(rems, psf + code);
        }

    }
}
int main(){
    
    return 0;
}