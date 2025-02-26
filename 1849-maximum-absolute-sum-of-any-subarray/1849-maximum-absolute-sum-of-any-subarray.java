class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int sum = 0;
        int minSum = 0;
        int maxSum = 0;
        for(int n:nums){
            sum += n;
            if(minSum > sum) minSum = sum;
            if(maxSum < sum) maxSum = sum;
        }
        return Math.abs(minSum - maxSum);
    }
}