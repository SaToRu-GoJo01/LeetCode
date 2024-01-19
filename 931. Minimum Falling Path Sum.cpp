class Solution {
public:
    // int n;
    // int memo[101][101];
    // int solve(vector<vector<int>>& matrix,int i,int j){
    //     if(i == n-1) return matrix[i][j];
    //     if(memo[i][j] != -1) return memo[i][j];
    //     int mini = INT_MAX;
    //     int sum  = matrix[i][j];
    //     for(int shift = -1; shift <= 1 ;shift++){
    //         if(j+shift < n && j + shift >= 0) mini = min(mini,sum+solve(matrix,i+1,j+shift));
    //     }
    //     return memo[i][j] = mini;
    // }
    // int minFallingPathSum(vector<vector<int>>& matrix) {
    //     n = matrix.size();
    //     memset(memo,-1,sizeof(memo));
    //     int answer = INT_MAX;
    //     for(int i=0;i<n;i++){
    //         answer = min(answer,solve(matrix,0,i));
    //     }
    //     return answer;
    // }
    int minFallingPathSum(vector<vector<int>>& matrix){
        int n = matrix.size();
        vector<vector<int>> path(n,vector<int>(n));
        // For first row
        for(int i = 0;i<n;i++){
            path[0][i] = matrix[0][i];
        }
        for(int row = 1;row < n;row++){
            for(int col = 0;col < n;col++){
                int left = INT_MAX;
                int right = INT_MAX;
                if(col + 1 < n) right = path[row-1][col+1];
                if(col - 1 >= 0) left = path[row-1][col-1];
                int mini = min(left,right);
                path[row][col] = matrix[row][col] + min({path[row-1][col],mini});
            }
        }
        int result = INT_MAX;
        for(int i = 0;i<n;i++){
            result = min(result,path[n-1][i]);
        }
        return result;
    }
};
