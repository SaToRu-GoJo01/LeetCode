class Solution {
    public char findKthBit(int n, int k) {
        return solve(n,k);
    }
    private char solve(int n,int k){
        if(n == 1 || k == 1){
            return '0';
        }
        int len = ((int)Math.pow(2,n))-1;
        int mid = (len/2) + 1;
        if(mid == k){
            return '1';
        }
        if(mid > k){
            return solve(n-1,k);
        }
        int mirrored = mid - (k - mid);
        return solve(n-1,mirrored)=='0'?'1':'0';
    }
}