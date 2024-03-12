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
    public ListNode removeZeroSumSublists(ListNode head) {
        ListNode temp = head;
        int prefixSum = 0;
        HashMap<Integer,ListNode> map = new HashMap<>();
        ListNode dummyNode = new ListNode(0);
        map.put(0,dummyNode);
        dummyNode.next = head;

        while(head != null){
            prefixSum += head.val;
            if(map.containsKey(prefixSum)){
                ListNode p = map.get(prefixSum);
                ListNode start = p;
                int prevSum = prefixSum;
                while(start != head){
                    start = start.next;
                    prevSum += start.val;
                    if(start != head){
                        map.remove(prevSum);
                    }
                }
                p.next = head.next;
            }
            else{
                map.put(prefixSum,head);
            }
            head=head.next;
        }

        return dummyNode.next;
    }
}
