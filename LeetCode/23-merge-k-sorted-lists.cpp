/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *mergeListHead = new ListNode();
        ListNode *finalHead = mergeListHead;
        vector<int> nodeVal;

        for (ListNode *head : lists)
        {
            while (head)
            {
                nodeVal.push_back(head->val);
                head = head->next;
            }
        }
        sort(nodeVal.begin(), nodeVal.end());
        for (int data : nodeVal)
        {
            mergeListHead->next = new ListNode(data);
            mergeListHead = mergeListHead->next;
        }
        return finalHead->next;
    }
};