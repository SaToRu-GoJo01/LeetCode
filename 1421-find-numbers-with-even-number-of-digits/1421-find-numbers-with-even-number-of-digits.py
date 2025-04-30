class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        ans = 0
        for n in nums:
            if (n >= 10 and n <= 99) or (n >= 1000 and n <= 9999) or (n >= 100000 and n <= 999999):
                ans += 1 
        return ans
