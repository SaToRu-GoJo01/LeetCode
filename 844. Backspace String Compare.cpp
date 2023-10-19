class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string extras="",extrat="";
        int backspace = 0;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i] =='#') backspace++;
            else if(s[i] != '#' && backspace != 0){
                backspace--;
            }
            else{
                extras += s[i];
            }
        }
        backspace = 0;
        for(int i = t.size()-1;i>=0;i--){
            if(t[i] =='#') backspace++;
            else if(t[i] != '#' && backspace != 0){
                backspace--;
            }
            else{
                extrat += t[i];
            }
        }
        return extras == extrat;
    }
};
