#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }

    void insert(int value){
        Node* new_node = new Node(value);
        if(head==NULL){//linkedlist is empty
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }    
};

void deleteAlternateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node !=NULL && curr_node->next!=NULL){
        Node* temp = curr_node->next; // node to be deleted
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node=curr_node->next; 
    }
}

void deleteDuplicateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node->next!=NULL){
         Node* temp = curr_node->next;
        if(curr_node->val == curr_node->next->val){
            curr_node->next = curr_node->next->next;
            free(temp);
            curr_node=curr_node->next;
        }
        else{
            curr_node=curr_node->next;
        }
    }
}

void reversePrint(Node* head){

    //base case
    if(head == NULL){
        return;
    }

    //recursive case
    reversePrint(head->next);
    cout<<head->val<<" ";

}

int main(){

    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.display();
    reversePrint(ll.head);
    
    return 0;
}