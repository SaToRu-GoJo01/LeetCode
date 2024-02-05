class Solution {
public:
    int firstUniqChar(string s) {
        // DIFFERENT APPROACH
        // unordered_map<char,pair<int,int>> freq;
        // for(int i=0;i<s.size();i++){
        //     auto &val = freq[s[i]];
        //     val.first++;
        //     if(val.first == 1){
        //         val.second = i;
        //     }
        // }
        // int mini = INT_MAX;
        // for(auto &i:freq){
        //     if(i.second.first == 1){
        //         if(i.second.second < mini) mini = i.second.second;
        //     }
        // }
        // return mini==INT_MAX?-1:mini;

        // APPROACH 2
        unordered_map<char,int> freq;
        for(char i:s) freq[i]++;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(freq[s[i]] == 1) return i;
        }
        return -1;
    }
};
