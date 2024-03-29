class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool isOne = false;

        // Replacing Bigger numbers than n and smaller or equal numbers to 0. Because they can never be a part of the answer.
        for(int i=0;i<n;i++){
            if(nums[i] == 1) isOne = true;
            if(nums[i] > n) nums[i] = 1;
            else if(nums[i] <= 0) nums[i] = 1;
        }


        // Checking if one exists if it does there is nothing to do here and if it doesn't 1 is the answer.
        if(!isOne){
            return 1;
        }


        // Replacing each number of the array with it's negative value as it will represent that if nums[i] is negative than i+1 is present in the array and is not the answer;
        // Example 3 is there than on index 2 the element will be marked as negative. 
        for(int i=0;i<n;i++){
            int idx = abs(nums[i]) - 1;
            nums[idx] = -abs(nums[idx]) ; 
        }

        // Checking the number that is none negative on i and it will represent that i+1 is not in the array and the first none negative number is the answer. i.e (i+1) and may be in case every other number is present in the array from 1 to n than the answer is (n+1)
        for(int i=0;i<n;i++){
            if(nums[i] > 0) return i+1;
        }

        return n+1;
    }
};
