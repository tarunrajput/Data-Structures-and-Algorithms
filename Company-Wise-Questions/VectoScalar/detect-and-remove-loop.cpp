#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

void detectAndRemoveLoop(Node *head) {
    Node *slowptr,*fastptr;
    slowptr=fastptr=head;
    slowptr = slowptr->next;
    fastptr = fastptr->next->next;
    
    while(fastptr && fastptr->next) {
        if(slowptr == fastptr)
            break;
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }

    if(slowptr == fastptr) {
        slowptr = head;
        while(slowptr->next != fastptr->next) {
            slowptr = slowptr->next;
            fastptr = fastptr->next;
        }
        fastptr->next = NULL;
    }
}

int main(int argc, char const *argv[])
{   
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next;
    detectAndRemoveLoop(head);
    return 0;   
}