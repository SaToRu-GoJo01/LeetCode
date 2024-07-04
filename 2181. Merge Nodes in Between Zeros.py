# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        resultHead = ListNode()
        temp = resultHead
        curr = head.next
        s = 0

        while curr != None:  
            if curr.val == 0:
                temp.next = ListNode(s)
                temp = temp.next
                s=0
            else:
                s+=curr.val
            curr=curr.next

        return resultHead.next
