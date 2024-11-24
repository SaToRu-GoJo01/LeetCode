// class Solution {
//     public long maxKelements(int[] nums, int k) {
//             long score = 0;
//             PriorityQueue<Integer> queue = new PriorityQueue<Integer>(Collections.reverseOrder());
//             for(int i=0;i<nums.length;i++){
//                 queue.add(nums[i]);
//             }
//             for(int i=0;i<k;i++){
//                 int temp = queue.poll();
//                 score += temp;
//                 queue.add((int)Math.ceil(temp/3.0));
//             } 
//             return score;
//     }
// }
class Solution {
    public long maxKelements(int[] nums, int k) {
        Arrays.sort(nums);
        long max = 0;
        int i = nums.length - 1;
        while (k > 0) {
            if (nums[i] >= nums[nums.length - 1]) {
                max += nums[i];
                nums[i] = nums[i] % 3 == 0 ? nums[i] / 3 : nums[i] / 3 + 1;
            } else {
                // int start = i;
                // while (start > 1 && nums[start] > nums[i + 1])
                //     --start;
                Arrays.sort(nums);
                i = nums.length - 1;
                max += nums[i];
                nums[i] = nums[i] % 3 == 0 ? nums[i] / 3 : nums[i] / 3 + 1;
            }
            if (i > 0 && nums[i - 1] > nums[i])
                --i;
            --k;
        }
        return max;
    }
}