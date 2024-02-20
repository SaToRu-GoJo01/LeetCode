class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums = sorted(nums)
        size = len(nums)
        return max(nums[0]*nums[1]*nums[size-1],nums[size-1]*nums[size-2]*nums[size-3])
