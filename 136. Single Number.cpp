class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size()-1;i+=2){
            if(nums[i] != nums[i+1]){
                break;
            }
        }
        return nums[i];
    }
};
