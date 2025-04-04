# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    # def find(self)
    def lcaDeepestLeaves(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def traversal(root,level):
            if root is None:
                return (None,level)
            left,ld = traversal(root.left,level + 1)
            right,rd = traversal(root.right,level + 1)
            
            if ld > rd:
                return (left,ld)
            elif rd > ld:
                return (right,rd)
            else:
                return (root,ld)

        ans,_ = traversal(root,0)
        return ans
        

        