class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> freq(mat.size());
        vector<int> indices(mat.size(),0);
        for(int i=0;i<mat.size();i++){
            auto it = find(mat[i].begin(),mat[i].end(),0);
            int count = distance(mat[i].begin(),it);
            // for(int j=0;j<mat[i].size();j++){
            //     if(mat[i][j] == 1){
            //         count++;
            //     }
            //     else{
            //         break;
            //     }
            // }
            freq[i] = {count,i};
        }
        sort(freq.begin(),freq.end());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(freq[i].second);
        }
        return result;
    }
};
