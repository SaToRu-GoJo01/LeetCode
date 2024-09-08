class Solution:
    def maximumDetonation(self, bombs: List[List[int]]) -> int:
        adj = defaultdict(list)
        for index in range(len(bombs)):
            for index1 in range(len(bombs)):
                if index1 == index:
                    continue
                i,j,r = bombs[index]
                i1,j1,r1 = bombs[index1]
                d = sqrt((i - i1) ** 2 + (j - j1) ** 2)
                if d <= r:
                    adj[index].append(index1)

        
        visited = set()
        def traversal(bomb):
            visited.add(bomb)
            for neighbour in adj[bomb]:
                if neighbour not in visited:
                    traversal(neighbour)
            
        result = 0
        for index in range(len(bombs)):
            traversal(index)
            result = max(result,len(visited))
            print(visited)
            visited.clear()

        return result
