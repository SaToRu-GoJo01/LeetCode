class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       
       //LINEAR APPROACH
        // int i = 0;
        // for(; i<nums.size() ; i++){
        //     if(nums[i] >= target)
        //     return i;
        // }
        // return i;

        //BINARY SEARCH APPROACH
        // if(target < nums[0])
        // return 0;
        // int start = 0,end = nums.size() - 1,mid;
        // while(start <= end){
        //     mid = (start + end)/2;
        //     if(nums[mid] < target){
        //         start = mid + 1;
        //     }
        //     else if(nums[mid] > target){
        //         end = mid - 1;
        //     }
        //     else{
        //         // cout << mid << " I " << endl;
        //         return mid;
        //     }
        // }
        // // cout << mid;
        // return end+1;

        //ANOTHER APPROACH LEARNED WHILE CODING
        return(lower_bound(nums.begin(),nums.end(),target)-nums.begin());
    }
};
