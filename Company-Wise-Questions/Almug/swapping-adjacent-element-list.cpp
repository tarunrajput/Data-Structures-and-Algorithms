#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) : data(x), next(NULL) {}
};

Node* swapAdjacent(Node *head) {
    if(head==NULL)
        return head;
    Node *temp =head;
    while(temp!=NULL && temp->next!=NULL) {
        int x = temp->data;
        temp->data = temp->next->data;
        temp->next->data = x;
        temp = temp->next->next;
    }
    return head;
}
int main(int argc, char const *argv[])
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    Node *temp = swapAdjacent(head);
    while(temp!=NULL) {
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}