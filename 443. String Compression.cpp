class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> str;
        int n = chars.size(),count=0,c;
        for(int i=0;i<n;){
            int count = 0;
            char currentCharacter = chars[i];
            while(i < n && currentCharacter == chars[i]){
                i++;
                count++;
            }
            str.push_back(currentCharacter);
            if(count > 1){
                string extra = to_string(count);
                {
                    for(auto s:extra){
                        str.push_back(s);
                    }
                }
            }
        }
        chars.assign(str.begin(), str.end());
        return str.size();
    }
};
