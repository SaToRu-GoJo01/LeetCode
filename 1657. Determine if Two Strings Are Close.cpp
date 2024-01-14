class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> freq1(26);
        vector<int> freq2(26);
        vector<bool> present(26);
        if(word1.size() != word2.size()){
            return false;
        }
        for(int i=0;i<word1.size();i++){
            freq1[word1[i]-'a']++;
            present[word1[i]-'a'] = true;
        }
        for(int i=0;i<word2.size();i++){
            if(!present[word2[i]-'a']) return false;
            freq2[word2[i]-'a']++;
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        if(freq1 == freq2) return true;
        return false;
    }
};
