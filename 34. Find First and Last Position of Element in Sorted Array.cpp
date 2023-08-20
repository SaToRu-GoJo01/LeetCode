class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2,-1);
        if(nums.size() == 0)
        return result;
        
        //BINARY SEARCH APPROACH
        //Finding starting address
        int start = 0, end = nums.size() - 1;
        while(start <= end){
            int mid = (start+end)/2;
            if(nums[mid] > target){
                end = mid - 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                result[0] = mid;
                end = mid - 1;
            }
        }
        //Findind End address
        start = 0, end = nums.size() - 1;
        while(start <= end){
            int mid = (start+end)/2;
            if(nums[mid] > target){
                end = mid - 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                result[1] = mid;
                start = mid + 1;
            }
        }

        //LINEAR SEARCH APPROACH
        // int count = 0;
        // for(int i = 0 ; i<nums.size() ; i++){
        //     if(nums[i] == target && count == 0){
        //         result[0] = i;
        //         count++;
        //     }
        //     else if(nums[i] == target){
        //         result[1] = i;
        //     }
        // }
        // if(result[1] == -1){
        //     result[1] = result[0];
        // }
        return result;
    }
};
