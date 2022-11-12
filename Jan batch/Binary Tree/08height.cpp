#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};

int height(struct node *root) {
    if(root == NULL) {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return 1 + max(lh, rh);
}
int main(){
    
    return 0;
}