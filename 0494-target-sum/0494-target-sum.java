class Solution {
    public int recursion(int[] nums, int target, int curr, int sum ,Map<String,Integer> memo){
        if(curr >= nums.length){
            if(target == sum){
                return 1;
            }
            return 0;
        }
        String key = sum + "," + curr;
        if(memo.containsKey(key)){
            return memo.get(key);
        }
        int add = recursion(nums,target,curr+1,sum+nums[curr],memo);
        int sub = recursion(nums,target,curr+1,sum-nums[curr],memo);
        memo.put(key,add + sub);
        return add + sub;
    }
    public int findTargetSumWays(int[] nums, int target) {
        Map<String,Integer> memo = new HashMap<>();
        return recursion(nums,target,0,0,memo);
    }
}