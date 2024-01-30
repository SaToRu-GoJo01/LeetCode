class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        unordered_map<char,char> record;
        record['('] = ')';
        record['{'] = '}';
        record['['] = ']';
        for(auto i:s){
            if(i == '(' || i == '{' || i == '['){
                open.push(i);
            }
            else{
                if(!open.empty() && record[open.top()] == i){
                    open.pop();
                }
                else return false;
            }
        }
        if(open.empty()) return true;
        return false;
    }
};
