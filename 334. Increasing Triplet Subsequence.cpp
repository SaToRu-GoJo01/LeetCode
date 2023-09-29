class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int left = INT_MAX,mid=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < left) left = nums[i];
            else if(nums[i] < mid && nums[i] > left) mid = nums[i];
            else if(nums[i] > left && nums[i] > mid) return true;
        }
    return false;
    }
};
