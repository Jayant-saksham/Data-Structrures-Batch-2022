#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
void inOrder(struct node *root) {
    if(root == NULL) {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<endl;
    inOrder(root->right);
}

vector<int> inOrder_iteration(struct node *root) {
    vector<int> in;
    if(root == NULL) {
        return in;
    }
    stack<struct node *> s;
    struct node *temp = root;
    while(true) {
        if(temp!=NULL) {
            s.push(temp);
            temp = temp->left;
        }
        else {
            if(s.empty()) {
                break;
            }
            temp = s.top();
            s.pop();
            in.push_back(temp->data);
            temp = temp->right;
        }
    }
    return in;
}
int main(){
    
    return 0;
}