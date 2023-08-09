class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int n : nums){
            mp[n]++;
        }
        for(auto n : mp){
            if(n.second > nums.size()/2)
            return n.first;
        }
        return 0;
    }
};
