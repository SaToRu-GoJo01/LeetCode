class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0,i = 0,j = 0;
        int n = nums.size();
        int product = 1;
        while(i < n){
            product *= nums[i];
            while(j <= i && product >= k){
                product /= nums[j];
                j++;
            }
            count += i-j+1;
            i++;
        }
        return count;
    }
};
