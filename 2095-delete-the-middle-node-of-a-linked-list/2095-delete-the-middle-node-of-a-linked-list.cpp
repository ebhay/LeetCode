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
ListNode* deleteMiddle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; // If there's only one node or the list is empty, return nullptr.
    }
    
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr; // To track the node before the middle node.

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;           // Keep track of the previous node.
        slow = slow->next;
        fast = fast->next->next;
    }

    // Skip the middle node.
    prev->next = slow->next;

    return head;
}

};