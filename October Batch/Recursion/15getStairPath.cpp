#include<bits/stdc++.h>
using namespace std;
vector<string> get_stair_path(int n) {
    if(n == 0) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    else if(n < 0) {
        vector<string> base;
        return base;
    }
    vector<string> path1 = get_stair_path(n-1);
    vector<string> path2 = get_stair_path(n-2);
    vector<string> path3 = get_stair_path(n-3);
    vector<string> ans;
    for(string path : path1) {
        ans.push_back("1"+path);
    }
    for(string path : path2) {
        ans.push_back("2" + path);
    }
    for(string path : path3) {
        ans.push_back("3" + path);
    }
    return ans;

}

int main() {
    int n;
    cin>>n;
    vector<string> v = get_stair_path(n);
    for(string i : v) {
        cout<<i<<endl;
    }
    return 0;
}