# class Solution:
#     def numberOfSubarrays(self, nums: List[int], k: int) -> int:
#         n = len(nums)
#         result = 0
#         for start in range(n):
#             count_odds = 0
#             for end in range(start,n):
#                 if nums[end]%2 != 0:
#                     count_odds+=1
#                 if count_odds > k:
#                     break
#                 if count_odds == k:
#                     result+=1
#         return result

class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        result = 0
        oddCount = 0
        prefixSum = {0:1}
        for num in nums:
            if num % 2 == 1:
                oddCount += 1
            if oddCount - k in prefixSum:
                result += prefixSum[oddCount - k]
            if oddCount in prefixSum:
                prefixSum[oddCount] += 1
            else:
                prefixSum[oddCount] =1
        return result
