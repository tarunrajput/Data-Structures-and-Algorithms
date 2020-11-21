#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int data) : val(data), next(nullptr) {}
};

ListNode *oddEvenList(ListNode *head) {
    if (!head)
        return NULL;
    ListNode *t1 = head, *t2 = head->next, *temp = t2;

    while (t1->next != NULL and t2->next != NULL) {
        t1->next = t1->next->next;
        t1 = t1->next;
        t2->next = t2->next->next;
        t2 = t2->next;
    }
    t1->next = temp;
    return head;
}

int main(int argc, char const *argv[]) {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *oddEven = oddEvenList(head);

    while (oddEven) {
        cout << oddEven->val << " ";
        oddEven = oddEven->next;
    }
    return 0;
}
