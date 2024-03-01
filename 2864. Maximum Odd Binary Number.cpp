class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one = -1,n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                s[i] = '0';
                s[++one] = '1';
            }
        }
        if(one == n-1) return s;
        s[one] = '0';
        s[n-1] = '1';
        return s;
    }
};
