#include<bits/stdc++.h>
using namespace std;
vector<string> get_stair_path(int n) {
    if(n==0) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    else if(n<0) {
        vector<string> base;
        return base;
    }
    cout<<n<<endl;
    vector<string> path1 = get_stair_path(n-1);
    vector<string> path2 = get_stair_path(n-2);    
    vector<string> path3 = get_stair_path(n-3); 
    vector<string> paths;
    for(string path : path1) {
        paths.push_back("1" + path);
    }
    for(string path : path2) {
        paths.push_back("2" + path);
    }
    for(string path : path3) {
        paths.push_back("3" + path);
    }
    return paths;
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