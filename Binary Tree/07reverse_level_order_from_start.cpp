#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node *left;
  struct node *right;
};

vector<int> reverse_level_order(struct node *root) {
    vector<int> level;
    if(root = NULL) {
        return level;
    }
    queue<struct node *> q;
    q.push(root);
    while(!q.empty()) {
        struct node *front = q.front();
        q.pop();
        level.push_back(front->data);
        if(front->right!=NULL) {
            q.push(front->right);
        }
        if(front->left!=NULL) {
            q.push(front->left);
        }
    }
    return level;
}
int main(){
    
    return 0;
}