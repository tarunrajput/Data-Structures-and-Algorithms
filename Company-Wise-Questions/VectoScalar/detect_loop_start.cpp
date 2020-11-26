#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head)
{
    // if list is empty or there is no loop return NULL
    if (!head or !head->next)
        return NULL;
    ListNode *slowptr, *fastptr;
    slowptr = fastptr = head;
    slowptr = slowptr->next;
    fastptr = fastptr->next->next;

    while (fastptr && fastptr->next)
    {
        if (slowptr == fastptr)
            break;
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }

    // if there exists a loop
    if (slowptr == fastptr)
    {
        slowptr = head;
        if (fastptr == head)
            return head;
        while (slowptr->next != fastptr->next)
        {
            slowptr = slowptr->next;
            fastptr = fastptr->next;
        }
        return fastptr->next;
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next;
    ListNode *temp = detectCycle(head);
    return 0;
}