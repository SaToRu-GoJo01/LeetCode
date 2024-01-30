class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto i:tokens){
            if(i != "+" && i != "-" && i != "/" && i != "*"){
                st.push(stoi(i));
            }
            else{
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(i == "+"){
                    st.push(a+b);
                }else if(i == "-"){
                    st.push(b-a);
                }else if(i == "/"){
                    st.push(b/a);
                }else{
                    st.push(b*a);
                }
            }
        }
        return st.top();
    }
};
