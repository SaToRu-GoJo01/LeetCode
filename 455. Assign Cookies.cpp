class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        int i=0,j=0;
        while(i < s.size() && j < g.size()){
            if(s[i] >= g[j]){
                ans++;
                j++;
            }
            i++;
        };
        return ans;
    }
};
