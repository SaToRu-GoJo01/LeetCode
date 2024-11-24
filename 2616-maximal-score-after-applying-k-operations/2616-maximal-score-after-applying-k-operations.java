class Solution {
    public long maxKelements(int[] nums, int k) {
            long score = 0;
            PriorityQueue<Integer> queue = new PriorityQueue<Integer>(Collections.reverseOrder());
            for(int i=0;i<nums.length;i++){
                queue.add(nums[i]);
            }
            for(int i=0;i<k;i++){
                int temp = queue.poll();
                score += temp;
                queue.add((int)Math.ceil(temp/3.0));
            } 
            return score;
    }
}