class Solution {
public:
    string generate(string given){
        vector<int>freq(26,0);
        for(auto &i:given){
            freq[i-'a']++;
        }
        string newString = "";
        for(int i=0;i<26;i++){
            if(freq[i] > 0)
                newString += string(freq[i],i+'a');
        }
        return newString;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> record;
        for(auto &i:strs){
            // USING SORTING
            // string curr = i;
            // sort(i.begin(),i.end());
            // record[i].push_back(curr);

            // USING FREQ VECTOR
            string newString = generate(i);
            record[newString].push_back(i);
        }
        vector<vector<string>> result;
        for(auto &i:record){
            result.push_back(i.second);
        }
        return result;
    }
};
