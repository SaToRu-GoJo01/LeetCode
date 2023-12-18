class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int max1 = nums[nums.size()-1],max2 = nums[nums.size()-2];
        // int min1 = nums[0],min2 = nums[1];
        // return (max1*max2) - (min1*min2);
        int max1 = INT_MIN,max2 = INT_MIN;
        int min1 = INT_MAX,min2 = INT_MAX;
        for(auto i:nums){
            if(i >= max1){
                max2 = max1;
                max1 = i;
            }
            else if(i < max1 && i > max2){
                max2 = i;
            }
            if (i <= min1){
                min2 = min1;
                min1 = i;
            }
            else if(i > min1 && i < min2){
                min2 = i;
            }
        }
        return (max2*max1)-(min1*min2);
    }
};
