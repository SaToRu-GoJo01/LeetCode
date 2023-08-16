class Solution {
public:
    int countPairs(vector<int> &nums,int lower, int mid, int upper){
        int right = mid + 1;
        int count = 0;
        for(int left = lower; left <= mid; left++){
            while(right <= upper && nums[left] >  2*(long long)nums[right] )
                right++;
            count += (right - (mid + 1));
        }
        return count;
    }


    void merge(vector<int> &nums, int lower, int mid, int upper){
    int left = lower;
    int right = mid+1;
    vector<int> temp;
    while(left <= mid && right <= upper){
        if(nums[left] <= nums[right]) temp.push_back(nums[left++]);
        else temp.push_back(nums[right++]); 
    }
    while(left <= mid)
    temp.push_back(nums[left++]);
    while(right <= upper)
    temp.push_back(nums[right++]);
    for(int i=lower;i<=upper;i++){
        nums[i] = temp[i-lower];
    }
    }


    int mergeSort(vector<int> &nums, int lower, int upper){
    int count = 0;
    if(lower >= upper) return count;
    int mid = (lower+upper)/2;
    count += mergeSort(nums,lower,mid);
    count += mergeSort(nums,mid+1,upper);
    count += countPairs(nums,lower,mid,upper);
    merge(nums,lower,mid,upper);
    return count;
    }

    
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};
