
#include <bits/stdc++.h>
using namespace std;


class Node
{
	public:
	int data;
	Node* next;
};

void push(Node** head_ref, int new_data)
{
	Node* new_node =new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

int getCount(Node* head)
{
	if (head==NULL){
	    return 0;
	}
	return 1+getCount(head->next);
}

void dele(Node *p){
    Node *temp;
    temp=p->next;
    p->data=temp->data;
    p->next=temp->next;
    delete temp;
}

void display(Node *head){
    if(head==NULL)
        return;
    cout<<head->data<<endl;
    display(head->next);
}

int main()
{
	Node* head = NULL,*p;
	push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
	push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
    push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
    
    display(head);
    
    p=head->next;
    p=p->next;
    p=p->next;
    dele(p);
    delall(head)
    cout<<endl;
    display(head);
	/* Check the count function */
	cout<<endl<<"count of nodes is "<< getCount(head);
	return 0;
}

// This is code is contributed by rathbhupendra
