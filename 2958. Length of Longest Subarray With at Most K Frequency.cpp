class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0,n = nums.size();
        unordered_map<int,int> map;
        int maxLength = 0;
        int culprit = 0;
        while(i < n){
            map[nums[i]]++;
            
            if(map[nums[i]] == k+1){
                culprit++;
            }

            if(culprit > 0){
                map[nums[j]]--;
                if(map[nums[j]] == k){
                    culprit--;
                }
                j++;
            }

            if(culprit == 0){
                maxLength = max(maxLength,i - j + 1);
            }

            i++;
        }
        return maxLength;
    }
};
