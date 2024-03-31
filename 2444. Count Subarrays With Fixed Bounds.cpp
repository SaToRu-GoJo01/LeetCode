class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minPosition = -1;
        int maxPosition = -1;
        int culprit = -1;
        int n = nums.size();
        long long result = 0;

        for(int i=0;i<n;i++){
            if(nums[i] < minK || nums[i] > maxK) culprit = i;

            if(minK == nums[i]) minPosition = i;

            if(maxK == nums[i]) maxPosition = i;

            int smaller = min(maxPosition,minPosition);

            int temp = smaller - culprit;

            result += (temp <= 0)?0:temp;
        }

        return result;
    }
};
