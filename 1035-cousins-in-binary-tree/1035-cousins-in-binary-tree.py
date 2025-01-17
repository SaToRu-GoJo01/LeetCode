# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCousins(self, root: Optional[TreeNode], x: int, y: int) -> bool:
        x_level,y_level = -1,-1
        x_parent,y_parent = -1,-1
        def solve(root,parent,level):
            nonlocal x_level,y_level,x_parent,y_parent
            if root == None:
                return
                
            if root.val == x:
                x_parent = parent
                x_level = level

            if root.val == y:
                y_parent = parent
                y_level = level

            solve(root.left,root.val,level+1)
            solve(root.right,root.val,level+1)

        solve(root,-1,0)

        return True if x_parent != y_parent and x_level == y_level else False