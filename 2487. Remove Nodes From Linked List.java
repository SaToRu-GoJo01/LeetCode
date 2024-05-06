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
    public ListNode removeNodes(ListNode head) {

        ArrayList<Integer> values = new ArrayList<>();
        ListNode temp = head;

        while(temp != null){
            values.add(temp.val);
            temp = temp.next;
        }

        ArrayList<Integer> rightMax = new ArrayList<>(values.size());
        for (int i = 0; i < values.size(); i++) {
            rightMax.add(0);
        }

        int maxi = values.get(values.size()-1);
        for(int i = values.size()-2;i>=0;i--){
            rightMax.set(i,maxi);
            if(maxi < values.get(i)){
                maxi = values.get(i);
            }
        }
        
        int location = 0;
        temp = head;
        ListNode prev = null;
        while(temp != null){
            if(temp.val < rightMax.get(location)){
                if(temp == head){
                    head = head.next;
                    temp.next = null;
                    temp = head;
                }
                else{
                    prev.next = temp.next;
                    temp.next = null;
                    temp = prev.next;
                }
            }
            else{
                prev = temp;
                temp = temp.next;
            }
            location+=1;
        }
        return head;
    }
}

// USING MONOTONIC STACK
class Solution {
    public ListNode removeNodes(ListNode head) {
        Stack<ListNode> st = new Stack<>();
        ListNode curr = head;
        while(curr != null){
            while(!st.isEmpty() && st.peek().val < curr.val){
                st.pop();
            }
            st.push(curr);
            curr = curr.next;
        }

        ListNode nxt = null;
        while(!st.isEmpty()){
            curr = st.pop();
            curr.next = nxt;
            nxt = curr;
        }

        return curr;
    }
}
