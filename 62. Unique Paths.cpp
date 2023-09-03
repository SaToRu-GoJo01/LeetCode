class Solution {
public:
    //BRUTE FORCE APPROACH USING DP
    // int countPaths(int m,int n,int i,int j,vector<vector<int>> &dp){
    //     if(i == (m-1) && j == (n-1)) return 1;
    //     if(i >= m || j >= n) return 0;
    //     if(dp[i][j] != -1) return dp[i][j];
    //     else return dp[i][j] = countPaths(m,n,i,j+1,dp) + countPaths(m,n,i+1,j,dp);
    // }
    // int uniquePaths(int m, int n) {
    //     vector<vector<int>> dp(m, vector<int>(n, -1));
    //     return countPaths(m,n,0,0,dp);
    // }

    //USING COMBINATIONS
    int uniquePaths(int m,int n){
        int N = m + n - 2, r = m - 1;
        double res = 1;
        for(int i = 1;i<=r;i++){
            res = res * (N-r+i)/i;
        }
        return (int)res;
    }
};
