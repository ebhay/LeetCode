/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;

        if(ptr1 == nullptr || ptr2 == nullptr)
            return nullptr;

        while (ptr1 != ptr2)
        {
            if(ptr1 == nullptr)
                ptr1 = headB;
                ptr1 = ptr1 -> next;

            if(ptr2 == nullptr)
                ptr2 = headA;
                ptr2 = ptr2 -> next;
        }

        return ptr1;

    }   
};