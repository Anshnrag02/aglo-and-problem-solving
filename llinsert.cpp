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

int length(node * head){
    if(head==NULL)
        return 0;
    int count =0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

void InsertAtTail(node *&head, int data){
    
    if(head==NULL){
        InsertAtHead(head,data);
    }
    node *temp=head;
    node *n= new node(data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void InsertAtMiddle(node *&head, int data, int p){
    if(head==NULL || p==0)
        InsertAtHead(head,data);
    else if(p>length(head))
        InsertAtTail(head,data);
    else{
        node *temp=head;
        int i=0;
        node*n=new node(data);
        while(i<p-1){
            temp=temp->next;
            i++;
        }
        n->next=temp->next;
        temp->next=n;
    }
}

int main(){
    node* head=NULL;
    InsertAtHead(head,3);
    InsertAtHead(head,4);
    InsertAtHead(head,5);
    InsertAtTail(head,7);
    InsertAtMiddle(head,6,2);
    print(head);
}
