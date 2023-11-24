class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //USES SET
        //O(N) and O(N) time and space complexity respectively
        
        // if(nums.size() == 0)
        // return 0;
        // set<int> st(nums.begin(),nums.end());
        // int count = 1, largest = 1;
        // for(auto it = next(st.begin()); it != st.end();it++){
        //     if(*it - *prev(it) ==  1){
        //         count ++;
        //         largest = max(largest, count);
        //     }
        //     else{
        //         count = 1;
        //     }
        // }
        // return largest;

        //USING SORTING
        //O(NlogN) and O(1) time and space compexity respectively.
        
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int result = 1;
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] - nums[i-1] == 1){
                count++;
                result = max(result,count);
            }
            else if(nums[i] == nums[i-1]) continue;
            else{
                count = 1;
            }
        }
        return result;
    }
};
