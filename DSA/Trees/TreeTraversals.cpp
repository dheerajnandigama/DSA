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

void preOrder(Node* node){
    if(node == NULL) return;
    cout<<node->val<<" ";
    preOrder(node->left);
    preOrder(node->right);
}

void inOrder(Node* node){
    if(node == NULL) return;
    inOrder(node->left);
    cout<<node->val<<" ";
    inOrder(node->right);
}
 
void postOrder(Node* node){
    if(node == NULL) return;
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->val<<" ";
}

vector<vector<int>> levelOrder(Node* node){
    vector<vector<int>> bfs;
    if(node == NULL) return bfs;
    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        int size = q.size();
        vector<int> level; 
        for(int i=0;i<size;i++){
            Node* n = q.front();
            q.pop();
            if(n->left != NULL) q.push(n->left);
            if(n->right != NULL) q.push(n->right);
            level.push_back(n->val);
        }
        bfs.push_back(level);
    }
    return bfs;
}

vector<int> preOrderIterative(Node* node){
    vector<int> preorder;
    if(!node) return preorder;

    stack<Node*> s;
    s.push(node);
    while(!s.empty()){
        Node* n = s.top();
        s.pop();
        preorder.push_back(n->val);
        if(n->right!=NULL){
            s.push(n->right);
        }
        if(n->left!=NULL){
            s.push(n->left);
        }
    }
    return preorder;
}

vector<int> inOrderIterative(Node* node){
    vector<int> inorder;
    if(!node) return inorder;

    stack<Node*> s;
    Node* n = node;
   while(true){
    if(n !=NULL){
        s.push(n);
        n = n->left;
    }
    else{
        if(s.empty() == true) break;
        n = s.top();
        s.pop();
        inorder.push_back(n->val);
        n = n->right;
    }
   }
    return inorder;
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

    // preOrder(a);
    
    inOrder(a);
    cout<<endl;
    // postOrder(a);

    // vector<vector<int>> sol =  levelOrder(a);
    // for(auto it:sol){
    //     for(auto e:it){
    //         cout<<e<<" ";
    //     }
    // }

    // vector<int> pre = preOrderIterative(a);
    // for(auto e:pre){
    //     cout<<e<<" ";
    // }

    vector<int> in = inOrderIterative(a);
    for(auto e:in){
        cout<<e<<" ";
    }

    return 0;
}