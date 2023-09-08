class Solution {
public:
    string truncateSentence(string s, int k) {
        for(int i = 0;i<s.length();i++){
            if(s[i] == ' ') k--;
            if(!k){
                s.erase(i,s.end() - s.begin() - i);
                return s;
            }
        }
        return s;
    }
};
