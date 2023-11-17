class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini_max = INT_MIN,left = 0,right = nums.size()-1;
        while(left < right){
            mini_max = max((nums[left++]+nums[right--]),mini_max);
        }
        return mini_max;
    }
};
