class Solution {
public:
    string makeGood(string s) {
        for(int i=1;i<s.size();){
            if(abs(s[i] - s[i-1]) == 32 ){
                s.erase(i-1,2);
                i=1;
            }
            else{
                i++;
            }
        }
        return s;
    }
};
