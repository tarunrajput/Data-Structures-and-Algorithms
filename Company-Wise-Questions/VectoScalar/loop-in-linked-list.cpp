#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

bool detectLoop(Node *head) {
    Node *slowptr,*fastptr;
    slowptr=fastptr=head;
    while(slowptr && fastptr && fastptr->next!=NULL) {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(slowptr==fastptr)
            return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{   
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next;
    cout<<detectLoop(head);
    return 0;   
}