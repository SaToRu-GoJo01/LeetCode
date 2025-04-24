from typing import List

class Solution:
    def countCompleteSubarrays(self, nums: List[int]) -> int:
        unique_elements = set(nums)
        total_unique = len(unique_elements)
        n = len(nums)
        
        i = 0
        ans = 0
        freq_map = {}

        for j in range(n):
            freq_map[nums[j]] = freq_map.get(nums[j], 0) + 1

            while len(freq_map) == total_unique:
                ans += (n - j)
                freq_map[nums[i]] -= 1
                if freq_map[nums[i]] == 0:
                    del freq_map[nums[i]]
                i += 1

        return ans
