class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0;
        int sum = 0;
        for(;i<k;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            sum++;
        }
        int max_sum = sum;
        for(;i<s.size();i++){
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u' || s[i-k] == 'A' || s[i-k] == 'E' || s[i-k] == 'I' || s[i-k] == 'O' || s[i-k] == 'U')
            sum--;
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            sum++;
            max_sum = max(max_sum,sum);
        }
        return max_sum;
    }
};
