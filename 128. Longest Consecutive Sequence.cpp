class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        return 0;
        set<int> st(nums.begin(),nums.end());
        int count = 1, largest = 1;
        for(auto it = next(st.begin()); it != st.end();it++){
            if(*it - *prev(it) ==  1){
                count ++;
                largest = max(largest, count);
            }
            else{
                count = 1;
            }
        }
        return largest;
    }
};
