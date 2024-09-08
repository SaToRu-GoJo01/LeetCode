class Solution:
    def largestSubmatrix(self, matrix: List[List[int]]) -> int:
        row,col = len(matrix),len(matrix[0])
        for i in range(1,row):
            for j in range(col):
                if matrix[i][j] == 1:
                    matrix[i][j] += matrix[i-1][j]
        

        for comp_row in matrix:
            comp_row.sort()

        result = 0
        for i in range(row):
            k = 1
            for j in range(col-1,-1,-1):
                result = max(result,k*matrix[i-1][j])
                k+=1
        
        return result
