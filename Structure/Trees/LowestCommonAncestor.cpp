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

Node* lowestCommonAncestor(Node* root,Node* p, Node* q){
    if(root == NULL || root == p || root == q){
        return root;
    }
    Node* left = lowestCommonAncestor(root->left,p,q);
    Node* right = lowestCommonAncestor(root->right,p,q);

    if(left == NULL) return right;
    if(right == NULL) return left;
    else{ // both left and right are not null then we found the result
            return root;
    }
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    Node* i = new Node(9);
    Node* j = new Node(10);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    e->left = f;
    c->left=g;
    c->right=h;
    h->left=i;
    h->right=j;

   Node* res = lowestCommonAncestor(a,g,j);
   cout<<res->val<<" ";

    return 0;
}