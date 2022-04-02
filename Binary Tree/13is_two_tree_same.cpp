#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node *left;
  struct node *right;
};
bool isSameTree(struct node *p, struct node *q) {
    if(p == NULL || q == NULL) {
        if(p == q) {
            return true;
        }
        return false;
    }
    bool leftAns = isSameTree(p->left, q->left);
    bool rightAns = isSameTree(p->right, q->right);
    bool isEqual = p->data == q->data;
    if(leftAns && rightAns && isEqual) {
        return true;
    }
    return false;

}
int main(){
    
    return 0;
}