class Solution:
    def restoreMatrix(self, rowSum: List[int], colSum: List[int]) -> List[List[int]]:
        matrix = [[0 for _ in range(len(colSum))] for _ in range(len(rowSum))]
        for row in range(len(matrix)):
            for col in range(len(matrix[0])):
                item = 0
                if rowSum[row] < colSum[col]:
                    item = rowSum[row]
                else:
                    item = colSum[col]
                colSum[col]-=item
                rowSum[row]-=item
                matrix[row][col] = item
                if rowSum[row] == 0:
                    break
                
        return matrix
