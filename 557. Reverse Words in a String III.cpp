class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        int start = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == ' ' || i == s.length()-1){
                int end = (i == s.length()-1)?i:i-1;
                reverse(s.begin()+start,s.begin()+end+1);
                start = i+1;
            }
        }
        return s;
    }
};
