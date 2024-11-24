class Solution:
    def maxKelements(self, nums: List[int], k: int) -> int:
        nums = [-n for n in nums]
        heapq.heapify(nums)
        score = 0
        for i in range(k):
            temp = -heapq.heappop(nums)
            score += temp
            temp = math.ceil(temp/3)
            heapq.heappush(nums,-temp)
        return score