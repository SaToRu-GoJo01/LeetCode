class Solution:
    def countSubarrays(self, nums: List[int]) -> int:
        count = 0
        for i in range(2,len(nums)):
            start = nums[i-2]
            end = nums[i]
            if start + end == nums[i-1]/2:
                count += 1
        return count