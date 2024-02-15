
// PYTHON
class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums = sorted(nums)
        total_Sum = sum(nums)
        for i in range(len(nums)-1,1,-1):
            if total_Sum - nums[i] > nums[i]:
                return total_Sum
            total_Sum -= nums[i] 
        return -1


  // C++
  class Solution {
public:
    long long totalSum(vector<int> & nums){
        long long total = 0;
        for(auto &i:nums) total += i;
        return total;
    }
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long total = totalSum(nums);
        for(int i=nums.size()-1;i>=2;i--){
            if(total - nums[i] > nums[i]) return total;
            total -= nums[i];
        }
        return -1;
    }
};
