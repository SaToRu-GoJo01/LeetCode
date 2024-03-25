class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(auto &i:nums){
            int idx = abs(i)-1;
            if(nums[idx] > 0){
                nums[idx] = nums[idx]*(-1);
            }
            else{
                result.push_back(idx+1);
            }
        }
        return result;
    }
};
