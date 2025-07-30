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
    public ListNode mergelist(ListNode head1,ListNode head2){
        ListNode res=new ListNode(0);
        ListNode curr=res;
        int value=0;
        while(head1!=null && head2!=null){
            if(head1.val<head2.val){
                value=head1.val;
                head1=head1.next;
            }
            else{
                value=head2.val;
                head2=head2.next;
            }
            curr.next=new ListNode(value);
            curr=curr.next;
        }
        while(head1!=null){
            value=head1.val;
            curr.next=new ListNode(value);
            curr=curr.next;
            head1=head1.next;
        }
        while(head2!=null){
            value=head2.val;
            curr.next=new ListNode(value);
            curr=curr.next;
            head2=head2.next;
        }
        return res.next;
    }
    public ListNode midList(ListNode head){
        ListNode prev=null;
        ListNode slow=head;
        ListNode fast=head;
        while(fast!=null && fast.next!=null){
            prev=slow;
            slow=slow.next;
            fast=fast.next.next;
        }
        if (prev != null) {
            prev.next = null;
        }
        return slow;//mid of list;
    }
    public ListNode sortList(ListNode head) {
        if(head==null || head.next==null)
        return head;
        ListNode mid = midList(head);
        ListNode left = sortList(head);
        ListNode right = sortList(mid);

        ListNode merge=mergelist(left,right);
        return merge;
    }
}