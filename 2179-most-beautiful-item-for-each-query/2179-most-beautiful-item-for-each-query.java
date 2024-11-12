class Solution {
    public Integer customBinarySearch(int[][] items,int queryPrice){
        int l = 0;
        int r = items.length - 1;
        int maxBeauty = 0;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(items[mid][0] > queryPrice){
                r = mid - 1;
            }
            else{
                maxBeauty = Math.max(maxBeauty,items[mid][1]);
                l = mid + 1;
            }
        }
        return maxBeauty;
    }
    public int[] maximumBeauty(int[][] items, int[] queries) {
        // Arrays.sort(items);
        Arrays.sort(items, Comparator.comparingInt(a -> a[0]));
        int maxSeen = items[0][1];
        for(int i = 0; i<items.length; i++){
            maxSeen = Math.max(maxSeen,items[i][1]);
            items[i][1] = maxSeen;
        }

        int[] ans = new int[queries.length];
        for (int i = 0; i < queries.length; i++) {
            int queryPrice = queries[i];
            ans[i] = customBinarySearch(items, queryPrice);
        }

        return ans;
    }
}