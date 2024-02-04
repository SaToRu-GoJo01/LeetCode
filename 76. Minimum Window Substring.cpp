class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";
        unordered_map<char,int> mp;
        for(auto &i:t)
            mp[i]++;
        int start_i=0;
        int minSize = INT_MAX;
        int n = s.size();
        int i=0,j=0;
        int required = t.size();
        while(j<n){
            if(mp[s[j]] > 0){
                required--;
            }
            mp[s[j]]--;
            while(required == 0){
                int currentSize = j-i+1;
                if(minSize > currentSize){
                    minSize = currentSize;
                    start_i = i;
                }
                mp[s[i]]++;
                if(mp[s[i]] > 0)
                    required++;
                i++;
            }
            j++;
        }
        return minSize == INT_MAX?"":s.substr(start_i,minSize);
    }
};
