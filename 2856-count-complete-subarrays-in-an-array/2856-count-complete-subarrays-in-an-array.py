class Solution:
    def countCompleteSubarrays(self, nums: List[int]) -> int:
        st = set(nums)
        total = len(st)
        i,j = 0,0
        n = len(nums)
        mpp = {}
        ans = 0
        while j < n:
            mpp[nums[j]] = mpp.get(nums[j],0) + 1
            while len(mpp) == total:
                ans += (n - j)
                mpp[nums[i]] -= 1
                if mpp[nums[i]] == 0:
                    del mpp[nums[i]]
                i += 1
            j += 1
        return ans