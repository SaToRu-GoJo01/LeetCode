class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        arr = [i for i in range(1,n+1)]
        starting = 0
        while len(arr) > 1:
            losingOne = k % len(arr)
            if starting < 0:
                starting = 0
            if starting+losingOne-1 < len(arr):
                arr.pop(starting+losingOne-1)
                starting = starting+losingOne-1
            else:
                pos = (starting+losingOne-1)%len(arr)
                arr.pop(pos)
                starting = pos
        return arr[0]
