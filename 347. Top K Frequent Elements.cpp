class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<int> result;
        vector<pair<int,int>> extra(mp.begin(),mp.end());
        sort(extra.begin(),extra.end(),[](const auto & lhs, const auto & rhs){
            return lhs.second > rhs.second;
        });
        for(auto i:extra){
            result.push_back(i.first);
            k--;
            if(k == 0) break;
        }
        return result;
    }
};
