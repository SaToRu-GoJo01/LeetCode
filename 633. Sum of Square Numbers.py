class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        low,high = 0, int(c**(1/2))+1
        while low <= high:
            ans = low**2 + high**2
            if ans == c:
                return True
            elif ans < c:
                low+=1
            else:
                high-=1
        return False
