class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i = 0;i<nums1.length;i++){
            map.put(nums1[i][0],nums1[i][1]);
        }
        for(int i = 0;i<nums2.length;i++){
            if(map.containsKey(nums2[i][0])){
                map.put(nums2[i][0],nums2[i][1] + map.get(nums2[i][0]));
            }
            else{
                map.put(nums2[i][0],nums2[i][1]);
            }
        }
        int mapSize = map.size();
        int[][] result = new int[mapSize][2];
        // Convert HashMap entries to a List and sort by key
        List<Map.Entry<Integer, Integer>> entryList = new ArrayList<>(map.entrySet());
        entryList.sort(Comparator.comparingInt(Map.Entry::getKey)); // Sort by key

        // Populate the 2D array
        int i = 0;
        for (Map.Entry<Integer, Integer> entry : entryList) {
            result[i][0] = entry.getKey();
            result[i][1] = entry.getValue();
            i++;
        }
        return result;
    }
}