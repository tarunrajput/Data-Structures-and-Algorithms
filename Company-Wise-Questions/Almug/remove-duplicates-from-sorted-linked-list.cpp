#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
        ListNode *thead=head;
        while(thead!=NULL && thead->next!=NULL) {
            if(thead->val == thead->next->val)
                thead->next = thead->next->next;
            else
               thead=thead->next; 
        }
        return head;
}
int main(int argc, char const *argv[])
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    deleteDuplicates(head);
    while(head!=NULL) {
        cout<<head->val;
        head=head->next;
    }
    return 0;
}