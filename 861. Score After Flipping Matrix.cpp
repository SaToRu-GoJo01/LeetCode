class Solution {
public:
    void toggleVector(vector<int> &vec) {
        for (int &element : vec) {
            element = (element == 1) ? 0 : 1;
        }
    }
    int binaryToDecimal(vector<int> &binary) {
        int decimal = 0;
        int base = 1;
        for (int i = binary.size() - 1; i >= 0; --i) {

            decimal += binary[i] * base;
           
            base *= 2;
        }

        return decimal;
    }
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0] == 0){
                toggleVector(grid[i]);
            }
        }
        
        for(int j=1;j<n;j++){
            int zero = 0, one = 0;
            for(int i=0;i<m;i++){
                if(grid[i][j] == 0) zero++;
                else one++;
            }
            if(zero > one){
                for(int i=0;i<m;i++){
                    grid[i][j] = (grid[i][j] == 1) ? 0 : 1;
                }
            }
        }
        int result = 0;
        for(auto&vec:grid){
            result += binaryToDecimal(vec);
        }
        return result;
    }
};
