class Solution {
public:
    int count = 0;
    void traversal(int i,int j,vector<vector<char>>&grid,vector<vector<bool>> &visited){
        if (i >= grid.size() || j >= grid[0].size() || i < 0 || j < 0 || visited[i][j] || grid[i][j] == '0') {
            return;
        }
        visited[i][j] = true;
        traversal(i+1,j,grid,visited);
        traversal(i-1,j,grid,visited);
        traversal(i,j+1,grid,visited);
        traversal(i,j-1,grid,visited);
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    traversal(i,j,grid,visited);
                    count++;
                }
            }
        }
        return count;
    }
};
