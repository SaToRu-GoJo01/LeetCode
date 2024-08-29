class Solution:
    def removeStones(self, stones: List[List[int]]) -> int:
        n = len(stones)
        parent = [_ for _ in range(n)]
        rank = [0 for _ in range(n)]

        def find(i):
            if parent[i] != i:
                parent[i] = find(parent[i])
            return parent[i]

        def union(x,y):
            x_parent = find(x)
            y_parent = find(y)

            if x_parent != y_parent:
                if rank[x_parent] > rank[y_parent]:
                    parent[y_parent] = x_parent
                
                elif rank[x_parent] < rank[y_parent]:
                    parent[x_parent] = y_parent
                
                else:
                    parent[x_parent] = y_parent
                    rank[y_parent] += 1

        for i in range(n):
            for j in range(i+1,n):
                if stones[i][0] == stones[j][0] or stones[i][1] == stones[j][1]:
                    union(i,j)

        leaders = 0
        for i in range(n):
            find(i)
            if parent[i] == i:
                leaders+=1
        
        return n - leaders
