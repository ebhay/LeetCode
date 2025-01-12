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
    ListNode* reverse(ListNode *head){
        ListNode *current=head;
        ListNode *prev=nullptr;
        ListNode *nxt;
        while(current!=nullptr){
            nxt=current->next;
            current->next=prev;
            prev=current;
            current=nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        return true;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next !=nullptr && fast->next->next !=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* nhead=reverse(slow->next);
        ListNode *first=head;
        ListNode *second=nhead;
        while(second!=nullptr){
            if(first->val != second->val)
            return false;

            first=first->next;
            second=second->next;
        }
        return true;
           
    }
};