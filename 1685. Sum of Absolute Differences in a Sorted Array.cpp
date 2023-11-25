class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = 0;
        for(auto i:nums){
            sum += i;
        }
        int left = 0,right = sum,length = nums.size();
        vector<int> result;
        for(int i=0;i<length;i++){
            int n = nums[i];
            right -= n;
            result.push_back(n*i - left + right - n*(length-i-1));
            left += n;
        }
        return result;
    }
};
