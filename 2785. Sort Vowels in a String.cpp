class Solution {
public:
    string sortVowels(string s) {
        vector<char> chr;
        for(int i = 0;i < s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U'){
                chr.push_back(s[i]);
            }
        }
        sort(chr.begin(),chr.end());
        int extra = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U'){
                s[i] = chr[extra++];
            }
        }
        return s;
    }
};
