#include<bits/stdc++.h>
using namespace std;
void print_map(map<string, int> &m) {
    for(auto &i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
}

void frequency_count() {
    map<string, int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        m[s]++;
    }
    print_map(m);
}

int main() {
    map<int, string> m;
    m[2] = "Jayant";
    m[1] = "Urvashi";
    m[3] = "Nishtha";
    m[4] = "Fest";
    m[200]; // logn
    m.insert({10, "Bill Gates"});
    m.insert(make_pair(0, "Nehru"));

    // n*log(n)
    map<int, string> :: iterator it;
    for(it=m.begin();it!=m.end();it++) {
        cout<<(*it).first<<endl;
        cout<<(*it).second<<endl;
    }
    // n*log(n)
    for(auto &i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto ans = m.find(3);
    if(ans == m.end()) {
        cout<<"No value is found";
    }
    else {
        cout<<(*ans).first<<" "<<(*ans).second<<endl;
    }
    return 0;
}


// Ordering is done on keys (Keys will be in ascendding order)
// Maps - Red black treees (logn)
// Unordered_map = hashmaps (1)

