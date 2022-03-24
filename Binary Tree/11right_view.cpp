#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
vector<int> rightView(struct node *root, int level, vector<int> &res) {
    if(root == NULL) {
        return res;
    }    
    if(res.size() == level) {
        res.push_back(root->data);
    }
    rightView(root->right, level+1, res);
    rightView(root->left, level+1, res);
    return res;
}
int main(){
    
    return 0;
}