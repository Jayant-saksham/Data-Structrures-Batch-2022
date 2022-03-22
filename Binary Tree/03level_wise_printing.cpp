#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int x) {
    struct node *temp = new node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void print_level_wise(struct node *root) {
    queue<struct node *> q;
    q.push(root);
    while(q.size()!=0) {
        struct node *front = q.front();
        cout<<front->data<<" ";
        q.pop();
        if(front->left!=NULL) {
            q.push(front->left);
        }
        if(front->right!=NULL) {
            q.push(front->right);
        }

    }
}


struct node *takeInput() {
    int rootData;
    cin>>rootData;
    if(rootData==-1) {
        return NULL;
    }
    struct node *root = createNode(rootData);
    struct node *leftChild = takeInput();
    struct node *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

vector<int> levelOrderPrinting(struct node *root) {
    if(root == NULL) {
        vector<int> base;
        return base;
    }
    queue<struct node *> q;
    q.push(root);
    vector<int> ans;
    while(!q.empty()) {
        struct node *front = q.front();
        ans.push_back(front->data);
        q.pop();
        if(front->left!=NULL) {
            q.push(front->left);
        }
        if(front->right!=NULL) {
            q.push(front->right);
        }
    }
    return ans;
}

int main() {
    struct node *root = takeInput();
    print_level_wise(root);
    return 0;
}