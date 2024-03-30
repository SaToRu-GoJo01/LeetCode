class Solution {
public:
    // Calculating all the subarrays that have unique elements that are <= k.
    int solve(vector<int>& nums, int k){
        int count = 0;
        int i=0,j=0,n=nums.size();
        unordered_map<int,int> map;
        while(i<n){
            map[nums[i]]++;

            while(map.size() > k){
                map[nums[j]]--;
                if(map[nums[j]] == 0){
                    map.erase(nums[j]);
                }
                j++;
            }

            count += i-j+1;

            i++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k) - solve(nums,k-1);
    }
};
