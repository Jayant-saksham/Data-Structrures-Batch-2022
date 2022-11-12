#include<bits/stdc++.h>
using namespace std;
struct node{
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

struct node * level_wise_input() {
    int rootData;
    cout<<"Enter root data : ";
    cin>>rootData;
    if(rootData == -1) {
        return NULL;
    }
    queue<struct node *> q;
    struct node *root  = createNode(rootData);
    q.push(root);
    while(!q.empty()) {
        struct node *front = q.front();
        q.pop();
        cout<<"Enter the left child "<<front->data<<" : ";
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1) {
            struct node *child = createNode(leftChildData);
            front->left = child;
            q.push(child);
        }
        cout<<"Enter the right child "<<front->data<<" : ";
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1) {
            struct node * child = createNode(rightChildData);
            front->right = child;
            q.push(child);
        }
    }
    return root;
}

void level_wise_printing(struct node *root) {
    if(root == NULL) {
        return;
    }
    queue<struct node *> q;
    q.push(root);
    while(!q.empty()) {
        struct node *front = q.front();
        q.pop();
        cout<<front->data<<" ";
        if(front->left!=NULL) {
            q.push(front->left);
        }
        if(front->right!=NULL) {
            q.push(front->right);
        }
    }
}
int main() {
    struct node *root = level_wise_input();
    level_wise_printing(root);

    return 0;
}