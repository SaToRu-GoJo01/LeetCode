class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        def helper(nums,level,currentXOR):
            if level == len(nums):
                return currentXOR

            include = helper(nums,level+1,currentXOR^nums[level])
            exclude = helper(nums,level+1,currentXOR)

            return include+exclude
        return helper(nums,0,0)