class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        total = sum(nums)
        n = len(nums)
        if total % 2 != 0:
            return False
        target = total // 2
        dp = {}
        def solve(idx,curr_sum):
            if curr_sum == target:
                return True
            
            if idx >= n or curr_sum > target:
                return False
            
            if (idx,curr_sum) in dp:
                return dp[(idx,curr_sum)]

            dp[(idx,curr_sum)] = solve(idx + 1, curr_sum + nums[idx]) or solve(idx+1,curr_sum)
            return dp[(idx,curr_sum)]
        
        return solve(0,0)