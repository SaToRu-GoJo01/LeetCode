class Solution {
public:
    int longestIdealString(string s, int k) {
        // TLE
        // vector<int>len(s.size(),1);
        // int result=1;
        // for(int i=0;i<s.size();i++){
        //     for(int j = i-1;j>=0;j--){
        //         if(abs(s[j]-s[i])<=k){
        //             len[i] = max(len[i],len[j]+1);
        //         }
        //     }
        //     result = max(result,len[i]);
        // }
        // return result;
        vector<int> len(26,0);
        int result=1;
        for(auto &i:s){
            int idx = i-'a';
            int left = max(0,idx-k);
            int right = min(25,idx+k);
            for(;left<=right;left++){
                len[idx] = max(len[idx],len[left]);
            }
            result = max(result,len[idx]+1);
            len[idx]+=1;
        }
        return result;
    }
};
