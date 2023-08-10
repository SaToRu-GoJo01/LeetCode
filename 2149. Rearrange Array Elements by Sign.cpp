class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int posIdx=0,negIdx=1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] < 0){
                result[negIdx] = nums[i];
                negIdx+=2; 
            }
            else{
                result[posIdx] = nums[i];
                posIdx += 2;
            }
        }
        return result;
    }
};
