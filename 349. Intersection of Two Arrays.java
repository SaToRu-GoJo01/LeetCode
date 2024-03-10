class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Map<Integer,Integer> map = new HashMap<>();
        for(int i:nums1){
            map.put(i, map.getOrDefault(i, 0) + 1);
        }
        ArrayList<Integer> temp = new ArrayList<>();
        for(int i:nums2){
            if(map.containsKey(i)){
                temp.add(i);
                map.remove(i);
            }
        }
        int[] result = new int[temp.size()];
        for(int i=0;i<temp.size();i++){
            result[i] = temp.get(i);
        }
        return result;
    }
}
