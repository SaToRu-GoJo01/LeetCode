# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getDirections(self, root: Optional[TreeNode], startValue: int, destValue: int) -> str:
        def lowestCommonAncestor(root, p, q):
            if root is None or root.val == p or root.val == q:
                return root

            left = lowestCommonAncestor(root.left, p, q)
            right = lowestCommonAncestor(root.right, p, q)

            if left is not None and right is not None:
                return root

            return left if left is not None else right

        lac = lowestCommonAncestor(root,startValue,destValue)
        lacToStart = []
        lacToDest = []
        def findPath(root,target,path):
            if root is None:
                return False
            if root.val == target:
                return True
            path.append('L')
            if findPath(root.left,target,path):
                return True
            path.pop()
            path.append('R')
            if findPath(root.right,target,path):
                return True
            path.pop()
            return False
            
        findPath(lac,startValue,lacToStart)
        findPath(lac,destValue,lacToDest)  
        result = "U"*len(lacToStart)
        return result+''.join(lacToDest)
