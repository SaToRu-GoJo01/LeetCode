class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        //With Using another vector
        // vector <int> result;
        // int i = 0,j = 0;
        // while(i < m && j < n){
        //     if(nums1[i] <= nums2[j]){
        //         result.push_back(nums1[i]);
        //         i++;
        //     }
        //     else if(nums1[i] > nums2[j]){
        //         result.push_back(nums2[j]);
        //         j++;
        //     }
        // }
        // while(i < m){
        //     result.push_back(nums1[i]);
        //     i++;
        // }
        // while(j < n){
        //     result.push_back(nums2[j]);
        //     j++;
        // }
        // nums1.clear();
        // copy(result.begin(),result.end(),back_inserter(nums1));

        //WITHOUT USING ANOTHER VECTOR
        int i = m - 1, j = n - 1, k = m + n - 1;
        while(i >= 0 && j >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
        while(i >= 0){
            nums1[k--] = nums1[i--];
        }
        while(j >= 0){
            nums1[k--] = nums2[j--];
        }
    }
};
