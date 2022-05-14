class Solution {
    
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>> maxh;
        for(int i=0;i<arr.size();i++) {
            maxh.push(make_pair(abs(arr[i] - x), arr[i]));
            if(maxh.size() > k) {
                maxh.pop();
            }
        }
        vector<int> v;
        while(!maxh.empty()) {
            pair<int, int> top = maxh.top();
            v.push_back(top.second);
            maxh.pop();
        }
        sort(v.begin(), v.end());
        return v;
        
    }
};