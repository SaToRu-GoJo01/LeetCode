class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if(s[i] == ')'){
                if(st.empty()){
                    s.erase(i,1);
                    i--;
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            s.erase(st.top(),1);
            st.pop();
        }
        return s;
    }
};
