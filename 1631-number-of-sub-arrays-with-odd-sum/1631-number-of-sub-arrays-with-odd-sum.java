class Solution {
    public int numOfSubarrays(int[] arr) {
        int MOD = 1000000007;
        int ans = 0;
        int n = arr.length;
        int even = 1;
        int odd = 0;
        int prefix_sum = 0;

        for(int i = 0;i<n;i++){
            prefix_sum += arr[i];
            if(prefix_sum % 2 == 0){
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