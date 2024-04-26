class Solution:
    def minFallingPathSum(self, grid: List[List[int]]) -> int:
        n = len(grid)
        new_grid = [[float('inf')] * n for _ in range(n)]
        
        for col in range(n):
            new_grid[n-1][col] = grid[n-1][col]
        
        for row in range(n-2,-1,-1):
            for col in range(n):

                ans = float('inf')
                for nextCol in range(n):
                    if nextCol is not col:
                        ans = min(ans,new_grid[row+1][nextCol])
                new_grid[row][col] = grid[row][col]+ans

        return min(new_grid[0])
