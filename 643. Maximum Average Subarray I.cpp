class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        double sum = 0;
        for(;i<k;i++){
            sum+=nums[i];
        }
        double max_sum = sum;
        for(;i<nums.size();i++){
            sum = (sum - nums[i - k]) + nums[i];
            max_sum = max(max_sum,sum);
        }
        return max_sum/k;
    }
};
