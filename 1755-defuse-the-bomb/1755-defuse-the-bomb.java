class Solution {
    public int[] decrypt(int[] code, int k) {
        int n = code.length;
        int[] result = new int[n];
        if(k == 0){
            for(int i = 0;i<n;i++){
                result[i] = 0;
            }
            return result;
        }
        int i = -1;
        int j = -1;
        if(k > 0){
            i = 1;
            j = k;
        }
        else{
            i = n - Math.abs(k);
            j = n - 1;
        }
        int windowSum = 0;
        for(int curr = i;curr<=j;curr++){
            windowSum += code[curr];
        }
        for(int curr = 0;curr<n;curr++){
            result[curr] = windowSum;
            windowSum -= code[i%n];
            i++;
            windowSum += code[(j+1)%n];
            j++;
        }
        return result;
    }
}