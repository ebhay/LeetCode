class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode prev = dummy; // FIXED: Start from dummy, not dummy.next

        // Move `prev` to the node just before `left`
        for (int i = 1; i < left; i++) {
            prev = prev.next;
        }

        ListNode curr = prev.next;
        ListNode st = prev;
        ListNode newend = curr;

        // Correct loop range and logic
        for (int i = 0; i < right - left + 1 && curr != null; i++) {
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        // Reconnect links
        st.next = prev;
        newend.next = curr;

        return dummy.next;
    }
}
