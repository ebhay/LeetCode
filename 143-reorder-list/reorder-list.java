/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    // Finds the middle node and disconnects the list into two halves
    public ListNode midnode(ListNode head) {
        ListNode prev = null;
        ListNode slow = head;
        ListNode fast = head;
        while (fast != null && fast.next != null) {
            prev = slow;
            slow = slow.next;
            fast = fast.next.next;
        }
        if (prev != null) {
            prev.next = null; // Break the list into two halves
        }
        return slow;
    }

    // Reverses a linked list
    public ListNode reverse(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        while (curr != null) {
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Reorders the list as required
    public void reorderList(ListNode head) {
        if (head == null || head.next == null) return;

        ListNode mid = midnode(head);
        ListNode l2 = reverse(mid);
        ListNode l1 = head;

        // Merge the two halves
        while (l1 != null && l2 != null) {
            ListNode l1_next = l1.next;
            ListNode l2_next = l2.next;

            l1.next = l2;
            if (l1_next == null) break;
            l2.next = l1_next;

            l1 = l1_next;
            l2 = l2_next;
        }
    }
}
