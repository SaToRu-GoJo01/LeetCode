class Solution {
public:
    string reverseWords(string s) {
        //USING EXTRA SPACE
        // reverse(s.begin(),s.end());
        // string str = "";
        // stack<char> st;
        // for(auto i:s){
        //     if(i != ' '){
        //         st.push(i);
        //     }
        //     else if(!st.empty()){
        //         while(!st.empty()){
        //             str+=st.top();
        //             st.pop();
        //         }
        //         str+=" ";
        //     }
        // }
        // while(!st.empty()){
        //             str+=st.top();
        //             st.pop();
        //         }
        // if(str[str.size()-1] == ' '){
        //     str.erase(str.size()-1,1);
        // }
        // return str;

        //USING CONSTANT SPACE
        int j = 0,i=0;
        while(i < s.length()){
            while(i < s.length() && s[i] == ' ') i++;
            if(j > 0 && i < s.length()){
                s[j++] = ' ';
            }
            int start = j;
            while(i < s.length() && s[i] != ' '){
                s[j++] = s[i++];
            }
            reverse(s.begin()+start,s.begin()+j);
        }
        s.resize(j);
        reverse(s.begin(),s.end());
        return s;
    }
};
