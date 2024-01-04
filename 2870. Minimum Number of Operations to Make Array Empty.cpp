class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        int operations = 0;
        for(auto i:mp){
            if(i.second == 1) return -1;
            operations += i.second / 3;
            if(i.second%3)operations++;
        }
        return operations;
    }
};
