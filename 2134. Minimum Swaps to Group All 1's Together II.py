class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        ones = nums.count(1)
        start=0
        nums = nums*2
        current_ones = nums[0:ones].count(1)
        max_ones = current_ones

        for end in range(ones,len(nums)):
            if nums[start] == 1:
                current_ones-=1
            start+=1
            if nums[end] == 1:
                current_ones+=1
            max_ones = max(max_ones,current_ones)

        return ones - max_ones
