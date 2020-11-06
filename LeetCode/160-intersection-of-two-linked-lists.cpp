#include<iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode *next;
    ListNode(int val) : data(val), next(nullptr) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *h1 = headA;
    ListNode *h2 = headB;

    if (!headA or !headB)
        return NULL;

    while (h1 != h2) {
        if (h1 == NULL)
            h1 = headB;
        else
            h1 = h1->next;
        if (h2 == NULL)
            h2 = headA;
        else
            h2 = h2->next;
    }
    return h1;
}

int main(int argc, char const *argv[])
{
    // list A - 1->8->4
    // list B - 6->1->8->4
    
    ListNode *headA = new ListNode(1);
    headA->next = new ListNode(8);
    headA->next->next = new ListNode(4);
    ListNode *headB = new ListNode(6);
    headB->next = new ListNode(1);
    headB->next->next = headA->next;
    headB->next->next->next = headA->next->next;

    ListNode *intersectionNode = getIntersectionNode(headA,headB);
    cout<<intersectionNode->data;
    return 0;
}
