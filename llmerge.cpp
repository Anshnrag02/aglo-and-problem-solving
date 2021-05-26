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

void deleteAtTail(node*);

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
        return;
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

void deleteAtHead(node *&head){
    node *temp=head;
    head=head->next;
    delete temp;
}

void deleteAtMiddle(node *&head,int p){
    if(head==NULL){
        return;
    }
    if(p==1){
        deleteAtHead(head);
        return;
    }
    if(p>=length(head)){
        deleteAtTail(head);
        return;
    }
    node *prev=NULL, *temp=head;
    int i=0;
    while(i<p-1){
        prev=temp;
        temp=temp->next;
        ++i;
    }
    prev->next=temp->next;
    delete temp;
}

void deleteAtTail(node *head){
    if(head==NULL){
        return;
    }
    node *prev=NULL;
    while(head->next!=NULL){
        prev=head;
        head=head->next;
    }
    prev->next=NULL;
    delete head;
}

void buildlist(node* &head){
    int data;
    cin>>data;
    while(data!=-1){
        InsertAtTail(head,data);
        cin>>data;
    }
}

istream& operator>>(istream &is,node*&head){
    buildlist(head);
    return is;
}

ostream& operator<<(ostream &os,node*&head){
    print(head);
    return os;
}

node * revrec(node *&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node * small_head=revrec(head->next);
    node * current=head;
    current->next->next= current;
    current->next=NULL;
    return small_head;
}

int sumll(node * head , node * head2){
    int mult=1;
    int sum =0,temp,carry=0;
    while(head!=NULL && head2!=NULL){
        temp=(head2->data+head->data+carry);
        sum=sum+(temp%10)*mult;
        carry=temp/10;
        head = head->next;
        head2 = head2->next;
        mult*=10;
    }
    while(head!=NULL){
        temp=head->data+carry;
        sum=sum+(temp%10)*mult;
        carry=temp/10;
        head = head->next;
        mult*=10;
    }
    while(head2!=NULL){
        temp=head2->data+carry;
        sum=sum+(temp%10)*mult;
        carry=temp/10;
        head2 = head2->next;
        mult*=10;
    }
    temp=carry;
    sum=sum+(temp%10)*mult;
    return sum;
}

node * mid(node*head){
    if (head==NULL || head->next==NULL){
        return head;
    }
    node *slow= head;
    node *fast= head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow =slow -> next;
    }
    return slow;
}

void kfb(node * head, int k){
    node *fast=head, *slow =head;
    while(--k){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    cout<<slow->data;
}

node *merge(node *a, node*b){
    if(a==NULL)
        return b;
    if (b==NULL)
        return a;
    node * head = (a->data<b->data)?a:b;
    if(a->data<b->data)
        head->next=merge(a->next,b);
    else
        head->next=merge(a,b->next);
    return head;
}


int main(){
    
    node* head=NULL;
    node* head2=NULL;
    cin>>head;
    cin>>head2;
    // cin>>head2;
    cout<<head<<endl;
    cout<<head2<<endl;
    // cout<<head2<<endl;
   // head2=mid(head);
    // cout<<head2->data;
    node *p =merge(head,head2);
    cout<<p<<endl;
}
