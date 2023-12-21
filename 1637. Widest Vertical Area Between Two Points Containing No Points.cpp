class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](const auto &a,const auto &b){
            return a[0] < b[0];
        });
        int max_width = INT_MIN;
        for(int i=1;i<points.size();i++){
            max_width = max(points[i][0]-points[i-1][0],max_width);
        }
        return max_width;
    }
};
