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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        /* Iterative Method
        ListNode* current=head;
        ListNode* nxt;
        ListNode* prev=NULL;
        while(current !=nullptr){
            nxt=current->next;
            current->next=prev;
            prev=current;
            current=nxt;
        }
        head=prev;
        return head;*/

        //Recursive Method
        if(head==NULL || head->next==NULL)
        return head;
        
        ListNode* nnode=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;

        return nnode;
    }
};