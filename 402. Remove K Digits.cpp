class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k == num.size()) return "0";
        string result = "";
        for(auto &i:num){
            while(result.size() > 0 && i < result.back() && k > 0){
                result.pop_back();
                k--;
            }
            if(result.size() > 0 || i != '0'){
                result.push_back(i);
            }
        }
        while(result.size() > 0 && k != 0){
            result.pop_back();
            k--;
        }
        return result==""?"0":result;
    }
};
