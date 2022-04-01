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
    root->left =NULL;
    root->right = NULL;
}
struct node *constructTreeHelper(int *pre, int *in, int inS, int inE, int preS, int preE) {
    if(inS > inE) {
        return NULL;
    }
    int rootData = pre[preS];
    int rootIndx;
    for(int i=inS;i<=inE;i++) {
        if(in[i] == rootData) {
            rootIndx = i;
            break;
        }
    }
    int lInS = inS;
    int lInE = rootIndx - 1;
    int lPreS = preS + 1;
    int lPreE = lInE - lInS + lPreS;
    int rInS = rootIndx + 1;
    int rInE = inE;
    int rPreS = lPreE + 1;
    int rPreE = preE;
    struct node * root = createNode(rootData);
    root->left = constructTreeHelper(pre, in, lInS, lInE, lPreS, lPreE);
    root->right = constructTreeHelper(pre, in, rInS, rInE, rPreS, rPreE);
    return root;
}
struct node *constructTree(int *pre, int *in, int n) {
    return constructTreeHelper(pre, in, 0, n-1, 0, n-1);
}
int main(){
    
    return 0;
}