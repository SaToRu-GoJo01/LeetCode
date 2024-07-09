class Solution:
    def numberOfSubmatrices(self, grid: List[List[str]]) -> int:
        rows, cols = len(grid), len(grid[0])
        count = 0

        prefix_X = [[0] * (cols+1) for _ in range(rows)]

        for r in range(rows):
            for c in range(cols):
                prefix_X[r][c+1] = prefix_X[r][c] + (1 if grid[r][c] == 'X' else 0)

        for c in range(1,cols+1):
            for r in range(1,rows):
                prefix_X[r][c] = prefix_X[r-1][c] + prefix_X[r][c]

        prefix_Y = [[0] * (cols+1) for _ in range(rows)]

        for r in range(rows):
            for c in range(cols):
                prefix_Y[r][c+1] = prefix_Y[r][c] + (1 if grid[r][c] == 'Y' else 0)

        for c in range(1,cols+1):
            for r in range(1,rows):
                prefix_Y[r][c] = prefix_Y[r-1][c] + prefix_Y[r][c]

        for r in range(rows):
            for c in range(1,cols+1):
                if prefix_X[r][c] >= 1 and (prefix_X[r][c] == prefix_Y[r][c]):
                    count+=1
    
        return count
