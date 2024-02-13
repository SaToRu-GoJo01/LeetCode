class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      // USING COUNT SORT AND COMMULATIVE SUM
        int count[101] = {0};
        for(auto &i:nums) count[i]++;
        int prev=0;
        for(auto &i:count){
            int temp = i;
            i = prev;
            prev = temp+prev;
        }
        vector<int> result;
        for(auto &i:nums){
            result.push_back(count[i]);
        }
        return result;
    }
};
