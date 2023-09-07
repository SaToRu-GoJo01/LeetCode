class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0;
        int count  = 0;
        for(auto i:nums){
            sum += i;
            int x = sum - k;
            if(mp.find(x) != mp.end()){
                count += mp[x];
            }
            mp[sum]++;
        }
        return count;
    }
};
