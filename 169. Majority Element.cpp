class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int n : nums){
        //     mp[n]++;
        // }
        // for(auto n : mp){
        //     if(n.second > nums.size()/2)
        //     return n.first;
        // }
        // return 0;

        // Moore's Voting Algo.
        int vote = 0,candidate = -1;
        for(auto &i:nums){
            if(vote == 0){
                candidate = i;
                vote++;
            }
            else if(candidate == i){
                vote++;
            }
            else{
                vote--;
            }
        }
        int count = 0;
        for(auto &i:nums){
            if(i == candidate) count++;
        }
        if(count > nums.size()/2) return candidate;
        return -1;
    }
};
