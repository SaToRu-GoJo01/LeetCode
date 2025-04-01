class Solution {
    long solve(int curr, int[][] questions, int n, long[] dp){
        if(curr >= n){
            return 0;
        }
        if(dp[curr] != -1){
            return dp[curr];
        }
        int points = questions[curr][0];
        int bp = questions[curr][1];
        long solved = points + solve(curr + bp + 1, questions, n, dp);
        long skip = solve(curr + 1, questions, n, dp);
        return dp[curr] = Math.max(solved,skip);
    }
    public long mostPoints(int[][] questions) {
        int n = questions.length;
        long[] dp = new long[n];
        Arrays.fill(dp, -1);
        return solve(0,questions,n,dp);
    }
}