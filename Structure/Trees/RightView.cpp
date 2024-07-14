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

void dfs(Node* root, int level, vector<int> &res){
    if(!root) return;
    if(res.size()==level) res.push_back(root->val);
    dfs(root->right, level+1, res);
    dfs(root->left, level+1, res);
}

vector<int> rightView(Node* root){
    vector<int> res;
    dfs(root,0,res);
    return res;
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

    vector<int> sol = rightView(a);
    for(auto e:sol){  
        cout<<e<<" ";
    } 

    return 0;
}