class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(auto &i:nums)k=i^k;
        int count = 0;
        while(k){
            count+=k&1;
            k>>=1;
        }
        return count;
    }
};
