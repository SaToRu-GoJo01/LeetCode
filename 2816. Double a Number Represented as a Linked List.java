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
    public ListNode reverse(ListNode head){
        ListNode curr = head;
        ListNode prev = null;
        ListNode nxt = null;
        while(curr != null){
            nxt = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    public ListNode doubleIt(ListNode head) {
        head = reverse(head);
        int carry = 0;
        ListNode temp = head;
        while(temp!=null){
            int t = temp.val*2+carry;
            carry = t/10;
            temp.val = t%10;
            temp = temp.next;
        }
        head = reverse(head);
        if(carry != 0){
            ListNode newNode = new ListNode(carry);
            newNode.next = head;
            return newNode;
        }
        return head;
    }
}
