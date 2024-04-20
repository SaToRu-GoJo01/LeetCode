class Solution:
    def findFarmland(self, land: List[List[int]]) -> List[List[int]]:
        def traversal(i,j):
            nonlocal x, y
            if (i >= len(land) or j >= len(land[0]) or i < 0 or j < 0 or visited[i][j] or land[i][j] == 0):
                return
            visited[i][j] = True
            if(x <= i):
                x = i
            if(y <= j):
                y = j
            traversal(i+1,j)
            traversal(i,j+1)
        x,y=0,0
        visited = [[False for _ in range(len(land[0]))] for _ in range(len(land))]
        result = []
        for i in range(len(land)):
            for j in range(len(land[0])):
                if(land[i][j] == 1 and not visited[i][j]):
                    traversal(i,j)
                    result.append([i,j,x,y])
                    x,y=0,0
        return result
