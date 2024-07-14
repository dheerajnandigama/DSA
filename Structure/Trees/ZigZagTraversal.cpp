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

vector<vector<int>> zigzagLevelOrder(Node* node){
    vector<vector<int>> result;
    if(node==NULL) return result;

    queue<Node*> q;
    q.push(node);
    bool leftToRight =  true;

    while(!q.empty()){
        int size = q.size();
        vector<int>row(size);
        for(int i=0;i<size;i++){
            Node* n = q.front();
            q.pop();

            int index = (leftToRight) ? i : (size-1-i);

            row[index] = n->val;
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
        }
        leftToRight = !leftToRight;
        result.push_back(row);
    }
    return result;
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

    vector<vector<int>> sol = zigzagLevelOrder(a);
    for(auto val:sol){
        for(auto e:val){
            cout<<e<<" ";
        }
    }

    return 0;
}