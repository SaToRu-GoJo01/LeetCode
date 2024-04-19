class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        def traversal(i,j):
            if (i >= len(grid) or j >= len(grid[0]) or i < 0 or j < 0 or visited[i][j] or grid[i][j] == '0'):
                return
            visited[i][j] = True
            traversal(i-1,j)
            traversal(i+1,j)
            traversal(i,j+1)
            traversal(i,j-1)
        visited = [[False for _ in range(len(grid[0]))] for _ in range(len(grid))]
        count = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1' and not visited[i][j]:
                    traversal(i,j)
                    count+=1
        return count
