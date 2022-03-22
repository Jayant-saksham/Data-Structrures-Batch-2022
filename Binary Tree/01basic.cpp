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
    temp->left=NULL;
    temp->right = NULL;
    return temp;
}
void print_tree(struct node *root) {
    while(root!=NULL) {
        cout<<root->data<<endl;
        root = root->left;
    }
}
void print_tree_right(struct node *root) {
    while(root!=NULL) {
        cout<<root->data<<endl;
        root = root->right;
    }
}
int main() {
    struct node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->right = createNode(40);
    print_tree(root);
    return 0;
}

