class Solution {
public:
    int toTime(vector<int>from,vector<int>to){
        int diff_x = abs(from[0]-to[0]);
        int diff_y = abs(from[1]-to[1]);
        return max(diff_x,diff_y);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum = 0;
        for(int i=1;i<points.size();i++){
            sum+=toTime(points[i-1],points[i]);
        }
        return sum;
    }
};
