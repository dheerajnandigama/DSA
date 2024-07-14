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

bool isSameTree(Node* node1, Node* node2){
    if(node1 == NULL || node2==NULL) return node1==node2;
    return (node1->val == node2->val) && isSameTree(node1->left,node2->left) && isSameTree(node1->right,node2->right);
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

    Node* a1 = new Node(1);
    Node* b1 = new Node(2);
    Node* c1 = new Node(3);
    Node* d1 = new Node(4);
    Node* e1 = new Node(5);
    Node* f1 = new Node(6);
    Node* g1 = new Node(7);
    Node* h1 = new Node(8);
    Node* i1 = new Node(9);
    Node* j1 = new Node(10);

    a1->left=b1;
    a1->right=c1;
    b1->left=d1;
    b1->right=e1;
    e1->left=f1;
    c1->left=g1;
    c1->right=h1;
    h1->left=i1;
    h1->right=j1;

    cout<<isSameTree(a,a1);

    return 0;
}