#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d){
        data = d;
        next = NULL;
    }
};

class LinkedList{
    node *head;
    node *tail;
    public:
    LinkedList(){
        head=NULL;
        tail=NULL;
    }
    // void insert(){
    //     node *temp = head;
    //     while(temp!=NULL){
    //         cout<<temp->data<<endl;
    //         temp=temp->next;
    //     }
        
    // }
};

void InsertAtHead(node *&head, int data){//pass byu reference
    node *n = new node(data);
    n->next = head;
    head = n;
}

void print(node *temp){ //PASS by Value no change in the head 
    //node *temp = head;
        while(temp!=NULL){
            cout<<temp->data;
            if(temp->next!=NULL)
                cout<<"-->";
            temp=temp->next;
        }
}


int main(){
    node* head=NULL;
    InsertAtHead(head,3);
    InsertAtHead(head,4);
    InsertAtHead(head,5);
    print(head);
}
