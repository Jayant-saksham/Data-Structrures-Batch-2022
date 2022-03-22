#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int x) {
    struct node *root = new node;
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void preOrder(struct node *root) {
    if(root == NULL) {
        return;
    }
    cout<<root->data<<endl;
    preOrder(root->left);
    preOrder(root->right);
}
vector<int> preOrder_iteration(struct node *root) {
    vector<int> pre;
    if(root == NULL) {
        return pre;
    }
    stack<struct node *> s;
    s.push(root);
    while(!s.empty()) {
        struct node *top = s.top();
        s.pop();
        pre.push_back(top->data);
        if(top->right!=NULL) {
            s.push(top->right);
        }
        if(top->left!=NULL) {
            s.push(top->left);
        }
    }
    return pre;
}

int main() {
    
    return 0;
}