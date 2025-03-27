class Solution {
    public int minimumIndex(List<Integer> nums) {
        Map<Integer,Integer> counter = new HashMap<>();
        int n = nums.size();
        int count = 0;
        int curr = -1;
        for(int i = 0;i<n;i++){
            counter.put(nums.get(i),counter.getOrDefault(nums.get(i),0)+1);
            if(count == 0){
                count++;
                curr = nums.get(i);
            }
            else if(curr == nums.get(i)){
                count++;
            }
            else{
                count--;
            }
        }
        
        int currCount = counter.get(curr);
        int tillNow = 0;
        for(int i = 0;i<n;i++){
            if(curr == nums.get(i)){
                tillNow++;
            }
            if(2 * tillNow > (i+1) && 2 * (currCount - tillNow) > n - (i + 1)){
                return i;
            }
        }
        return -1;
    }
}