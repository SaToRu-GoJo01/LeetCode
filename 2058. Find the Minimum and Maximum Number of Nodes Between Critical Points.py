# # Definition for singly-linked list.
# # class ListNode:
# #     def __init__(self, val=0, next=None):
# #         self.val = val
# #         self.next = next
class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        firstc = None
        prevc = None
        currc = None
        minDiff = float('inf')

        prev = head
        curr = head.next
        nex = curr.next
        i=1

        while nex:
            if (curr.val < nex.val and curr.val < prev.val) or (curr.val > nex.val and curr.val > prev.val):
                if firstc == None:
                    firstc = i
                    prevc = i
                    currc = i
                else:
                    prevc = currc
                    currc = i
                    minDiff = min(minDiff,currc-prevc)
            i+=1
            prev = curr
            curr = nex
            nex = curr.next
    
        if  minDiff == float('inf'):
            return [-1,-1]

        return [minDiff,currc - firstc]
