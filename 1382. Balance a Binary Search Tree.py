# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def balanceBST(self, root: TreeNode) -> TreeNode:
        l = []
        def traverse(root):
            if root is None:
                return
            traverse(root.left)
            l.append(root.val)
            traverse(root.right)
            return
        def build(mid):
            if mid < 0 and mid >= len(l):
                return None
            print(l[mid])
            node = TreeNode(l[mid])
            node.left = build(mid-1)
            node.right = build(mid+1)
            return node
        traverse(root)
        mid = len(l)//2
        build(mid)

        
        return None
