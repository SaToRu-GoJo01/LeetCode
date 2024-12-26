class Solution {
    public int recursion(int[] nums, int target, int curr, int sum){
        if(curr >= nums.length){
            if(target == sum){
                return 1;
            }
            return 0;
        }
        return recursion(nums,target,curr+1,sum+nums[curr]) + recursion(nums,target,curr+1,sum-nums[curr]);
    }
    public int findTargetSumWays(int[] nums, int target) {
        return recursion(nums,target,0,0);
    }
}