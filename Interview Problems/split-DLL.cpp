#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev, *next;
    Node(int data)
    {
        this->data=data;
        this->next = this->prev = nullptr;
    }
};

void splitDLL(Node *head, Node **list1_head_ref, Node **list2_head_ref)
{
    if(head==NULL || head->next==NULL)
        return;
    Node *slow, *fast;
    slow=fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    *list2_head_ref=slow->next;
    slow->next->prev=NULL;
    slow->next=NULL;
    *list1_head_ref=head;
}
void printList(Node *head)  
{  
     
    if(head != NULL)  
    {   
        Node *curr = head; 
        cout << endl;  
        while(curr!=NULL)
        {
            cout<< curr-> data<<" ";
            curr=curr->next;
        }
    }  
}  

int main(int argc, char const *argv[])
{
    Node *head = new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    Node *head1 = NULL;  
    Node *head2 = NULL; 
      
    cout << "Original Doubly Linked List";  
    printList(head);      
      
    /* Split the list */
    splitDLL(head, &head1, &head2);  
      
    cout << "\nFirst Doubly Linked List";  
    printList(head1);  
      
    cout << "\nSecond Doubly Linked List";  
    printList(head2);  
    return 0;  
}
