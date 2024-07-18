# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countPairs(self, root: TreeNode, distance: int) -> int:
        adj = defaultdict(list)
        leafNodes = set()
        def makeGraph(root,prev):
            if root is None:
                return
            if not root.left and not root.right:
                leafNodes.add(root)
            if prev != None:
                adj[root].append(prev)
                adj[prev].append(root)
            makeGraph(root.left,root)
            makeGraph(root.right,root)
            return
        makeGraph(root,None)
        result = 0
        def bfs(root):
            nonlocal result
            queue = deque([(root,0)])
            visited = set()
            visited.add(root)
            while queue:
                node,level = queue.popleft()
                if level > distance:
                    continue
                for neighbour in adj[node]:
                    if neighbour not in visited:
                        visited.add(neighbour)
                        queue.append((neighbour,level+1))
                        if neighbour in leafNodes and level+1 <= distance:
                            result += 1
                level += 1
        
        for node in leafNodes:
            bfs(node)
        return result // 2
