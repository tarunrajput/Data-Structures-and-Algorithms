#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};
 
Node* mergeTwoLists(Node* list1, Node* list2) {
        Node dummy = Node(0);
        Node* ans = &dummy;
        
        while(list1 && list2){
            if(list1 -> val < list2 -> val){
                ans -> next = list1;
                list1 = list1 -> next;
            }
            else{
                ans -> next = list2;
                list2 = list2 -> next;
            }
            ans = ans -> next;
        }
        
        ans -> next = list1 ? list1 : list2;
        
        return dummy.next;
}

int main(int argc, char const *argv[])
{
    return 0;
}