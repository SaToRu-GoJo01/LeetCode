class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        max_element = max(nums)
        curr_count = 0
        i,j = 0,0
        n = len(nums)
        ans = 0
        while j < n:
            if max_element == nums[j]:
                curr_count += 1
            while curr_count >= k:
                ans += (n - j)
                if max_element == nums[i]:
                    curr_count -= 1
                i += 1
            j += 1
        return ans