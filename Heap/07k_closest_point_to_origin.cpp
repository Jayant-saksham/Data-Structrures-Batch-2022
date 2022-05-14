class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        
        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int, int>>> pq;
        
        for (int i = 0; i < n; i++) {
            int x = points[i][0];
            int y = points[i][1];
            int key = (x*x + y*y);
            pq.push({key, {x, y}});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        
        while(pq.size() > 0) {
            vector<int> v;
            auto c = pq.top().second;
            v.push_back(c.first);
            v.push_back(c.second);
            ans.push_back(v);
            pq.pop();
        }
        
        return ans;
    }
};