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

vector<int> topView(Node* root){
    vector<int> ans;
    if(!root) return ans;
    map<int,int> m;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int line = it.second;
        if(m.find(line) == m.end()) m[line] = node->val;

        if(node->left!=NULL){
            q.push({node->left, line-1});
        }
        if(node->right!=NULL){
            q.push({node->right, line+1});
        }
    }
    for(auto it:m){
        ans.push_back(it.second);
    }
    return ans;
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

    vector<int> sol = topView(a);
    for(auto e:sol){  
        cout<<e<<" ";
    }

    return 0;
}