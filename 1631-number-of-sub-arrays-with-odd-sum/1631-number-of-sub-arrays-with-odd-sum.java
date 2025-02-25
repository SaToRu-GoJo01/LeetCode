class Solution {
    public int numOfSubarrays(int[] arr) {
        int MOD = 1000000007;
        int ans = 0;
        int n = arr.length;
        int[] prefix_sum = new int[n];
        int sum = 0;
        for(int i =0;i<n;i++){
            sum += arr[i];
            prefix_sum[i] += sum; 
        }
        int even = 1;
        int odd = 0;
        for(int i = 0;i<n;i++){
            if(prefix_sum[i] % 2 == 0){
                ans = (ans + odd) % MOD;
                even++;
            }
            else{
                ans = (ans + even) % MOD;
                odd += 1;
            }
        }
        return ans;
    }
}