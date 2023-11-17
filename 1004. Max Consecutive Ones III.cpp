class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0,curr;
        for(curr=0;curr<nums.size();curr++){
            if(nums[curr] == 0) k--;
            if(k < 0 && nums[start++] == 0) k++;
        }
        return curr - start;
    }
};
