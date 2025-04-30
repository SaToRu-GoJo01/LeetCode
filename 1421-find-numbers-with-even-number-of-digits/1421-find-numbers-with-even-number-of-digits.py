class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        ans = 0
        for n in nums:
            ans += 1 if len(str(n)) % 2 == 0 else 0
        return ans
