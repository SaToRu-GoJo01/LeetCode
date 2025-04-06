from typing import List

class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        n = len(nums)
        nums.sort()
        prev_idx = [-1] * n
        max_subset = [1] * n
        max_len = 1
        max_idx = -1
        for i in range(n):
            for j in range(i):
                if nums[i] % nums[j] == 0:
                    if max_subset[j] + 1 > max_subset[i]:
                        max_subset[i] = max_subset[j] + 1
                        prev_idx[i] = j
            if max_subset[i] > max_len:
                max_len = max_subset[i]
                max_idx = i


        result = []
        i = max_idx
        while True:
            if prev_idx[i] != -1:
                result.append(nums[i])
                i = prev_idx[i]
            else:
                result.append(nums[i])
                break

        print(max_subset)
        return sorted(result)
