class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> mp;
        vector<vector<int>> result;
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }
        int count = 0;
        for(auto i:mp){
            int size = i.first;
            vector<int> elements = i.second;
            int noOfElements = elements.size();
            //USING AN EXTRA VECTOR
            // vector<int> extra;
            // int count = 0;
            // while(noOfElements>0){
            //     extra.insert(extra.end(), elements.begin()+count, elements.begin()+ count + size);
            //     result.push_back(extra);
            //     extra.clear();
            //     count+=size;
            //     noOfElements -= size;
            // }
            for (int i = 0; i < elements.size(); i += size) {
                result.push_back(vector<int>(elements.begin() + i, elements.begin() + i + size));
            }
        }
        return result;
    }
};
