class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        l = []
        row,col = len(grid),len(grid[0])
        for i in range(row):
            for j in range(col):
                if grid[i][j] == 2:
                    l.append((i,j,0))

        queue = deque(l)
        max_time = 0
        def bfs():
            nonlocal max_time
            while queue:
                x,y,t = queue.popleft()
                max_time = max(max_time,t)
                if x-1 >= 0 and grid[x-1][y] == 1:
                    grid[x-1][y] = 2
                    queue.append((x-1,y,t+1))

                if x+1 < row and grid[x+1][y] == 1:
                    grid[x+1][y] = 2
                    queue.append((x+1,y,t+1))

                if y-1 >= 0 and grid[x][y-1] == 1:
                    grid[x][y-1] = 2
                    queue.append((x,y-1,t+1))

                if y+1 < col and grid[x][y+1] == 1:
                    grid[x][y+1] = 2
                    queue.append((x,y+1,t+1))

        bfs()
        
        for r in grid:
            for value in r:
                if value == 1:
                    return -1

        return max_time