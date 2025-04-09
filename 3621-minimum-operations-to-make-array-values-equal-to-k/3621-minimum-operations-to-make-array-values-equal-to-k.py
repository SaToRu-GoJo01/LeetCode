class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        st = set()
        for num in nums:
            st.add(num)
        ans = 0
        for num in st:
            if num < k:
                return -1
            elif num > k:
                ans += 1
        return ans