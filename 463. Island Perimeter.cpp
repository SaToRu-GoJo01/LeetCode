class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int parameter = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(grid[i][j] == 1){
                    // if there is water above the cell
                    if(i > 0 && grid[i-1][j] == 0) parameter++;
                    // if there is nothing above the cell
                    if(i == 0) parameter++;
                    // if there is nothing below the cell
                    if(i+1 == rows) parameter++;
                    // if there is water below the cell
                    if(i + 1 < rows && grid[i+1][j] == 0) parameter++;
                    // if there water in the left side of the cell
                    if(j > 0 && grid[i][j-1] == 0) parameter++;
                    // if there is nothing behind the cell(on the left side)
                    if(j == 0) parameter++;
                    // if there is nothing in front of the cell(ont the right side)
                    if(j+1 == cols) parameter++;
                    // if there is water on the right side of the cell
                    if(j+1 < cols && grid[i][j+1] == 0) parameter++;
                }
            }
        }
        return parameter;
    }
};
