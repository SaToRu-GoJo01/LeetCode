class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        // result[0].push_back(1);
        // result[1].resize(2,1);
        if (numRows >= 1) {
            result[0].push_back(1);
        }
        if (numRows >= 2) {
            result[1].resize(2, 1);
        }
        int i = 2;
        while(i < numRows){
            result[i].push_back(1);
            int k = 0;
            while(k < i - 1){
                result[i].push_back(result[i-1][k]+result[i-1][k+1]);
                k++;
            }
            result[i].push_back(1);
            i++;
        }
        return result;
    }
};
