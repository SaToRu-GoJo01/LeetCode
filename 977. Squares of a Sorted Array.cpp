class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        for(int &i:nums){
            i*=i;
        }

        vector<int> result(nums.size(),0);

        int left = 0,right = nums.size()-1;

        for(int i = nums.size()-1;i>=0;i--){
            if(nums[left] > nums[right]){
                result[i] = nums[left];
                left++;
            }
            else{
                result[i] = nums[right];
                right--;
            }
        }

        return result;
    }
};
