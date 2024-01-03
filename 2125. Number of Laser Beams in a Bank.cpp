class Solution {
public:
    int calc(string row){
        int ans = 0;
        for(auto i:row){
            ans+=i-'0';
        }
        return ans;
    }
    int numberOfBeams(vector<string>& bank) {
        int prev = 0;
        int ans = 0;
        for(auto i:bank){
            int curr_one = calc(i);
            if(!curr_one) continue;
            ans += prev*curr_one;
            prev = curr_one;
        }
        return ans;
    }
};
