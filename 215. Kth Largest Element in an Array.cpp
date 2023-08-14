class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
//         map<int,int,greater<int>> st;
//         for(auto i:nums)
//         {
//             st[i]++;
//         }
//         int i = 0;
//         for(auto it : st)
//         {
//             i+=it.second;
//             if(i >= k){
//                 return it.first;
//             }
//         }
//         return 0;
//         // sort(nums.begin(),nums.end());
//         // return nums[nums.size() - k];
//     }
priority_queue<int,vector<int>,greater<int>>p;
        for(auto x:nums){
            p.push(x);
            if(p.size()>k){
                p.pop();
            }
        }
        return p.top();
    }
};
