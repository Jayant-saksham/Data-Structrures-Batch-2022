#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
vector<vector<int>> zigZag(struct node *root) {
    vector<vector<int>> result;
    if(root == NULL) {
        return result;
    }
    queue<struct node *> q;
    q.push(root);
    bool leftToRight = true;
    while(!q.empty()) {
        int size = q.size();
        vector<int> row(size);
        for(int i=0;i<size;i++) {
            struct node *front = q.front();
            q.pop();
            int idx = (leftToRight) ? i : (size - 1 - i);
            row[idx] = front->data;
            if(front->left) {
                q.push(front->left);
            }
            if(front->right) {
                q.push(front->right);
            }
        }
        leftToRight = !leftToRight;
        result.push_back(row);
    }
    return result;
}
int main(){
    
    return 0;
}