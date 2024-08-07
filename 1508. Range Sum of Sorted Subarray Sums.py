class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        MOD = 10**9 + 7
        new = []
        for i in range(len(nums)):
            for j in range(i,len(nums)):
                new.append(sum(nums[i:j+1]))
        new.sort()
        return sum(new[left-1:right])%MOD
                
