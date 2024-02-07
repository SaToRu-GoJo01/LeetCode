class Solution {
public:
    int memo[21][21];
    int solve(vector<int> nums,int i,int j){
        if(i > j) return 0;
        if(i == j) return nums[i];
        if(memo[i][j] != -1) return memo[i][j];
        int take_i = nums[i] + min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int take_j = nums[j] + min(solve(nums,i+1,j-1),solve(nums,i,j-2));
        return memo[i][j] = max(take_i,take_j);
    }
    bool predictTheWinner(vector<int>& nums) {
        memset(memo,-1,sizeof(memo));
        int total_score = accumulate(nums.begin(),nums.end(),0);
        int player1 = solve(nums,0,nums.size()-1);
        int player2 = total_score-player1;
        return player2 <= player1?true:false;
    }
};
