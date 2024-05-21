class Solution {
public:
    void subsequence(int level,vector<vector<int>> &ans,vector<int>&nums,vector<int>currAns){
        if(level == nums.size()){
            ans.push_back(currAns);
            return;
        }
        subsequence(level+1,ans,nums,currAns);
        currAns.push_back(nums[level]);
        subsequence(level+1,ans,nums,currAns);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        subsequence(0,ans,nums,{});
        return ans;
    }
};
