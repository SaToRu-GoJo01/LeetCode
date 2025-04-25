class Solution:
    def countInterestingSubarrays(self, nums: List[int], modulo: int, k: int) -> int:
        is_interesting = []
        for num in nums:
            if num % modulo == k:
                is_interesting.append(1)
            else:
                is_interesting.append(0)
        mpp = defaultdict(int)
        mpp[0] = 1
        p_sum = 0
        ans = 0
        for ii in is_interesting:
            # print(mpp)
            p_sum = (ii + p_sum) % modulo
            if mpp[(p_sum - k + modulo) % modulo] != 0:
                ans += mpp[(p_sum - k + modulo) % modulo]
            mpp[p_sum] = (mpp[p_sum] + 1)
        return ans