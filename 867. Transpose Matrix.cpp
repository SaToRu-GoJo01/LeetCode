class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> result;
        vector<int> extra;
        for(int i = 0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                extra.push_back(matrix[j][i]);
            }
            result.push_back(extra);
            extra.clear();
        }
        return result;
    }
};
