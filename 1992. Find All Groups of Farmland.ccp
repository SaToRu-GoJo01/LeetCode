class Solution {
public:
    int x = 0,y = 0;
    void traversal(int i,int j,vector<vector<int>>&land,vector<vector<bool>> &visited){
        if (i >= land.size() || j >= land[0].size() || i < 0 || j < 0 || visited[i][j] || land[i][j] == 0) {
            return;
        }
        if(x <= i) x=i;
        if(y <= j) y=j;
        visited[i][j] = true;
        traversal(i+1,j,land,visited);
        traversal(i,j+1,land,visited);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<bool>> visited(land.size(),vector<bool>(land[0].size(),false));
        vector<vector<int>> result;
        for(int i = 0; i<land.size(); i++){
            for(int j = 0; j<land[0].size(); j++){
                if(land[i][j] == 1 && !visited[i][j]){
                    traversal(i,j,land,visited);
                    result.push_back({i,j,x,y});
                    x = 0;
                    y = 0;
                }
            }
        }
        return result;
    }
};
