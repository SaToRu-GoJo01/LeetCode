class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k == 1) return max(arr[0],arr[1]);
        if(k >= arr.size()) return *max_element(arr.begin(),arr.end());
        int curr = arr[0];
        int count = 0;
        for(int i=1;i<arr.size();i++){
            if(arr[i] > curr){
                curr = arr[i];
                count = 0;
            }
            count++;
            if(count == k) break;
        }
        return curr;
    }
};
