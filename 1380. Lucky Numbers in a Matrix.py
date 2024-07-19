#Brute Force
class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        row = [float('inf') for _ in range(len(matrix))]
        col = [float('-inf') for _ in matrix[0]]
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                row[i] = min(matrix[i][j],row[i])
                col[j] = max(matrix[i][j],col[j])
        result = []
        for i in row:
            if i in col:
                result.append(i) 
        return result 

#Better
class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        row = [float('inf') for _ in range(len(matrix))]
        col = [float('-inf') for _ in matrix[0]]
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                row[i] = min(matrix[i][j],row[i])
                col[j] = max(matrix[i][j],col[j])
        rowMax = max(row)
        colMin = min(col)
        return [rowMax] if rowMax == colMin else []
