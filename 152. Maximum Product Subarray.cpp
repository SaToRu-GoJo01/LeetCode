class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int preffix = 1,suffix =1,maxi=INT_MIN,n = nums.size()-1;
        for(int i=0;i<=n;i++){
            if(preffix == 0) preffix = 1;
            if(suffix == 0) suffix = 1;
            preffix*=nums[i];
            suffix*=nums[n-i];
            maxi = max(maxi,max(preffix,suffix));
        }
        return maxi;
    }
};
