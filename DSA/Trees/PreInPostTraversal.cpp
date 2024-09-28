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

void display(vector<int> &v){
    for(auto e:v){
        cout<<e<<" ";
    }
}

void preInPostTraversal(Node* node){
    stack<pair<Node*,int>> s;
    s.push({node,1});
    vector<int> pre,in,post;
    if(node==NULL) return;
    while(!s.empty()){
        auto it = s.top();
        s.pop();

        //This is part of pre - increment from 1 to 2 - push the left side of tree
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            s.push(it);

            if(it.first->left != NULL){
                s.push({it.first->left, 1});
            }
        }

        //This is part of in - increment from 2 to 3 - push the right side of tree
        else if(it.second == 2){
            in.push_back(it.first->val);
            it.second++;
            s.push(it);

            if(it.first->right != NULL){
                s.push({it.first->right, 1});
            }
        }

        //don't push it back again
        else{
            post.push_back(it.first->val);
        }
    }
    cout<<"preOrder:"<<endl;
    display(pre);
    cout<<endl;
    cout<<"inOrder:"<<endl;
    display(in);
    cout<<endl;
    cout<<"postOrder:"<<endl;
    display(post);
    cout<<endl;

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

    preInPostTraversal(a);

    return 0;
}