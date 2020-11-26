#include<bits/stdc++.h>
using namespace std;

struct Node 
{ 
    int data; 
    Node *next,*random; 
    Node(int x) 
    { 
        data = x; 
        next = random = NULL; 
    } 
}; 

void print(Node *start) 
{ 
    Node *ptr = start; 
    while (ptr) 
    { 
        cout << "Data = " << ptr->data << ", Random  = "
             << ptr->random->data << endl; 
        ptr = ptr->next; 
    } 
} 

Node* clone(Node *head) {
    if(head==NULL) return head;
    Node *curr = head;
    Node *temp;

    while(curr) {
        temp = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next = temp;
        curr = temp;
    }
    curr = head;
    while(curr) {
        if(curr->next && curr->random)
            curr->next->random = curr->random->next;
        curr = curr->next ? curr->next->next : curr->next;
    }

    Node *original = head;
    Node *copy = head->next;
    temp = copy;
    while(original && copy) {
        original->next = original->next ? original->next->next : original->next;
        copy->next = copy->next ? copy->next->next : copy->next;
        original = original->next;
        copy = copy->next;
    }
    return temp;
}

int main(int argc, char const *argv[])
{
    return 0;
}