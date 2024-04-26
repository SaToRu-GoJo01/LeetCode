class Solution {
public:
    int result = INT_MAX;
    int dp[201][201];
    int solve(int row,int col,vector<vector<int>>&grid){
        if(row == grid.size()-1) return grid[row][col];
        if(dp[row][col] != -1){
            return dp[row][col];
        }
        int ans = INT_MAX;
        for(int i=0;i<grid[0].size();i++){
            if(i != col){
                ans = min(ans,solve(row+1,i,grid));
            }
        }
        return dp[row][col] =  grid[row][col]+ans;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int i = 0;
        memset(dp,-1,sizeof(dp));
        for(int j=0;j<grid.size();j++){
            result = min(result,solve(i,j,grid));
        }
        return result;
    }
};

// BOTTOM UP APPROACH
class Solution {
public:
    int minFallingPathSum(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        std::vector<std::vector<int>> new_grid(n, std::vector<int>(n, std::numeric_limits<int>::max()));

        // Copy the last row of grid to new_grid
        for (int col = 0; col < n; ++col) {
            new_grid[n - 1][col] = grid[n - 1][col];
        }

        // Start from second last row and update new_grid
        for (int row = n - 2; row >= 0; --row) {
            for (int col = 0; col < n; ++col) {
                int ans = std::numeric_limits<int>::max();
                for (int nextCol = 0; nextCol < n; ++nextCol) {
                    if (nextCol != col) {
                        ans = std::min(ans, new_grid[row + 1][nextCol]);
                    }
                }
                new_grid[row][col] = grid[row][col] + ans;
            }
        }

        // Find the minimum value in the first row of new_grid
        int minPathSum = *std::min_element(new_grid[0].begin(), new_grid[0].end());
        return minPathSum;
    }
};
