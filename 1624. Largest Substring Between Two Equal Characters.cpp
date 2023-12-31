class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> mp;
        int size = -1;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i]) != mp.end()){
                size = max(size,(i - mp[s[i]] - 1));
            }
            else{
                mp[s[i]] = i;
            }
        }
        return size; 
    }
};
