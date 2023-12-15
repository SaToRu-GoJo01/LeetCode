class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> from;
        for(auto i:paths){
            from.insert(i[0]);
        }
        for(auto i:paths){
            if(from.find(i[1]) == from.end()){
                return i[1];
            }
        }
        return "";
    }
};
