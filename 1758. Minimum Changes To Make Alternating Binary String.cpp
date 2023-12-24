class Solution {
public:
    int minOperations(string s) {
        char prev = s[0];
        int change = 0;
        for(int i=1;i<s.size();i++){
            if(s[i] == prev){
                change++;
                if(s[i] == '1'){
                    s[i] = '0';
                }
                else{
                    s[i] = '1';
                }
            }
            prev = s[i];
        }
        if(change < s.size()-change) return change;
        return s.size()-change;
    }
};
