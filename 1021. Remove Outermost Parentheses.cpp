class Solution {
public:
    string removeOuterParentheses(string s) {
        // int count = 0,start=0;
        // for(int i=0;i<s.length();i++){
        //     if(s[i] == '(') count++;
        //     else if(s[i] == ')') count--;
        //     if(count == 0){
        //         s.erase(i,1);
        //         s.erase(start,1);
        //         i -= 2;
        //         start = i+1;
        //     }
        // }
        // return s;

        //Using Stack
        string result="";
        stack<char> st;
        for(auto i:s){
            if(i == '('){
                if(!st.empty()){
                    result.push_back(i);
                }
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};
