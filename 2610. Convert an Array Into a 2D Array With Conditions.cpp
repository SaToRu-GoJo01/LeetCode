class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<vector<int>> result;
        vector<int> extra;
        while(!mp.empty()){
            auto it = mp.begin();
            while(it != mp.end()){
                extra.push_back(it->first);
                it->second--;
                if(it->second == 0){
                    it=mp.erase(it);
                }else{
                    it++;
                }
            }
            result.push_back(extra);
            extra.clear();
        }
        return result;
    }
};
