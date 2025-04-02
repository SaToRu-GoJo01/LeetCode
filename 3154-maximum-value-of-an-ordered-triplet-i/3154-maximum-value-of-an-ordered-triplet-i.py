class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        maxTriplets,maxDiff,maxElement = 0,0,0
        for num in nums:
            maxTriplets = max(maxTriplets,maxDiff * num)
            maxDiff = max(maxDiff,maxElement - num)
            maxElement = max(maxElement,num)
        return maxTriplets