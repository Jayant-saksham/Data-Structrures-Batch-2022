#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(20);
    v.push_back(2000);
    v.push_back(2);
    v.push_back(62);
    // for(int i=0;i<v.size();i++) {
    //     cout<<v[i]<<endl;
    // }

    for(int i : v) {
        cout<<i<<endl;
    }
}