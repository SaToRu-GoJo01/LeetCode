class Solution {
public:
    vector<int> getRow(int rowIndex) {

        // Using Array of vectors
        // vector<vector<int>> result(rowIndex+1);
        // for(int i =0; i <= rowIndex; i++){
        //     result[i].resize(i+1,1);
        //     for(int j = 1; j<i ;j++){
        //         result[i][j] = result[i-1][j-1] + result[i-1][j];
        //     }
        // }
        // return result[rowIndex];

        // Using Two Vectors Only
        vector<int> prev(rowIndex+1),curr(rowIndex+1);
        for(int i = 0; i<=rowIndex ;i++){
            for(int j = 0 ; j<=i ; j++){
                if(j == 0 || j == i) curr[j] = 1;
                else curr[j] = prev[j-1] + prev[j];
            }
            prev = curr;
        }
        return curr;
    }
};
