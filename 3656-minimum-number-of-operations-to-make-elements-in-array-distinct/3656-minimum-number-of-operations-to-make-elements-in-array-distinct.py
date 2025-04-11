class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        count = defaultdict(int)
        for i in range(len(nums)-1,-1,-1):
            count[nums[i]] += 1
            if count[nums[i]] == 2:
                return ceil((i + 1) / 3)
        return 0