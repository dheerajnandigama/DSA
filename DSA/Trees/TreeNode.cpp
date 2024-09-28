#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        } 
};

//printing a tree
void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

//sum of all nodes in a tree
int sum(Node* root){
    if(root==NULL) return 0;
    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    int ans = root->val + leftSum + rightSum;
    return ans;
}

//size of a tree
int size(Node* root){
    if(root==NULL) return 0;
    return size(root->left) + size(root->right) + 1;
}

//maximum node value in a tree
int maxInTree(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxInTree(root->left),maxInTree(root->right)));
}

//levels of a tree
int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
  
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    //displayTree(a);
    //cout<<sum(a)<<endl;
    //cout<<size(a)<<endl;
    //cout<<maxInTree(a)<<endl;
    cout<<levels(a)<<endl;
}