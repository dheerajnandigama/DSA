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

vector<vector<int>> verticalTraversal(Node* root){
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<Node*, pair<int,int>>> todo;
    todo.push({root,{0,0}});
    while(!todo.empty()){
        auto p = todo.front();
        todo.pop();
        Node* node = p.first;
        int x = p.second.first, y = p.second.second;
        nodes[x][y].insert(node->val);
        if(node->left){
            todo.push({node->left, {x-1, y+1}});
        }
        if(node->right){
            todo.push({node->right, {x+1,y+1}});
        }
    }
    vector<vector<int>> ans;
    for(auto p:nodes){
        vector<int>col;
        for(auto q:p.second){
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.push_back(col);
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

    vector<vector<int>> sol = verticalTraversal(a);
    for(auto val:sol){
        for(auto e:val){
            cout<<e<<" ";
    }
}

    return 0;
}