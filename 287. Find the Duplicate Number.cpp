class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] == nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }

        //SLOW-FAST APPROACH
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        fast = nums[0];
        while(fast != slow){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
