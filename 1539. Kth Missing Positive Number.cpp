class Solution {
public:
    int findKthPositive(vector<int>& vec, int k) {
        if(vec[0]>k) return k;
        int low = 0,high = vec.size() - 1;
        while(low <= high){
           int mid = low + (high - low)/2;
           if((vec[mid]- mid - 1)>=k){
               high = mid - 1;
          }
          else{
                low = mid + 1;
            }
        }
        return (vec[high] + (k-(vec[high]-high-1)));
    }
};
