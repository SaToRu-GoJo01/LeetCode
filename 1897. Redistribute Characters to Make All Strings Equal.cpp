class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if(words.size() == 1) return true;
        unordered_map<char,int> mp;
        for(auto i:words){
            for(auto j:i){
                mp[j]++;
            }
        }
        int n = words.size();
        for(auto i:mp){
            if(i.second%n != 0) return false;
        }
        return true;
    }
};
