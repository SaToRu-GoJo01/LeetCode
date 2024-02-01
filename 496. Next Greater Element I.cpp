class Solution {
public:
    unordered_map<int,int> nextGE(vector<int>&nums2){
        stack<int> monoTonicStack;
        unordered_map<int,int> result;
        for(int i = nums2.size()-1;i>=0;i--){
            result[nums2[i]] = -1;
            while(!monoTonicStack.empty() && monoTonicStack.top() <= nums2[i]){
                monoTonicStack.pop();
            }
            if(!monoTonicStack.empty()){
                result[nums2[i]] = monoTonicStack.top();
            }
            monoTonicStack.push(nums2[i]);
        }
        return result;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nextGreatest = nextGE(nums2);
        vector<int> result;
        for(auto i:nums1){
            result.push_back(nextGreatest[i]);
        }
        return result;
    }
};
