class Solution {
public:
    bool possible(vector<int>&nums,int threshold,int current){
	    int sum = 0;
	    for(auto i:nums){
	    	sum += ceil(i/(double)current);
	    }
	    return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
	    int low = 1,high = INT_MIN,ans;
	    for(auto i: nums){
		    high = max(high,i);
	    }
	    while(low <= high){
		    int mid = low + (high - low)/2;
		    if(possible(nums,threshold,mid)){
		    	high = mid - 1;
		    	ans = mid;
	    	}
		    else{
		    	low = mid + 1;
		    }
	    }
	    return ans;
    }
};
