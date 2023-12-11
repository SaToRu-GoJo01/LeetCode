class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int total = arr.size();
        int qtr = total/4;
        int cnt = 1;
        int prev = arr[0];
        for(int i=1;i<total;i++){
            if(prev == arr[i]) cnt++;
            else cnt = 1;
            if(cnt > qtr) return arr[i];
            prev = arr[i];
        }
        return prev;
    }
};
