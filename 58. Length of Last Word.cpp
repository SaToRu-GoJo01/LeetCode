class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        while(s[i] == ' '){
            i--;
        }
        int n = i;
        for(;i>=0;i--){
            if(s[i] == ' '){
                return n - i;
            }
        }
        return n - i;
    }
};
