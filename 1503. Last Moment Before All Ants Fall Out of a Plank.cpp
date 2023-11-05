class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxi = 0;
        for(auto i:left){
            maxi = max(maxi,i);
        }
        int mini = INT_MAX;
        for(auto i:right){
            mini = min(mini,i);
        }
        mini = n - mini;
        return max(maxi,mini);
    }
};
