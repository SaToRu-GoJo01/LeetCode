class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxElement = *max_element(begin(nums),end(nums));

        int i=0,j=0;
        long long answer = 0;
        int currFreq = 0;
        
        while(j < nums.size()){
            if(nums[j] == maxElement) currFreq++;
            
            while(currFreq >= k){
                answer += nums.size() - j;
                if(nums[i] == maxElement){
                    currFreq--;
                }    
                i++;
            }

            j++;
        }
        
        return answer;
    }
};
