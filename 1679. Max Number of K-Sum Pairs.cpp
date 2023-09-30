class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //BRUTE FORCE APPROACT
        int count = 0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j] == k && nums[i] != -1 && nums[j] != -1){
        //             count++;
        //             nums[i] = -1;
        //             nums[j] = -1;
        //         }
        //     }
        // }
        // return count;

        // BETTER APPROACT
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     if(mp[k-nums[i]] > 0){
        //         mp[k-nums[i]]--;
        //         count++;
        //     }
        //     else{
        //         mp[nums[i]]++;
        //     }
        // }

        //OPTIMAL APPROACT
        int i = 0,j = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j] == k){
                i++;
                j--;
                count++;
            }
            else if(nums[i]+nums[j] < k){
                i++;
            }
            else{
                j--;
            }
        }
        return count;
    }
};
