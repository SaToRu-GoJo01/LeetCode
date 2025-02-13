import heapq
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        count = 0
        heapq.heapify(nums)
        while True:
            if len(nums) >= 2:
                s1,s2 = heapq.heappop(nums),heapq.heappop(nums)
                if s1 < k:
                    heapq.heappush(nums,s1 * 2 + s2)
                    count += 1
                else:
                    break
            else:
                break
        return count
