class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // APPROACH NUMBER ONE
        // sort(nums.begin(),nums.end());
        // int i;
        // for(i=0;i<nums.size();i++)
        // {
        //     if(i != nums[i]){
        //         return i;
        //     }
        // }
        // return i;

        // APPROACH NUMBER TWO
        int n = nums.size();
        int  s1 = n*(n+1)/2;
        int s2=0;
        for(int i=0;i<n;i++){
            s2+=nums[i];
        }
        return s1-s2;
    }
};
