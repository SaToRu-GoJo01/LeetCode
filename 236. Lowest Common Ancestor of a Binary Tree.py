# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        def dfs(root,p,q):
            if root is None or root == p or root == q:
                return root
            l = dfs(root.left,p,q)
            r = dfs(root.right,p,q)
            if l is not None and r is not None:
                return root
            if l is not None:
                return l
            elif r is not None:
                return r
            else:
                return None
        
        return dfs(root,p,q)
