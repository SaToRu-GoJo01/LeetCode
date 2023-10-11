class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0') % 2 == 1){
                string str = "";
                for(int j=0;j<=i;j++){
                    str+=num[j];
                }
                return str;
            }
        }
        return "";
    }
};
