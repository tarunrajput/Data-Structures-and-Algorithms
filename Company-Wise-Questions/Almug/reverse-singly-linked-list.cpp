#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) : data(x), next(NULL) {}
};

Node* reverseLinkedList(Node *head) {
    Node *prev = NULL;
    Node *next = NULL;
    while(head!=NULL) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    Node *temp =reverseLinkedList(head);
    while(temp!=NULL) {
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}