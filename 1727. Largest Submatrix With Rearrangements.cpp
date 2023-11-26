class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 1){
                    matrix[i][j] += matrix[i-1][j];
                }
            }
        }
        for(auto &i:matrix){
            sort(i.begin(),i.end());
        }
        int result = 0;
        for(int i=0;i<matrix.size();i++){
            int k = 1;
            for(int j=matrix[0].size()-1;j>=0;j--){
                if(matrix[i][j] > 0){
                    result = max(result,matrix[i][j]*k);
                    k++;
                }
            }
        }
        return result;
    }
};
