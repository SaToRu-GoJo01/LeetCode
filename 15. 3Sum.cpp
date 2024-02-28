// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> result;
//         set<vector<int>> st;
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         for(int i=0;i<n-2;i++){
//             int low = i + 1,high = n - 1;
//             while(low < high){
//                 if(nums[i]+nums[low]+nums[high] > 0){
//                     high--;
//                 }
//                 else if(nums[i]+nums[low]+nums[high] < 0){
//                     low++;
//                 }
//                 else{
//                     st.insert({nums[i],nums[low],nums[high]});
//                     low++;
//                     high--;
//                 }
//             }
//         }
//         for(auto &i:st){
//             result.push_back(i);
//         }
//         return result;
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        for(int i=0; i<n-1; i++){
            int low = i+1, high = n-1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }
                else{
                    output.push_back({nums[i], nums[low], nums[high]});
                    int tempIndex1 = low, tempIndex2 = high;
                    while(low < high && nums[low] == nums[tempIndex1]) low++;
                    while(low < high && nums[high] == nums[tempIndex2]) high--;
                }
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return output;
    }
};
