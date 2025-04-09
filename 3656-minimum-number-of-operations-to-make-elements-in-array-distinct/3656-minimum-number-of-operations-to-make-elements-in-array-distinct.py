class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        count = defaultdict(int)
        deleted = -1
        for i in range(len(nums)-1,-1,-1):
            count[nums[i]] += 1
            if count[nums[i]] == 2:
                deleted = i
                break
        print(deleted)
        return ceil((deleted + 1) / 3)