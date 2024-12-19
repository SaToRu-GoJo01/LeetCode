class Solution {
    public int maxChunksToSorted(int[] arr) {
        int length = arr.length;
        int[] max = new int[length];
        int[] min = new int[length];
        int MAX = -1;
        int MIN = Integer.MAX_VALUE;
        for(int i = 0;i<length;i++){
            MAX = Math.max(arr[i],MAX);
            MIN = Math.min(arr[length -i-1],MIN);
            max[i] = MAX;
            min[length -i-1] = MIN;
        }
        int blocks = 0;
        for(int i = 0; i< length-1; i++){
            if(max[i] > min[i+1]){
                blocks++;
            }
        }
        return length - blocks;
    }
}