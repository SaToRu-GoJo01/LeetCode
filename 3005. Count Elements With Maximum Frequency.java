class Solution {
    public int maxFrequencyElements(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(map.containsKey(nums[i])){
                int freq = map.get(nums[i]);
                map.put(nums[i],freq+1);
            }
            else{
                map.put(nums[i],1);
            }
        }
        
        int maxKey = Integer.MIN_VALUE;
        
        for(int key:map.values()){
            if(key > maxKey){
                maxKey = key;
            }
        }
        
        int counter = 0;
        
        for(int key:map.values()){
            if(key == maxKey){
                counter++;
            }
        }
        
        return counter*maxKey;
    }
}
