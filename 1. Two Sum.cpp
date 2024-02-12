class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //BRUTE FORCE APPROACH
        // int a=0;
        // int b=0;
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //             a=i;
        //             b=j;
        //         }
        //     }
        // }
        // return {a,b};


        //TWO POINTER APPROACH
        vector<pair<int,int>> temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back(make_pair(nums[i],i));
        }
        sort(temp.begin(),temp.end());
        auto left=temp.begin(),right=temp.end();
        right--;
        while(left < right){
            if(left->first + right->first == target){
                return {left->second,right->second};
            }
            else if(left->first + right->first > target)
            right--;
            else
            left++;
        }
        return {0};


        // USING HASHING AND COMPLEMENT ELEMENT
        vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(mp.count(complement)){
                return {mp[complement],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
