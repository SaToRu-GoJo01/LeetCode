class Solution:
    def minDays(self, grid: List[List[int]]) -> int:
        st = set()

        def total_islands(i,j):
            if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]) or grid[i][j] == 0 or (i,j) in st:
                return
            st.add((i,j))
            total_islands(i+1,j)
            total_islands(i-1,j)
            total_islands(i,j+1)
            total_islands(i,j-1)
            return
        
        islands = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if (i,j) not in st and grid[i][j] == 1:
                    islands+=1
                    total_islands(i,j)
        
        if islands == 0 or islands > 1:
            return 0 
        if len(st) == 1:
            return 1
        else:
            islands = 0
            l = list(st)
            initial_len = len(st)
            st.clear()
            for row,col in l:
                i,j = l[-1]
                if (row,col) == l[-1]:
                    i,j = l[0]
                grid[row][col] = 0
                total_islands(i,j)
                grid[row][col] = 1
                if initial_len - 1 > len(st):
                    print(len(st))
                    return 1
                st.clear()
                
        return 2
